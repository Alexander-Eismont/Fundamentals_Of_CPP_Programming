/*
Напишите программу, которая спрашивает у пользователя отдельно его имя и
фамилию, а затем приветствует его. Работу необходимо выполнить, используя
операции над строками.
*/

#include <iostream>
#include <string>
#include <windows.h>

std::string getWordFromUser();

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "rus");

	std::cout << "Введите имя: ";
	std::string name{ getWordFromUser() };
	std::cout << "Введите фамилию: ";
	std::string surname{ getWordFromUser() };

	std::cout << "Здравствуйте, " + name + " " + surname << '\n';

	return 0;
}

// получение строки от пользователя (в данном случае имя и фамилию)
std::string getWordFromUser()
{
	std::string strFromUser;
	std::getline(std::cin, strFromUser);

	return strFromUser;
}
