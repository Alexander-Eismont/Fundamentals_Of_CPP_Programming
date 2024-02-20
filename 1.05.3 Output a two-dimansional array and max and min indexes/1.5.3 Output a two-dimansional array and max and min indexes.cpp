/*
Напишите программу, которая создаёт и инициализирует двумерный массив целых
чисел размерностью 3х6, выводит на экран все элементы массива в виде таблички,
находит индексы минимального и максимального элементов массива и выводит их на
экран. Числа для заполнения массива придумайте сами. Чтобы элементы массива
выводились равномерно, внутри одной строчки разделяйте их символом табуляции \t
вместо пробела.
*/

#include <cstdlib> // для функций rand() и srand()
#include <ctime>   // для функции time()
#include <iostream>

const int rows = 3;
const int columns = 6;

int getRandomNumber(int min, int max);
void printArray(int(&nums)[rows][columns]);
void fillArray(int(&nums)[rows][columns]);
void searchMinIndex(int(&nums)[rows][columns]);
void searchMaxIndex(int(&nums)[rows][columns]);

int main()
{
	setlocale(LC_ALL, "rus");

	// установка значения системных часов в качестве стартового числа для
	// рандомной генерации
	srand(static_cast<unsigned int>(time(0)));

	int nums[rows][columns];

	fillArray(nums);
	printArray(nums);
	searchMinIndex(nums);
	searchMaxIndex(nums);

	return 0;
}

// генерация рандомного числа между значениями min и max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

//заполнение массива рандомными числами
void fillArray(int(&nums)[rows][columns])
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			nums[i][j] = getRandomNumber(minLimit, maxLimit);
	}
}

// вывод массива
void printArray(int(&nums)[rows][columns])
{
	std::cout << "Массив:\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			std::cout << nums[i][j] << "\t";

		std::cout << "\n";
	}
}

// поиск индекса минимального элемента массива и вывод его
void searchMinIndex(int(&nums)[rows][columns])
{
	int imin = 0, jmin = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			if (nums[i][j] < nums[imin][jmin])
			{
				imin = i;
				jmin = j;
			}

	std::cout << "Индекс минимального элемента: " << imin << " " << jmin << "\n";
}

// поиск индекса максимального элемента массива и вывод его
void searchMaxIndex(int(&nums)[rows][columns]) {
	int imax = 0, jmax = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			if (nums[i][j] > nums[imax][jmax])
			{
				imax = i;
				jmax = j;
			}

	std::cout << "Индекс максимального элемента: " << imax << " " << jmax << "\n";
}
