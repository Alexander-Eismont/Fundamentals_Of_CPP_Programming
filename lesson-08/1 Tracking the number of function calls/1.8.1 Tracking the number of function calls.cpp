/*
���� ������� main(). ����� �������� �������, ������� �����������, ������� ���
��� ���� ������� �� ����� ������ ���������. ���� ������ � �������� �������
counting_function ���, ����� ��������� ����� ����� �� �������, ��� ��������
����.
*/

#include <iostream>

void counting_function();

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < 15; i++)
		counting_function();

}

// ����� ���������� ������� ������� ���������� ����� static ����������
void counting_function()
{
	static int counter = 1;
	std::cout << "���������� ������� ������� counting_function(): " << counter
		<< "\n";

	counter++;
}