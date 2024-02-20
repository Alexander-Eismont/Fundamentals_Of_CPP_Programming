/*
Напишите программу, которая открывает файл in.txt, содержащий массив целых
чисел, и выводит на консоль этот массив в обратном порядке. Первое «слово»
входящего файла — это число элементов массива. Дальше следует сам массив.
*/

#include <fstream>
#include <iostream>

void printArray(int* arr, int& size);

int main() 
{
	setlocale(LC_ALL, "");

	// запись имени файла
	std::string filename{ "in.txt" };
	// открытие файла с передачей имени
	std::ifstream file(filename);

	// проверка на существование файла
	if (!file.is_open()) 
	{
		std::cout << "Такого файла не существует!\n";
		return 1;
	}

	// количество элементов в массиве (файле, не считая первого)
	int sizeArr{};
	// запись первого элемента как размер массива
	file >> sizeArr;

	// проверка на корректность размера массива
	if (sizeArr < 0)
	{
		std::cout << "Неверный размер массива\n";
		return 1;
	}

	std::cout << "Перевый элемент из файла (размер массива): ";
	std::cout << sizeArr << '\n';

	// создание массива с размером равным количеству элементов в файле
	int* nums{ new int[sizeArr] {} };

	// запись в массив
	for (int i{ 0 }; i < sizeArr; i++)
		file >> nums[i];

	std::cout << "Массив из файла в обратном порядке: ";
	printArray(nums, sizeArr);

	// закрытие файла
	file.close();

	// освобождение памяти
	delete[] nums;

	return 0;
}

// вывод элементов массива на экран в обратном порядке
void printArray(int* arr, int& size)
{
	for (int i{ size - 1 }; i >= 0; i--)
		std::cout << arr[i] << " ";
}