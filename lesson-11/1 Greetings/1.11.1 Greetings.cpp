/*
�������� ���������, ������� ���������� � ������������ �������� ��� ��� �
�������, � ����� ������������ ���. ������ ���������� ���������, ���������
�������� ��� ��������.
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

	std::cout << "������� ���: ";
	std::string name{ getWordFromUser() };
	std::cout << "������� �������: ";
	std::string surname{ getWordFromUser() };

	std::cout << "������������, " + name + " " + surname << '\n';

	return 0;
}

// ��������� ������ �� ������������ (� ������ ������ ��� � �������)
std::string getWordFromUser()
{
	std::string strFromUser;
	std::getline(std::cin, strFromUser);

	return strFromUser;
}
