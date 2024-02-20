/*
Напишите программу, которая открывает файл и выводит его содержимое на консоль.
Каждое слово выводится на отдельной строке.
*/

#include <fstream>
#include <iostream>

void printWordsFromFile(const std::string& filename);

int main()
{
	setlocale(LC_ALL, "rus");

	std::string filename{ "in.txt" };

	printWordsFromFile(filename);

	return 0;
}

// Открытие файла и печать слов
void printWordsFromFile(const std::string& filename)
{
	// открытие файла
	std::ifstream file{ filename };

	// проверка на ошибку открытия файла
	if (file.is_open())
	{
		std::string wordFromFile{};

		// проход циклом по словам в файле и вывод их на экран
		while (!file.eof())
		{
			file >> wordFromFile;
			std::cout << wordFromFile << "\n";
		}
	}
	else
		std::cout << "Такого файла не существует!\n";

	// закрытие файла
	file.close();
}