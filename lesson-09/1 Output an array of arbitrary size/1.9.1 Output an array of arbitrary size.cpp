/*
�������� ������� print, ������� ��������� �� ���� ������ ������������� ������� �
������� ��� �� �����. � ��������� �������� ��������� �������� ������� ������� �
����������� ��� ������ ����� �������.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

const int minLimit = 1;
const int maxLimit = 10;

int getRandomNumber(int min, int max);
void fillArray(int* arr, int arrSize);

// ������������ ���� � �������� ������ �������
// ������� ��������� ������ ��� ������� �������
namespace dimensionless_array
{
	void print(int arr[], int arrSize)
	{
		for (int i = 0; i < arrSize; i++)
			std::cout << arr[i] << " ";

		std::cout << "\n";
	}
} // namespace dimensionless_array

// ������������ ���� � �������� ������ �������
// ������� ��������� ������ � ������� ���������
namespace using_pointer
{
	void print(int* arr, int arrSize)
	{
		for (int i = 0; i < arrSize; i++)
			std::cout << arr[i] << " ";

		std::cout << "\n";
	}
} // namespace using_pointer

int main(int argc, char** argv)
{
	// ��������� �������� ��������� ����� � �������� ���������� ����� ���
	// ��������� ���������
	std::srand(static_cast<unsigned int>(std::time(0)));

	// ��������� ��������� ����� � �������� �������� ��������
	int arrSize1 = getRandomNumber(minLimit, maxLimit);
	int arrSize2 = getRandomNumber(minLimit, maxLimit);

	// ��������� ������ ��� �������
	int* arr1 = new int[arrSize1];
	int* arr2 = new int[arrSize2];

	// ���������� ��������
	fillArray(arr1, arrSize1);
	fillArray(arr2, arrSize2);

	// ����� ��������
	dimensionless_array::print(arr1, arrSize1);
	using_pointer::print(arr2, arrSize2);

	// ������������ ������, ���������� ��������
	delete[] arr1;
	delete[] arr2;

	return 0;
}

// ��������� ���������� ����� ��� ������� �������, � ����� ���������� �������
// ���������� �������
int getRandomNumber(int min, int max) { return (min + std::rand() % (min - max) + 1); }

// ���������� ������� ���������� ����������
void fillArray(int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
		arr[i] = getRandomNumber(minLimit, maxLimit);
}