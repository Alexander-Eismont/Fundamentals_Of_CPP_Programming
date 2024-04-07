/*
�������� ���������, ������� ����������� � ������������ ��� ����� ����� ������ 100 � ������� �� ����� ��������� �� ��������� � ��������� ����.
*/

#include <iostream>

int getNumFromUser();
bool isCorrectNum(int num);
std::string numberInWords(int num);
void printResult(int num1, int num2);

int main()
{
	setlocale(LC_ALL, "RUS");

	int numFromUser1 = getNumFromUser();
	int numFromUser2 = getNumFromUser();

	if (isCorrectNum(numFromUser1) && isCorrectNum(numFromUser2))
		printResult(numFromUser1, numFromUser2);
	else
		std::cout << "���� �� ����� ��� ��� ������� �������\n";

	return 0;
}

// ��������� ����� �� ������������
int getNumFromUser()
{
	int num;

	std::cout << "������� ����� �� -100 �� 100: ";
	std::cin >> num;

	return num;
}

// �������� �� ������������ ����� �����
bool isCorrectNum(int num)
{
	int minLimit = -100;
	int maxLimit = 100;

	return (num < minLimit || num > maxLimit) ? false : true;
}

// ������ ����� �������
std::string numberInWords(int num) ]
{
	std::string ones[] = { "����", "����", "���", "���", "������", "����", "�����", "����", "������", "������", "",
						"����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
	std::string tens[] = { "������", "��������", "��������", "�����", "���������", "����������", "���������", "�����������", "���������" };
	std::string hundred = "���";

	std::string res;

	if (num < 0)
	{
		num *= -1;
		res += "����� ";
	}

	if (num == 100)
		res += hundred;
	else if (num < 20 && num != 10)
		res += ones[num];
	else
	{
		if (num % 10 == 0)
			res += tens[(num / 10) - 1];
		else
		{
			res += tens[(num / 10) - 1];
			res = res + " " + ones[num % 10];
		}
	}

	return res;
}

// ����� ���������� �� �����
void printResult(int num1, int num2)
{
	std::string sign[] = { "������, ���", "������, ���", "�����" };

	std::string firstNumInWords = numberInWords(num1);
	std::string secondNumInWords = numberInWords(num2);

	if (num1 > num2)
		std::cout << firstNumInWords + " " + sign[0] + " " + secondNumInWords + "\n";
	else if (num1 < num2)
		std::cout << firstNumInWords + " " + sign[1] + " " + secondNumInWords + "\n";
	else
		std::cout << firstNumInWords + " " + sign[2] + " " + secondNumInWords + "\n";
}
