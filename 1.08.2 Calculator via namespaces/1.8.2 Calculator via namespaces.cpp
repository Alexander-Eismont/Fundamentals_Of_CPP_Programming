/*
Ваша задача — создать несколько функций с одинаковой сигнатурой, то есть с
одинаковым именем, одинаковыми параметрами и одинаковым типом возвращаемого
значения, но с разной реализацией. Создайте четыре функции int calc(int x, int
y), каждая из которых будет реализовывать одно из четырёх простых арифметических
действий: сложение, вычитание, умножение, деление. В функции main напишите код,
который использует каждую из четырёх функций и выводит результат на экран. В
функции передавайте два числа, которые перед этим тоже выведите на экран, чтобы
можно было убедиться в корректности операции.
*/

#include <iostream>

void printResult(std::string, int res);

namespace sum { int calc(int x, int y) { return x + y; } } // namespace sum

namespace diff { int calc(int x, int y) { return x - y; } } // namespace diff

namespace mul { int calc(int x, int y) { return x * y; } } // namespace mul

namespace division { int calc(int x, int y) { return x / y; } } // namespace division

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	int x = 6, y = 9;

	std::string operations[] = { "Сложение", "Вычитание", "Умножение", "Деление" };
	int result[] = { sum::calc(x, y),
					diff::calc(x, y),
					mul::calc(x, y),
					division::calc(x, y) };

	int size = sizeof(operations) / sizeof(operations[0]);

	for (int i = 0; i < size; i++)
		printResult(operations[i], result[i]);
}

void printResult(std::string operation, int res)
{
	std::cout << operation << ": " << res << '\n';
}