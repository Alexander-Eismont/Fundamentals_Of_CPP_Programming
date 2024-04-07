/*
�������� ���������, ������� ����������� � ������������ ������ ����� ����� �
���������� ��� � ���� � �������� �������. ��������� ������ ������� �������� �
������������ ������ ��������������� �������, � ����� ��������� ��������� ������
��� �������. ����� ����� ��������� ������ �������� ������ ����������� ������� �
��� ���������� ������ � �������� ������� � ���� out.txt.
*/

#include <fstream>
#include <iostream>

int getNumFromUser();
void fillArray(int* arr, const int& size);

int main()
{
	setlocale(LC_ALL, "");

	// �������� �����
	std::string filename{ "out.txt" };
	// �������� ����� �� ������
	std::ofstream file{ filename };

	// �������� �� ������ �������� �����
	if (!file.is_open())
	{
		std::cout << "������ ����� �� ����������!\n";
		return 1;
	}

	// ��������� ������� ������� �� ������������
	std::cout << "������� ������ �������: ";
	int sizeArr{ getNumFromUser() };

	// �������� �������
	int* nums{ new int[sizeArr] };

	fillArray(nums, sizeArr);

	// ������ ������� �������
	file << sizeArr << "\n";

	// ������ ������� � �������� �������
	for (int i{ sizeArr - 1 }; i >= 0; i--)
		file << nums[i] << " ";

	// �������� �����
	file.close();
	// ������������ ������
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
void fillArray(int* arr, const int& size)
{
	for (unsigned i{}; i < size; i++)
	{
		std::cout << "arr[" << i << "] = ";
		arr[i] = getNumFromUser();
	}
}