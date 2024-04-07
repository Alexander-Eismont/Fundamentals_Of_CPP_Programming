/*
� ���� ������� �� �������������� �������� ������ � ������� ����������. ����
������ � ������� ���������� ��������� �����:
int;
short;
long;
long long;
float;
double;
long double;
bool.
��� ������ ���������� �������� �� ������� � ����� � ������.
*/

#include <iostream>

int main()
{
	short a;
	int b;
	long c;
	long long d;
	float e;
	double f;
	long double g;
	bool h;

	// ����� � �������� ������ ����� ����������, �.�. � ������ ������ �����������
	// ������ ���������� ��� �������� ���������� � �� ������ ���� � �� �� ������
	// ������ ������ ���� � �� �� ���������� (� ������ ����� �������), � ����� ���
	// ����� ������� �� ������� ����������� ������ ����������
	std::cout << "short: " << &a << " " << sizeof(a) << " bytes\n";
	std::cout << "int: " << &b << " " << sizeof(b) << " bytes\n";
	std::cout << "long: " << &c << " " << sizeof(c) << " bytes\n";
	std::cout << "long long: " << &d << " " << sizeof(d) << " bytes\n";
	std::cout << "float: " << &e << " " << sizeof(e) << " bytes\n";
	std::cout << "double: " << &f << " " << sizeof(f) << " bytes\n";
	std::cout << "long double: " << &g << " " << sizeof(g) << " bytes\n";
	std::cout << "bool: " << &h << " " << sizeof(h) << " byte\n";

	return 0;
}