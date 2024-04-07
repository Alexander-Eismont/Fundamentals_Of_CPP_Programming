/*
Напишите четыре функции:

create_two_dim_array: принимает на вход количество строк и столбцов. Создаёт
целочисленный двумерный динамический массив заданной размерности и возвращает
указатель на него. fill_two_dim_array: принимает на вход указатель на двумерный
целочисленный массив, количество строк и столбцов в нём. Заполняет полученный
массив значениями из таблицы умножения. Таблица не ограничена 10 строками или 10
столбцами. Не возвращает ничего. print_two_dim_array: принимает на вход
указатель на двумерный целочисленный массив, количество строк и столбцов в нём.
Выводит полученный массив на консоль. Не возвращает ничего.
delete_two_dim_array: принимает на вход указатель на двумерный целочисленный
массив, количество строк и столбцов в нём. Очищает полученный массив. Не
возвращает ничего. Используйте эти функции для организации работы программы,
которая спрашивает у пользователя количество строк и столбцов и выводит на
консоль таблицу умножения заданной размерности.
*/

#include <iostream>

int getNumFromUser();
int** createTwoDimArray(int rows, int columns);
void fillTwoDimArray(int** arr, int rows, int columns);
void printTwoDimArray(int** arr, int rows, int columns);
void deleteTwoDimArray(int** arr, int rows, int columns);

int main()
{
	setlocale(LC_ALL, "rus");

	// Получение количества строк и столбцов
	std::cout << "Введите количество строк: ";
	int rows{ getNumFromUser() };
	std::cout << "Введите количество столбцов: ";
	int columns{ getNumFromUser() };

	int** arr{ createTwoDimArray(rows, columns) };

	fillTwoDimArray(arr, rows, columns);

	std::cout << "Таблица умножения:\n";
	printTwoDimArray(arr, rows, columns);

	deleteTwoDimArray(arr, rows, columns);

	return 0;
}

// Получение данных от пользователей
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// Выделение памяти и создание динамического массива
int** createTwoDimArray(int rows, int columns)
{
	int** arr{ new int* [rows] };

	for (unsigned i{}; i < rows; i++)
		arr[i] = new int[columns] {};

	return arr;
}

// Наполнение массива
void fillTwoDimArray(int** arr, int rows, int columns)
{
	for (unsigned i{}; i < rows; i++)
		for (unsigned j{}; j < columns; j++)
			arr[i][j] = (i + 1) * (j + 1);

}

// Вывод массива (таблицы умножения)
void printTwoDimArray(int** arr, int rows, int columns)
{
	for (unsigned i{}; i < rows; i++)
	{
		for (unsigned j{}; j < columns; j++)
			std::cout << arr[i][j] << "\t";

		std::cout << '\n';
	}
}

// Освобождение памяти
void deleteTwoDimArray(int** arr, int rows, int columns)
{
	for (unsigned i{}; i < rows; i++)
		delete[] arr[i];

	delete[] arr;
}