/*
Ќапишите программу, котора€ просит пользовател€ угадать слово, записанное в коде
Ч то есть вводить слова до тех пор, пока одно из них не совпадЄт с загаданным
словом.
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

	// загаданное слово
	std::string secretWord{ "авто" };

	game(secretWord);

	return 0;
}

// получение строки от пользовател€
std::string getWordFromUser()
{
	std::string userAttempt;
	std::getline(std::cin, userAttempt);

	return userAttempt;
}

// функци€ с основной логикой игры
void game(std::string secretWord)
{
	std::string guess{};  // догадка от пользовател€
	int attemptCounter{}; // количество попыток

	do
	{
		std::cout << "¬ведите ваше слово: ";
		guess = getWordFromUser();

		if (guess != secretWord)
			std::cout << "Ќеверно! ";

		attemptCounter++;
		std::string tip{}; // подсказка дл€ пользовател€

		// после каждых трех неверных догадок даем пользователю подсказку
		if ((attemptCounter == 3) && (guess != secretWord))
		{
			attemptCounter = 0; // сброс счетчика попыток
			tip = tips(secretWord);

			// провер€ем, что подсказка еще не равна загаданному слову
			if ((tip != secretWord))
				std::cout << "ѕодсказка: " + tip + "\n";
			else
			{
				std::cout << "¬ы не угадали! «агаданное слово - " + secretWord;
				return; // останаливаем выполение всей функции т.к. подсказка уже равна слову
			}
		}
	} while (guess != secretWord);

	std::cout << "ѕравильно! ¬ы победили! «агаданное слово - " + secretWord
		<< '\n';
}

// функци€ возвразаещает подстроку (подсказку) на букву больше при каждом вызове
// при помощи статической переменной
std::string tips(std::string secretWord)
{
	static int counter{};
	counter++;
	return secretWord.substr(0, counter);
}
