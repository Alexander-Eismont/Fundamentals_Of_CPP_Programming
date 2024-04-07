/*
�������� ���������, ������� ��������� �� ����� in.txt ��������� ������ � �������
��� �� �������. ��� ���� ������ ������ ������ ���� ��������� � ��������
�������. ���� in.txt ������� ��������� �������: ������ ��� ����� � ��� �����
����� � ����� �������� ���������� �������. ����� ��� ��� ��������� ������ �
���� �������.
*/

#include <fstream>
#include <iostream>

int** createTwoDimArray(const int& rows, const int& columns);
void deleteTwoDimArray(int** arr, const int& rows, const int& columns);
void printArray(int** arr, const int& rows, const int& columns);

int main()
{
	setlocale(LC_ALL, "");

	// ������ ����� �����
	std::string filename{ "in.txt" };
	// �������� ����� �� �����
	std::ifstream file{ filename };

	// �������� �� �������� �����
	if (!file.is_open())
	{
		std::cout << "���� �� ������!";
		return 1;
	}

	// ��������� ���������� ����� �� �����
	int rows{};
	file >> rows;

	// ��������� ���������� �������� �� �����
	int columns{};
	file >> columns;

	// �������� ���������� �������
	int** nums{ createTwoDimArray(rows, columns) };

	// ������ � ������
	for (unsigned i{}; i < rows; i++)
		for (unsigned j{}; j < columns; j++)
			file >> nums[i][j];

	printArray(nums, rows, columns);

	// �������� �����
	file.close();
	// ������������ ������
	deleteTwoDimArray(nums, rows, columns);

	return 0;
}

// �������� ����������� �������
int** createTwoDimArray(const int& rows, const int& columns)
{
	int** arr{ new int* [rows] };

	for (unsigned i{}; i < rows; i++)
		arr[i] = new int[columns] {};

	return arr;
}

// ������ �������
void printArray(int** arr, const int& rows, const int& columns)
{
	for (int i{}; i < rows; i++)
	{
		for (int j{ columns - 1 }; j >= 0; j--)
			std::cout << arr[i][j] << " ";

		std::cout << "\n";
	}
}

// �������� ������� (������������ ������)
void deleteTwoDimArray(int** arr, const int& rows, const int& columns)
{
	for (unsigned i{}; i < rows; i++)
		delete[] arr[i];

	delete[] arr;
}
