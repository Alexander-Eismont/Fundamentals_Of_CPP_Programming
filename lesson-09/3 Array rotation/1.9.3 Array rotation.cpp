/*
�������� ������� reverse, ������� ��������� �� ���� ������ ������������� �������
� �������������� ��� � �������� ������� � �� ���� ������ ������� ����������
��������� � ��������. �������� �� ������� ������ �� ������ ������� � �����
������ �������. �������� ��������, ��� ������� reverse ������ ��������
������������ �� ������. �������� � �� ������ �������� ���� �������.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

const int minLimit = 1;
const int maxLimit = 10;

int getRandomNumber(int min, int max);
void fillArray(int* arr, int size);
void printArray(int* arr, int size);
void reverseArray(int* arr, int size);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	// ��������� �������� ��������� ����� � �������� ���������� �������� ���
	// ��������� ���������
	srand(static_cast<unsigned int>(time(0)));

	// ��������� ���������� ����� � �������� ������� �������
	int sizeArr = getRandomNumber(minLimit, maxLimit);
	// ��������� ������ ��� ������ � ���������� ��������
	int* nums = new int[sizeArr];

	fillArray(nums, sizeArr);

	std::cout << "�������� ������: ";
	printArray(nums, sizeArr);

	reverseArray(nums, sizeArr);

	std::cout << "������������ ������: ";
	printArray(nums, sizeArr);

	// ������������ ������, ���������� ��� ������
	delete[] nums;

	return 0;
}

// ��������� ���������� ����� ��� ������� ������� � ��� ����������
int getRandomNumber(int min, int max) { return (min + rand() % (min - max) + 1); }

// ���������� �������
void fillArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = getRandomNumber(minLimit, maxLimit);
}

// ����� �������
void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	std::cout << '\n';
}

// "��������" �������
void reverseArray(int* arr, int size)
{
	for (int i = 0; i < size - i; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
}