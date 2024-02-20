/*
Дана программа с функцией main
Определите, что она делает, и найдите дублирующийся код. Создайте функцию, которая будет устранять дублирование,
и вместо повторяющегося кода вызывайте её. Результат работы программы не должен измениться.
*/

#include <iostream>

int numToPower(int value, int power);
void printAnswer(int value, int power, int result);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	int value = 5;
	int power = 2;
	int result = numToPower(value, power);

	printAnswer(value, power, result);

	value = 3;
	power = 3;
	result = numToPower(value, power);

	printAnswer(value, power, result);

	value = 4;
	power = 4;
	result = numToPower(value, power);

	printAnswer(value, power, result);

	return 0;
}

int numToPower(int value, int power)
{
	int res = 1;

	for (int i = 0; i < power; i++)
		res *= value;

	return res;
}

void printAnswer(int value, int power, int result)
{
	std::cout << value << " в степени " << power << " = " << result << std::endl;
}