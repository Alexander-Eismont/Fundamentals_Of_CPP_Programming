/*
¬ этом задании вы потренируетесь выводить адреса и размеры переменных. ¬аша
задача Ч создать переменные следующих типов:
int;
short;
long;
long long;
float;
double;
long double;
bool.
ƒл€ каждой переменной выведите на консоль еЄ адрес и размер.
*/

#include <iostream>

int main()
{
	short a;
	int b;
	long c;
	long long d;
	float e;
	double f;
	long double g;
	bool h;

	// вывод с адресами пам€ти будет отличатьс€, т.к. в данном случае оперативна€
	// пам€ть выдел€етс€ под хранение переменных и не всегда одни и те же €чейки
	// пам€ти хран€т одну и ту же переменную (а точнее почти никогда), и также еще
	// вывод зависит от размера оперативной пам€ти компьютера
	std::cout << "short: " << &a << " " << sizeof(a) << " bytes\n";
	std::cout << "int: " << &b << " " << sizeof(b) << " bytes\n";
	std::cout << "long: " << &c << " " << sizeof(c) << " bytes\n";
	std::cout << "long long: " << &d << " " << sizeof(d) << " bytes\n";
	std::cout << "float: " << &e << " " << sizeof(e) << " bytes\n";
	std::cout << "double: " << &f << " " << sizeof(f) << " bytes\n";
	std::cout << "long double: " << &g << " " << sizeof(g) << " bytes\n";
	std::cout << "bool: " << &h << " " << sizeof(h) << " byte\n";

	return 0;
}