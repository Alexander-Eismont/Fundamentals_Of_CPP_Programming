/*
���� ������ � ������� ��������� ������� � ���������� ����������, �� ���� �
���������� ������, ����������� ����������� � ���������� ����� �������������
��������, �� � ������ �����������. �������� ������ ������� int calc(int x, int
y), ������ �� ������� ����� ������������� ���� �� ������ ������� ��������������
��������: ��������, ���������, ���������, �������. � ������� main �������� ���,
������� ���������� ������ �� ������ ������� � ������� ��������� �� �����. �
������� ����������� ��� �����, ������� ����� ���� ���� �������� �� �����, �����
����� ���� ��������� � ������������ ��������.
*/

#include <iostream>

void printResult(std::string, int res);

namespace sum { int calc(int x, int y) { return x + y; } } // namespace sum

namespace diff { int calc(int x, int y) { return x - y; } } // namespace diff

namespace mul { int calc(int x, int y) { return x * y; } } // namespace mul

namespace division { int calc(int x, int y) { return x / y; } } // namespace division

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	int x = 6, y = 9;

	std::string operations[] = { "��������", "���������", "���������", "�������" };
	int result[] = { sum::calc(x, y),
					diff::calc(x, y),
					mul::calc(x, y),
					division::calc(x, y) };

	int size = sizeof(operations) / sizeof(operations[0]);

	for (int i = 0; i < size; i++)
		printResult(operations[i], result[i]);
}

void printResult(std::string operation, int res)
{
	std::cout << operation << ": " << res << '\n';
}