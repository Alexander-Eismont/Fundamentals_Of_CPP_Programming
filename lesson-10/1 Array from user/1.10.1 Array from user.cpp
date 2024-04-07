/*
��� ���������� ������������ ���� ������� � �������. ������� �������� �
������������ ������ �������, � ����� ���������� ��� �� ������� ������ ������
������� �������. � ����� �������� �� ����� ������������ ������.
*/

#include <iostream>

int getNumFromUser();
void fillArray(int* arr, int size);
void printArray(int* arr, int size);

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "������� ������ �������: ";
	int size{ getNumFromUser() };

	int* nums{ new int[size] {} };

	fillArray(nums, size);

	std::cout << "�������� ������: ";
	printArray(nums, size);

	delete[] nums;

	return 0;
}

// ��������� ����� �� ������������
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// ���������� �������
void fillArray(int* arr, int size)
{
	std::cout << "������� �������� �������: " << '\n';

	for (unsigned i{}; i < size; i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
}

// ����� �������
void printArray(int* arr, int size)
{
	for (unsigned i{}; i < size; i++)
		std::cout << arr[i] << " ";
}