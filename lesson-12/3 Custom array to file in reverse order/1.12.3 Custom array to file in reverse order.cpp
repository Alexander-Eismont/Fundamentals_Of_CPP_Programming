/*
Ќапишите программу, котора€ запрашивает у пользовател€ массив целых чисел и
записывает его в файл в обратном пор€дке. ѕрограмма должна сначала спросить у
пользовател€ размер предполагаемого массива, а затем попросить заполнить каждый
его элемент. ѕосле этого программа должна записать размер полученного массива и
сам полученный массив в обратном пор€дке в файл out.txt.
*/

#include <fstream>
#include <iostream>

int getNumFromUser();
void fillArray(int* arr, const int& size);

int main()
{
	setlocale(LC_ALL, "");

	// создание файла
	std::string filename{ "out.txt" };
	// открытие файла на чтение
	std::ofstream file{ filename };

	// проверка на ошибку открыти€ файла
	if (!file.is_open())
	{
		std::cout << "“акого файла не существует!\n";
		return 1;
	}

	// получение размера массива от пользовател€
	std::cout << "¬ведите размер массива: ";
	int sizeArr{ getNumFromUser() };

	// создание массива
	int* nums{ new int[sizeArr] };

	fillArray(nums, sizeArr);

	// запись размера массива
	file << sizeArr << "\n";

	// запись массива в обратном пор€дке
	for (int i{ sizeArr - 1 }; i >= 0; i--)
		file << nums[i] << " ";

	// закратие файла
	file.close();
	// освобождение пам€ти
	delete[] nums;

	return 0;
}

// получение чисел от пользовател€
int getNumFromUser()
{
	int num{};
	std::cin >> num;

	return num;
}

// наполнение массива
void fillArray(int* arr, const int& size)
{
	for (unsigned i{}; i < size; i++)
	{
		std::cout << "arr[" << i << "] = ";
		arr[i] = getNumFromUser();
	}
}