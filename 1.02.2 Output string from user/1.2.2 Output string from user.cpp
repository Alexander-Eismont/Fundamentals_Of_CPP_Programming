/*
Попросите пользователя ввести любое слово, а затем выведите на консоль то же самое, что он ввёл.
*/

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	// используется с #include <windows.h> для работы с русскими символами
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string strFromUser;

	std::cout << "Введите слово:\n";
	// используется std::getline() т.к. пользователь по случайности может ввести больше одного
	// слова, а оператор извлечения >> возвращает символы только до первого пробела
	std::getline(std::cin, strFromUser);
	std::cout << "Вы ввели:\n" << strFromUser;

	return 0;
}