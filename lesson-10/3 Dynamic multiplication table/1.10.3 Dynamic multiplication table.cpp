/*
�������� ������ �������:

create_two_dim_array: ��������� �� ���� ���������� ����� � ��������. ������
������������� ��������� ������������ ������ �������� ����������� � ����������
��������� �� ����. fill_two_dim_array: ��������� �� ���� ��������� �� ���������
������������� ������, ���������� ����� � �������� � ��. ��������� ����������
������ ���������� �� ������� ���������. ������� �� ���������� 10 �������� ��� 10
���������. �� ���������� ������. print_two_dim_array: ��������� �� ����
��������� �� ��������� ������������� ������, ���������� ����� � �������� � ��.
������� ���������� ������ �� �������. �� ���������� ������.
delete_two_dim_array: ��������� �� ���� ��������� �� ��������� �������������
������, ���������� ����� � �������� � ��. ������� ���������� ������. ��
���������� ������. ����������� ��� ������� ��� ����������� ������ ���������,
������� ���������� � ������������ ���������� ����� � �������� � ������� ��
������� ������� ��������� �������� �����������.
*/

#include <iostream>

int getNumFromUser();
int** createTwoDimArray(int rows, int columns);
void fillTwoDimArray(int** arr, int rows, int columns);
void printTwoDimArray(int** arr, int rows, int columns);
void deleteTwoDimArray(int** arr, int rows, int columns);

int main()
{
	setlocale(LC_ALL, "rus");

	// ��������� ���������� ����� � ��������
	std::cout << "������� ���������� �����: ";
	int rows{ getNumFromUser() };
	std::cout << "������� ���������� ��������: ";
	int columns{ getNumFromUser() };

	int** arr{ createTwoDimArray(rows, columns) };

	fillTwoDimArray(arr, rows, columns);

	std::cout << "������� ���������:\n";
	printTwoDimArray(arr, rows, columns);

	deleteTwoDimArray(arr, rows, columns);

	return 0;
}

// ��������� ������ �� �������������
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// ��������� ������ � �������� ������������� �������
int** createTwoDimArray(int rows, int columns)
{
	int** arr{ new int* [rows] };

	for (unsigned i{}; i < rows; i++)
		arr[i] = new int[columns] {};

	return arr;
}

// ���������� �������
void fillTwoDimArray(int** arr, int rows, int columns)
{
	for (unsigned i{}; i < rows; i++)
		for (unsigned j{}; j < columns; j++)
			arr[i][j] = (i + 1) * (j + 1);

}

// ����� ������� (������� ���������)
void printTwoDimArray(int** arr, int rows, int columns)
{
	for (unsigned i{}; i < rows; i++)
	{
		for (unsigned j{}; j < columns; j++)
			std::cout << arr[i][j] << "\t";

		std::cout << '\n';
	}
}

// ������������ ������
void deleteTwoDimArray(int** arr, int rows, int columns)
{
	for (unsigned i{}; i < rows; i++)
		delete[] arr[i];

	delete[] arr;
}