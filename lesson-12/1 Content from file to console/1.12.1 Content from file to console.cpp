/*
�������� ���������, ������� ��������� ���� � ������� ��� ���������� �� �������.
������ ����� ��������� �� ��������� ������.
*/

#include <fstream>
#include <iostream>

void printWordsFromFile(const std::string& filename);

int main()
{
	setlocale(LC_ALL, "rus");

	std::string filename{ "in.txt" };

	printWordsFromFile(filename);

	return 0;
}

// �������� ����� � ������ ����
void printWordsFromFile(const std::string& filename)
{
	// �������� �����
	std::ifstream file{ filename };

	// �������� �� ������ �������� �����
	if (file.is_open())
	{
		std::string wordFromFile{};

		// ������ ������ �� ������ � ����� � ����� �� �� �����
		while (!file.eof())
		{
			file >> wordFromFile;
			std::cout << wordFromFile << "\n";
		}
	}
	else
		std::cout << "������ ����� �� ����������!\n";

	// �������� �����
	file.close();
}