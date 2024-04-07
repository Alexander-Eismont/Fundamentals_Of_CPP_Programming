/*
�������� ���������, ������� ������ � �������������� ��������� ������ �����
����� ������������ 3�6, ������� �� ����� ��� �������� ������� � ���� ��������,
������� ������� ������������ � ������������� ��������� ������� � ������� �� ��
�����. ����� ��� ���������� ������� ���������� ����. ����� �������� �������
���������� ����������, ������ ����� ������� ���������� �� �������� ��������� \t
������ �������.
*/

#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>   // ��� ������� time()
#include <iostream>

const int rows = 3;
const int columns = 6;

int getRandomNumber(int min, int max);
void printArray(int(&nums)[rows][columns]);
void fillArray(int(&nums)[rows][columns]);
void searchMinIndex(int(&nums)[rows][columns]);
void searchMaxIndex(int(&nums)[rows][columns]);

int main()
{
	setlocale(LC_ALL, "rus");

	// ��������� �������� ��������� ����� � �������� ���������� ����� ���
	// ��������� ���������
	srand(static_cast<unsigned int>(time(0)));

	int nums[rows][columns];

	fillArray(nums);
	printArray(nums);
	searchMinIndex(nums);
	searchMaxIndex(nums);

	return 0;
}

// ��������� ���������� ����� ����� ���������� min � max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

//���������� ������� ���������� �������
void fillArray(int(&nums)[rows][columns])
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			nums[i][j] = getRandomNumber(minLimit, maxLimit);
	}
}

// ����� �������
void printArray(int(&nums)[rows][columns])
{
	std::cout << "������:\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			std::cout << nums[i][j] << "\t";

		std::cout << "\n";
	}
}

// ����� ������� ������������ �������� ������� � ����� ���
void searchMinIndex(int(&nums)[rows][columns])
{
	int imin = 0, jmin = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			if (nums[i][j] < nums[imin][jmin])
			{
				imin = i;
				jmin = j;
			}

	std::cout << "������ ������������ ��������: " << imin << " " << jmin << "\n";
}

// ����� ������� ������������� �������� ������� � ����� ���
void searchMaxIndex(int(&nums)[rows][columns]) {
	int imax = 0, jmax = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			if (nums[i][j] > nums[imax][jmax])
			{
				imax = i;
				jmax = j;
			}

	std::cout << "������ ������������� ��������: " << imax << " " << jmax << "\n";
}
