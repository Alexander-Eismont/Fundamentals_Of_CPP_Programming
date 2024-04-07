/*
Дана функция main(). Нужно написать функцию, которая отслеживает, сколько раз
она была вызвана за время работы программы. Ваша задача — написать функцию
counting_function так, чтобы программа имела вывод на консоль, как показано
ниже.
*/

#include <iostream>

void counting_function();

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < 15; i++)
		counting_function();

}

// вывод количества вывозов функции реализован через static переменную
void counting_function()
{
	static int counter = 1;
	std::cout << "Количество вызовов функции counting_function(): " << counter
		<< "\n";

	counter++;
}