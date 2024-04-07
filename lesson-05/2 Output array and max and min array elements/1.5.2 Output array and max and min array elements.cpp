/*
�������� ���������, ������� ������ ������ ����� ����� �� 10 ���������, �������
�� ����� ��� �������� �������, ������� ����������� � ������������ ��������
������� � ������� �� �� �����. ����� ��� ���������� ������� ���������� ����.
*/

#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>   // ��� ������� time()
#include <iostream>

const int arrLength = 10;

int getRandomNumber(int min, int max);
void fillArray(int* nums);
int searchMinValue(int(&nums)[arrLength]);
int searchMaxValue(int(&nums)[arrLength]);
void printResult(int* nums, int minValue, int maxValue);

int main()
{
	setlocale(LC_ALL, "rus");

	// ��������� �������� ��������� ����� � �������� ���������� ����� ���
	// ��������� ���������
	srand(static_cast<unsigned int>(time(0)));

	int nums[arrLength];

	fillArray(nums);

	int minValue = searchMinValue(nums);
	int maxValue = searchMaxValue(nums);

	printResult(nums, minValue, maxValue);

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

// ����� ������������ �������� �������
int searchMinValue(int(&nums)[arrLength])
{
	int minValue = nums[0];

	for (auto num : nums)
		(num < minValue) ? minValue = num : minValue;

	return minValue;
}

// ����� ������������� �������� �������
int searchMaxValue(int(&nums)[arrLength])
{
	int maxValue = nums[0];

	for (auto num : nums)
		(num > maxValue) ? maxValue = num : maxValue;

	return maxValue;
}

// ����� ��������� ������� � ������������ � ������������� ��������
void printResult(int* nums, int minValue, int maxValue)
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

	std::cout << "����������� �������: " << minValue << std::endl;
	std::cout << "������������ �������: " << maxValue << std::endl;
}