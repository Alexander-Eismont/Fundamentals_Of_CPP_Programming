/*
Напишите функцию print, которая принимает на вход массив произвольного размера и
выводит его на экран. В программе создайте несколько массивов разного размера и
используйте для вызова вашей функции.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

const int minLimit = 1;
const int maxLimit = 10;

int getRandomNumber(int min, int max);
void fillArray(int* arr, int arrSize);

// пространство имен с функцией вывода массива
// функция принимает массив без указния размера
namespace dimensionless_array
{
	void print(int arr[], int arrSize)
	{
		for (int i = 0; i < arrSize; i++)
			std::cout << arr[i] << " ";

		std::cout << "\n";
	}
} // namespace dimensionless_array

// пространство имен с функцией вывода массива
// функция принимает массив с помощью указателя
namespace using_pointer
{
	void print(int* arr, int arrSize)
	{
		for (int i = 0; i < arrSize; i++)
			std::cout << arr[i] << " ";

		std::cout << "\n";
	}
} // namespace using_pointer

int main(int argc, char** argv)
{
	// установка значения системных часов в качестве стартового числа для
	// рандомной генерации
	std::srand(static_cast<unsigned int>(std::time(0)));

	// получение рандомных чисел в качестве размеров массивов
	int arrSize1 = getRandomNumber(minLimit, maxLimit);
	int arrSize2 = getRandomNumber(minLimit, maxLimit);

	// выделение памяти под массивы
	int* arr1 = new int[arrSize1];
	int* arr2 = new int[arrSize2];

	// наполнение массивов
	fillArray(arr1, arrSize1);
	fillArray(arr2, arrSize2);

	// вывод массивов
	dimensionless_array::print(arr1, arrSize1);
	using_pointer::print(arr2, arrSize2);

	// освобождение памяти, выделенной массивам
	delete[] arr1;
	delete[] arr2;

	return 0;
}

// получение рандомного числа для размера массива, а также наполнение массива
// рандомными числами
int getRandomNumber(int min, int max) { return (min + std::rand() % (min - max) + 1); }

// наполнение массива случайными элементами
void fillArray(int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
		arr[i] = getRandomNumber(minLimit, maxLimit);
}