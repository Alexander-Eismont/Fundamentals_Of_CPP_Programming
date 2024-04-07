/*
Напишите программу, которая создаёт массив целых чисел на 10 элементов, выводит
на экран все элементы массива, находит минимальный и максимальный элементы
массива и выводит их на экран. Числа для заполнения массива придумайте сами.
*/

#include <cstdlib> // для функций rand() и srand()
#include <ctime>   // для функции time()
#include <iostream>

const int arrLength = 10;

int getRandomNumber(int min, int max);
void fillArray(int* nums);
int searchMinValue(int(&nums)[arrLength]);
int searchMaxValue(int(&nums)[arrLength]);
void printResult(int* nums, int minValue, int maxValue);

int main()
{
	setlocale(LC_ALL, "rus");

	// установка значения системных часов в качестве стартового числа для
	// рандомной генерации
	srand(static_cast<unsigned int>(time(0)));

	int nums[arrLength];

	fillArray(nums);

	int minValue = searchMinValue(nums);
	int maxValue = searchMaxValue(nums);

	printResult(nums, minValue, maxValue);

	return 0;
}

// генерация рандомного числа между значениями min и max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

// заполнение массива рандомными 10-ю числами
void fillArray(int* nums)
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < arrLength; i++)
		nums[i] = getRandomNumber(minLimit, maxLimit);
}

// поиск минимального элемента массива
int searchMinValue(int(&nums)[arrLength])
{
	int minValue = nums[0];

	for (auto num : nums)
		(num < minValue) ? minValue = num : minValue;

	return minValue;
}

// поиск максимального элемента массива
int searchMaxValue(int(&nums)[arrLength])
{
	int maxValue = nums[0];

	for (auto num : nums)
		(num > maxValue) ? maxValue = num : maxValue;

	return maxValue;
}

// вывод элементов массива и минимального и максимального значений
void printResult(int* nums, int minValue, int maxValue)
{
	std::cout << "Массив: ";

	for (int i = 0; i < arrLength; i++)
	{
		std::cout << nums[i];
		// arrLength - 1, т.к. перебор идет по индексам массива и последний индекс =
		// 9, что приводит к тому, что данное условие будет выполняться всегда, а
		// нужно, чтобы после 9-го индекса (10-го элемента) запятая не ставилась
		(i < arrLength - 1) ? std::cout << ", " : std::cout << "\n";
	}

	std::cout << "Минимальный элемент: " << minValue << std::endl;
	std::cout << "Максимальный элемент: " << maxValue << std::endl;
}