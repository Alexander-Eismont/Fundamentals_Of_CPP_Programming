/*
Напишите программу, которая запрашивает у пользователя два целых числа меньше 100 и выводит на экран результат их сравнения в текстовом виде.
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
		std::cout << "Одно из чисел или оба введены неверно\n";

	return 0;
}

// получение числа от пользователя
int getNumFromUser()
{
	int num;

	std::cout << "Введите число от -100 до 100: ";
	std::cin >> num;

	return num;
}

// проверка на правильность ввода числа
bool isCorrectNum(int num)
{
	int minLimit = -100;
	int maxLimit = 100;

	return (num < minLimit || num > maxLimit) ? false : true;
}

// запись числа словами
std::string numberInWords(int num) ]
{
	std::string ones[] = { "ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "",
						"одинадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
	std::string tens[] = { "десять", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
	std::string hundred = "сто";

	std::string res;

	if (num < 0)
	{
		num *= -1;
		res += "минус ";
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

// вывод результата на экран
void printResult(int num1, int num2)
{
	std::string sign[] = { "больше, чем", "меньше, чем", "равно" };

	std::string firstNumInWords = numberInWords(num1);
	std::string secondNumInWords = numberInWords(num2);

	if (num1 > num2)
		std::cout << firstNumInWords + " " + sign[0] + " " + secondNumInWords + "\n";
	else if (num1 < num2)
		std::cout << firstNumInWords + " " + sign[1] + " " + secondNumInWords + "\n";
	else
		std::cout << firstNumInWords + " " + sign[2] + " " + secondNumInWords + "\n";
}
