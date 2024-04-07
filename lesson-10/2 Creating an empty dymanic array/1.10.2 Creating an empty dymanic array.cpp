/*
�������� ������� create_array, ������� ��������� �� ���� ������ �������, ������
������ ���� ������������ ������ ��� �������� ���� double, �������������� ���
������ � ���������� ���������� �������. ����������� ��� ������� ��� ��������
�������. ��������� � ������������ ������ ������� � �������� �� �������
������������ ������. � ����� �� �������� �������� ������.
*/

#include <iostream>

int getNumFromUser();
double* createArray(int size);
void printArray(double* arr, int size);

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "������� ������ �������: ";
	int size{ getNumFromUser() };

	double* arr{ createArray(size) };

	std::cout << "������: ";
	printArray(arr, size);

	// ������� ������
	delete[] arr;

	return 0;
}

// ��������� ������� ������� �� ������������
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// �������� ������������� ������� � ������� � main
double* createArray(int size) { return new double[size] {}; }

// ����� ��������� �������
void printArray(double* arr, int size)
{
	for (unsigned i{}; i < size; i++)
		std::cout << arr[i] << " ";
}