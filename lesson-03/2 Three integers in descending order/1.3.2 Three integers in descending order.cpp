/*
�������� ���������, ������� ����������� � ������������ ��� ����� ����� � ������� �� �� ����� � ������� ��������.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	int num1, num2, num3;

	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	std::cout << "������� ������ �����: ";
	std::cin >> num3;

	int min = (num1 < num2 && num1 < num3) ? num1 : (num2 < num1 && num2 < num3) ? num2
		: num3;
	int max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2
		: num3;
	int mid = (num1 > min && num1 < max) ? num1 : (num2 > min && num2 < max) ? num2
		: num3;

	std::cout << max << " " << mid << " " << min;

	return 0;
}