/*
Напишите функцию create_array, которая принимает на вход размер массива, создаёт
внутри себя динамический массив для значений типа double, инициализирует его
нулями и возвращает вызывающей функции. Используйте эту функцию для создания
массива. Запросите у пользователя размер массива и выведите на консоль
получившийся массив. В конце на забудьте очистить память.
*/

#include <iostream>

int getNumFromUser();
double* createArray(int size);
void printArray(double* arr, int size);

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "Введите размер массива: ";
	int size{ getNumFromUser() };

	double* arr{ createArray(size) };

	std::cout << "Массив: ";
	printArray(arr, size);

	// очистка памяти
	delete[] arr;

	return 0;
}

// получение размера массива от пользователя
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// создание динамического массива и возврат в main
double* createArray(int size) { return new double[size] {}; }

// вывод элементов массива
void printArray(double* arr, int size)
{
	for (unsigned i{}; i < size; i++)
		std::cout << arr[i] << " ";
}