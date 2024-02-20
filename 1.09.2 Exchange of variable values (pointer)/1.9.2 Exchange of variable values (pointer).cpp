/*
Ваша задача — реализовать уже знакомую вам функцию swap (вспомнить можно здесь),
но с помощью указателей, а не ссылок. Обратите внимание, что в пространстве имён
std уже есть функция swap. Поэтому НЕ используйте в своём решении конструкцию
using namespace std;, так как в этом случае будет вызвана библиотечная функция
swap, а не ваша.
*/

#include <iostream>

void swap(int* a, int* b);
void printValues(int a, int b);

int main(int argc, char** argv)
{
	int a = 5, b = 8;
	printValues(a, b);

	// инициализация указателей
	int* p_a = &a;
	int* p_b = &b;

	swap(p_a, p_b);
	printValues(a, b);

	return 0;
}

// смена значений между переменными
void swap(int* p_a, int* p_b)
{
	int tmp = *p_a;
	*p_a = *p_b;
	*p_b = tmp;
}

// печать значений
void printValues(int a, int b)
{
	std::cout << "a = " << a << ", b = " << b << '\n';
}
