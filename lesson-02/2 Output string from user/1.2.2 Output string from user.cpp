/*
��������� ������������ ������ ����� �����, � ����� �������� �� ������� �� �� �����, ��� �� ���.
*/

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	// ������������ � #include <windows.h> ��� ������ � �������� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string strFromUser;

	std::cout << "������� �����:\n";
	// ������������ std::getline() �.�. ������������ �� ����������� ����� ������ ������ ������
	// �����, � �������� ���������� >> ���������� ������� ������ �� ������� �������
	std::getline(std::cin, strFromUser);
	std::cout << "�� �����:\n" << strFromUser;

	return 0;
}