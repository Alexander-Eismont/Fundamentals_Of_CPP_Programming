/*
Напишите программу, которая запрашивает у пользователя целое число и выводит на
экран сумму всех его цифр.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num, sum = 0;

	std::cout << "Введите целое число: ";
	std::cin >> num;

	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}

	std::cout << "Сумма цифр: " << sum << "\n";

	return 0;
}