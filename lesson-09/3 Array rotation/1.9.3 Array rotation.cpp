/*
Напишите функцию reverse, которая принимает на вход массив произвольного размера
и «разворачивает» его в обратную сторону — то есть первый элемент становится
последним и наоборот. Выведите на консоль массив до вызова функции и после
вызова функции. Обратите внимание, что функция reverse должна изменять
передаваемый ей массив. Элементы в нём должны изменить свой порядок.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

const int minLimit = 1;
const int maxLimit = 10;

int getRandomNumber(int min, int max);
void fillArray(int* arr, int size);
void printArray(int* arr, int size);
void reverseArray(int* arr, int size);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	// установка значения системных часов в качестве стартового значения для
	// рандомной генерации
	srand(static_cast<unsigned int>(time(0)));

	// получение рандомного числа в качестве размера массива
	int sizeArr = getRandomNumber(minLimit, maxLimit);
	// выделение памяти под массив с полученным размером
	int* nums = new int[sizeArr];

	fillArray(nums, sizeArr);

	std::cout << "Исходный массив: ";
	printArray(nums, sizeArr);

	reverseArray(nums, sizeArr);

	std::cout << "Перевернутый массив: ";
	printArray(nums, sizeArr);

	// освобождение памяти, выделенной под массив
	delete[] nums;

	return 0;
}

// получение рандомного числа для размера массива и его наполнения
int getRandomNumber(int min, int max) { return (min + rand() % (min - max) + 1); }

// наполнение массива
void fillArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = getRandomNumber(minLimit, maxLimit);
}

// вывод массива
void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	std::cout << '\n';
}

// "разворот" массива
void reverseArray(int* arr, int size)
{
	for (int i = 0; i < size - i; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
}