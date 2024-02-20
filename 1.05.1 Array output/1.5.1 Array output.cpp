/*
Ќапишите программу, котора€ создаЄт массив целых чисел на 10 элементов и выводит
на экран все элементы массива через зап€тую и пробел (,). „исла дл€ заполнени€
массива придумайте сами.
*/

#include <cstdlib> // дл€ функций rand() и srand()
#include <ctime>   // дл€ функции time()
#include <iostream>

const int arrLength = 10;

int getRandomNumber(int min, int max);
void fillArray(int* nums);
void printArray(int* nums);

int main()
{
	setlocale(LC_ALL, "rus");

	// установка значени€ системных часов в качестве стартового числа дл€
	// рандомной генерации
	srand(static_cast<unsigned int>(time(0)));

	int nums[arrLength];

	fillArray(nums);
	printArray(nums);

	return 0;
}

// генераци€ рандомного числа между значени€ми min и max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

// заполнение массива рандомными 10-ю числами
void fillArray(int* nums)
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < arrLength; i++)
		nums[i] = getRandomNumber(minLimit, maxLimit);
}

// вывод элементов массива и минимального и максимального значений
void printArray(int* nums)
{
	std::cout << "ћассив: ";

	for (int i = 0; i < arrLength; i++)
	{
		std::cout << nums[i];
		// arrLength - 1, т.к. перебор идет по индексам массива и последний индекс =
		// 9, что приводит к тому, что данное условие будет выполн€тьс€ всегда, а
		// нужно, чтобы после 9-го индекса (10-го элемента) зап€та€ не ставилась
		(i < arrLength - 1) ? std::cout << ", " : std::cout << "\n";
	}
}