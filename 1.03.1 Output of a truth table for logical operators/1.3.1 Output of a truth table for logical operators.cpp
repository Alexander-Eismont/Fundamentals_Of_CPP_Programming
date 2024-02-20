/*
Напишите программу, которая выводит таблицу истинности для логических операторов ||, &&, с применением логических выражений.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	bool t = true, f = false;

	std::cout << "Оператор: ||\n";
	printf("%s %8s %8s\n", "true", "true", (t || t) ? "true" : "false");
	printf("%s %9s %7s\n", "true", "false", (t || f) ? "true" : "false");
	printf("%s %7s %8s\n", "false", "true", (f || t) ? "true" : "false");
	printf("%s %8s %8s\n", "false", "false", (f || f) ? "true" : "false");

	std::cout << "\nОператор: &&\n";
	printf("%s %8s %8s\n", "true", "true", (t && t) ? "true" : "false");
	printf("%s %9s %8s\n", "true", "false", (t && f) ? "true" : "false");
	printf("%s %7s %9s\n", "false", "true", (f && t) ? "true" : "false");
	printf("%s %8s %8s\n", "false", "false", (f && f) ? "true" : "false");

	return 0;
}