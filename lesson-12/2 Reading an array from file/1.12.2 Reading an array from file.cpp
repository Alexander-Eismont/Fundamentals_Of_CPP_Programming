/*
�������� ���������, ������� ��������� ���� in.txt, ���������� ������ �����
�����, � ������� �� ������� ���� ������ � �������� �������. ������ ������
��������� ����� � ��� ����� ��������� �������. ������ ������� ��� ������.
*/

#include <fstream>
#include <iostream>

void printArray(int* arr, int& size);

int main() 
{
	setlocale(LC_ALL, "");

	// ������ ����� �����
	std::string filename{ "in.txt" };
	// �������� ����� � ��������� �����
	std::ifstream file(filename);

	// �������� �� ������������� �����
	if (!file.is_open()) 
	{
		std::cout << "������ ����� �� ����������!\n";
		return 1;
	}

	// ���������� ��������� � ������� (�����, �� ������ �������)
	int sizeArr{};
	// ������ ������� �������� ��� ������ �������
	file >> sizeArr;

	// �������� �� ������������ ������� �������
	if (sizeArr < 0)
	{
		std::cout << "�������� ������ �������\n";
		return 1;
	}

	std::cout << "������� ������� �� ����� (������ �������): ";
	std::cout << sizeArr << '\n';

	// �������� ������� � �������� ������ ���������� ��������� � �����
	int* nums{ new int[sizeArr] {} };

	// ������ � ������
	for (int i{ 0 }; i < sizeArr; i++)
		file >> nums[i];

	std::cout << "������ �� ����� � �������� �������: ";
	printArray(nums, sizeArr);

	// �������� �����
	file.close();

	// ������������ ������
	delete[] nums;

	return 0;
}

// ����� ��������� ������� �� ����� � �������� �������
void printArray(int* arr, int& size)
{
	for (int i{ size - 1 }; i >= 0; i--)
		std::cout << arr[i] << " ";
}