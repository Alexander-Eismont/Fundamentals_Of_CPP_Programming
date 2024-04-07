/*
Напишите программу, которая считывает из файла in.txt двумерный массив и выводит
его на консоль. При этом каждая строка должна быть развёрнута в обратную
сторону. Файл in.txt устроен следующим образом: первые два числа — это число
строк и число столбцов двумерного массива. Далее идёт сам двумерный массив в
виде таблицы.
*/

#include <fstream>
#include <iostream>

int** createTwoDimArray(const int& rows, const int& columns);
void deleteTwoDimArray(int** arr, const int& rows, const int& columns);
void printArray(int** arr, const int& rows, const int& columns);

int main()
{
	setlocale(LC_ALL, "");

	// запись имени файла
	std::string filename{ "in.txt" };
	// открытие файла по имени
	std::ifstream file{ filename };

	// проверка на открытие файла
	if (!file.is_open())
	{
		std::cout << "Файл не найден!";
		return 1;
	}

	// получение количества строк из файла
	int rows{};
	file >> rows;

	// получение количества столбцов из файла
	int columns{};
	file >> columns;

	// создание двумерного массива
	int** nums{ createTwoDimArray(rows, columns) };

	// запись в массив
	for (unsigned i{}; i < rows; i++)
		for (unsigned j{}; j < columns; j++)
			file >> nums[i][j];

	printArray(nums, rows, columns);

	// закрытие файла
	file.close();
	// освобождения памяти
	deleteTwoDimArray(nums, rows, columns);

	return 0;
}

// создание двуменрного массива
int** createTwoDimArray(const int& rows, const int& columns)
{
	int** arr{ new int* [rows] };

	for (unsigned i{}; i < rows; i++)
		arr[i] = new int[columns] {};

	return arr;
}

// печать массива
void printArray(int** arr, const int& rows, const int& columns)
{
	for (int i{}; i < rows; i++)
	{
		for (int j{ columns - 1 }; j >= 0; j--)
			std::cout << arr[i][j] << " ";

		std::cout << "\n";
	}
}

// удаление массива (освобождение памяти)
void deleteTwoDimArray(int** arr, const int& rows, const int& columns)
{
	for (unsigned i{}; i < rows; i++)
		delete[] arr[i];

	delete[] arr;
}
