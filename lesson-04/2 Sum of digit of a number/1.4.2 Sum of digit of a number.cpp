/*
�������� ���������, ������� ����������� � ������������ ����� ����� � ������� ��
����� ����� ���� ��� ����.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num, sum = 0;

	std::cout << "������� ����� �����: ";
	std::cin >> num;

	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}

	std::cout << "����� ����: " << sum << "\n";

	return 0;
}