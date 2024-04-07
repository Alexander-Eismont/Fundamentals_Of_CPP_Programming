/*
�������� ���������, ������� ������ ������ ����� ����� �� 10 ��������� � �������
�� ����� ��� �������� ������� ����� ������� � ������ (,). ����� ��� ����������
������� ���������� ����.
*/

#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>   // ��� ������� time()
#include <iostream>

const int arrLength = 10;

int getRandomNumber(int min, int max);
void fillArray(int* nums);
void printArray(int* nums);

int main()
{
	setlocale(LC_ALL, "rus");

	// ��������� �������� ��������� ����� � �������� ���������� ����� ���
	// ��������� ���������
	srand(static_cast<unsigned int>(time(0)));

	int nums[arrLength];

	fillArray(nums);
	printArray(nums);

	return 0;
}

// ��������� ���������� ����� ����� ���������� min � max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

// ���������� ������� ���������� 10-� �������
void fillArray(int* nums)
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < arrLength; i++)
		nums[i] = getRandomNumber(minLimit, maxLimit);
}

// ����� ��������� ������� � ������������ � ������������� ��������
void printArray(int* nums)
{
	std::cout << "������: ";

	for (int i = 0; i < arrLength; i++)
	{
		std::cout << nums[i];
		// arrLength - 1, �.�. ������� ���� �� �������� ������� � ��������� ������ =
		// 9, ��� �������� � ����, ��� ������ ������� ����� ����������� ������, �
		// �����, ����� ����� 9-�� ������� (10-�� ��������) ������� �� ���������
		(i < arrLength - 1) ? std::cout << ", " : std::cout << "\n";
	}
}