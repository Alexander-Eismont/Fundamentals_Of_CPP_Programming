/*
Вам необходимо организовать ввод массива с консоли. Сначала спросите у
пользователя размер массива, а затем предложите ему по очереди ввести каждый
элемент массива. В конце выведите на экран получившийся массив.
*/

#include <iostream>

int getNumFromUser();
void fillArray(int* arr, int size);
void printArray(int* arr, int size);

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "Введите размер массива: ";
	int size{ getNumFromUser() };

	int* nums{ new int[size] {} };

	fillArray(nums, size);

	std::cout << "Введённый массив: ";
	printArray(nums, size);

	delete[] nums;

	return 0;
}

// получение числа от пользователя
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// наполнение массива
void fillArray(int* arr, int size)
{
	std::cout << "Введите элементы массива: " << '\n';

	for (unsigned i{}; i < size; i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
}

// вывод массива
void printArray(int* arr, int size)
{
	for (unsigned i{}; i < size; i++)
		std::cout << arr[i] << " ";
}