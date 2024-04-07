/*
Напишите программу, которая запрашивает у пользователя целое число и выводит на экран таблицу умножения для этого числа.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num;

	std::cout << "Введите целое число: ";
	std::cin >> num;

	for (int i = 1; i <= 10; i++)
		std::cout << num << " x " << i << " = " << num * i << std::endl;

	return 0;
}