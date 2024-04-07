/*
�������� ���������, ������� ������ ������������ ������� �����, ���������� � ����
� �� ���� ������� ����� �� ��� ���, ���� ���� �� ��� �� ������� � ����������
������.
*/

#include <iostream>
#include <string>
#include <windows.h>

std::string getWordFromUser();
void game(std::string secretWord);
std::string tips(std::string secretWord);

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "rus");

	// ���������� �����
	std::string secretWord{ "����" };

	game(secretWord);

	return 0;
}

// ��������� ������ �� ������������
std::string getWordFromUser()
{
	std::string userAttempt;
	std::getline(std::cin, userAttempt);

	return userAttempt;
}

// ������� � �������� ������� ����
void game(std::string secretWord)
{
	std::string guess{};  // ������� �� ������������
	int attemptCounter{}; // ���������� �������

	do
	{
		std::cout << "������� ���� �����: ";
		guess = getWordFromUser();

		if (guess != secretWord)
			std::cout << "�������! ";

		attemptCounter++;
		std::string tip{}; // ��������� ��� ������������

		// ����� ������ ���� �������� ������� ���� ������������ ���������
		if ((attemptCounter == 3) && (guess != secretWord))
		{
			attemptCounter = 0; // ����� �������� �������
			tip = tips(secretWord);

			// ���������, ��� ��������� ��� �� ����� ����������� �����
			if ((tip != secretWord))
				std::cout << "���������: " + tip + "\n";
			else
			{
				std::cout << "�� �� �������! ���������� ����� - " + secretWord;
				return; // ������������ ��������� ���� ������� �.�. ��������� ��� ����� �����
			}
		}
	} while (guess != secretWord);

	std::cout << "���������! �� ��������! ���������� ����� - " + secretWord
		<< '\n';
}

// ������� ������������� ��������� (���������) �� ����� ������ ��� ������ ������
// ��� ������ ����������� ����������
std::string tips(std::string secretWord)
{
	static int counter{};
	counter++;
	return secretWord.substr(0, counter);
}
