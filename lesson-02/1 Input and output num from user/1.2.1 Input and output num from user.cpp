/*
��������� ������������ ������ ����� �����, � ����� �������� �� ������� �� �� �����, ��� �� ���.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int numFromUser;

	std::cout << "������� �����: ";
	std::cin >> numFromUser;
	std::cout << "�� �����:\n" << numFromUser << "\n";

	return 0;
}