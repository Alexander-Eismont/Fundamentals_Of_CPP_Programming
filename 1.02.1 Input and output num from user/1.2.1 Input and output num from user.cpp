/*
Попросите пользователя ввести любое число, а затем выведите на консоль то же самое, что он ввёл.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int numFromUser;

	std::cout << "Введите число: ";
	std::cin >> numFromUser;
	std::cout << "Вы ввели:\n" << numFromUser << "\n";

	return 0;
}