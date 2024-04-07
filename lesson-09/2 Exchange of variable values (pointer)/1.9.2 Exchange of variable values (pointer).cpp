/*
���� ������ � ����������� ��� �������� ��� ������� swap (��������� ����� �����),
�� � ������� ����������, � �� ������. �������� ��������, ��� � ������������ ���
std ��� ���� ������� swap. ������� �� ����������� � ���� ������� �����������
using namespace std;, ��� ��� � ���� ������ ����� ������� ������������ �������
swap, � �� ����.
*/

#include <iostream>

void swap(int* a, int* b);
void printValues(int a, int b);

int main(int argc, char** argv)
{
	int a = 5, b = 8;
	printValues(a, b);

	// ������������� ����������
	int* p_a = &a;
	int* p_b = &b;

	swap(p_a, p_b);
	printValues(a, b);

	return 0;
}

// ����� �������� ����� �����������
void swap(int* p_a, int* p_b)
{
	int tmp = *p_a;
	*p_a = *p_b;
	*p_b = tmp;
}

// ������ ��������
void printValues(int a, int b)
{
	std::cout << "a = " << a << ", b = " << b << '\n';
}
