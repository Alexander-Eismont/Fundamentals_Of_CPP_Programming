/*
�������� ���������, ������� ������ � �������������� ��������������� ������ ����� ����� �� 10 ��������� � ��������� ��� ��������� � �������� �������.

� ������� ���������� ��������� ����� ������ �������� ����� ������� ������� ������� ����������� � ����� �������, 
����� ������ �������� ������ �� �������������� �������� ������� ����������� � ������� ������������� � ��� �����. 
� ����� ����� ����������, ��� ����� ��������� ������� ������� ����� � ������ �������.

���������� ��������� � �������� ������� ������������ �������� �������� � 
����� ������ �������� ����� ��������� ������� ������� ����������� � ������ �������, 
����� ������ �������� ������ �� ������������� ������� ����������� ������ �� ����� � ������� � ��� �����.

�� ����� ���������� ������� ������ �� ���������� � ������ ����� ����������. 
����� ��� ���������� ������� ���������� ����.
*/

#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>   // ��� ������� time()
#include <iostream>

const int arrLength = 10;

int getRandomNumber(int min, int max);
void fillArray(int(&nums)[arrLength]);
void printArray(int(&nums)[arrLength]);
// void straightBubbleSort(int(&nums)[arrLength]);
void reverseBubbleSort(int(&nums)[arrLength]);

int main()
{
	setlocale(LC_ALL, "rus");

	// ��������� �������� ��������� ����� � �������� ���������� ����� ���
	// ��������� ���������
	srand(static_cast<unsigned int>(time(0)));

	int nums[arrLength];

	fillArray(nums);

	std::cout << "������ �� ����������: ";
	printArray(nums);
	std::cout << "\n";

	// straightBubbleSort(nums);
	reverseBubbleSort(nums);

	std::cout << "������ ����� ����������: ";
	printArray(nums);
	std::cout << "\n";

	return 0;
}

// ��������� ���������� ����� ����� ���������� min � max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

//���������� ������� ���������� �������
void fillArray(int(&nums)[arrLength])
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < arrLength; i++)
		nums[i] = getRandomNumber(minLimit, maxLimit);
}

// ����� �������
void printArray(int(&nums)[arrLength])
{
	for (int i = 0; i < arrLength; i++)
		std::cout << nums[i] << " ";
}

// ���������� ��������� ��������
void reverseBubbleSort(int(&nums)[arrLength])
{
	for (int i = 0; i < arrLength - 1; i++)
		for (int j = arrLength - 1; j > i; j--)
			if (nums[j] < nums[j - 1])
			{
				int tmp = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = tmp;
			}
}

// ���������� ��������� ������
/*void straightBubbleSort(int(&nums)[arrLength])
{
  for (int i = 0; i < arrLength - 1; i++)
  {
	for (int j = 0; j < arrLength - i - 1; j++)
	{
	  if (nums[j + 1] < nums[j])
	  {
		int tmp = nums[j];
		nums[j] = nums[j + 1];
		nums[j + 1] = tmp;
	  }
	}
  }
}*/