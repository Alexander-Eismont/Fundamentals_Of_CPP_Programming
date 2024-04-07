/*
Ќапишите программу, котора€ создаЄт и инициализирует неупор€доченный массив целых чисел на 10 элементов и сортирует его пузырьком в обратную сторону.

¬ обычной сортировке пузырьком после первой итерации самый большой элемент массива оказываетс€ в конце массива, 
после второй итерации второй по максимальности значени€ элемент оказываетс€ в массиве предпоследним и так далее. 
¬ самом конце получаетс€, что самый маленький элемент массива стоит в начале массива.

—ортировка пузырьком в обратную сторону предполагает обратный механизм Ч 
после первой итерации самый маленький элемент массива оказываетс€ в начале массива, 
после второй итерации второй по минимальности элемент оказываетс€ вторым по счЄту в массиве и так далее.

Ќа экран необходимо вывести массив до сортировки и массив после сортировки. 
„исла дл€ заполнени€ массива придумайте сами.
*/

#include <cstdlib> // дл€ функций rand() и srand()
#include <ctime>   // дл€ функции time()
#include <iostream>

const int arrLength = 10;

int getRandomNumber(int min, int max);
void fillArray(int(&nums)[arrLength]);
void printArray(int(&nums)[arrLength]);
// void straightBubbleSort(int(&nums)[arrLength]);
void reverseBubbleSort(int(&nums)[arrLength]);

int main()
{
	setlocale(LC_ALL, "rus");

	// установка значени€ системных часов в качестве стартового числа дл€
	// рандомной генерации
	srand(static_cast<unsigned int>(time(0)));

	int nums[arrLength];

	fillArray(nums);

	std::cout << "ћассив до сортировки: ";
	printArray(nums);
	std::cout << "\n";

	// straightBubbleSort(nums);
	reverseBubbleSort(nums);

	std::cout << "ћассив после сортировки: ";
	printArray(nums);
	std::cout << "\n";

	return 0;
}

// генераци€ рандомного числа между значени€ми min и max.
int getRandomNumber(int min, int max) { return min + rand() % (max - min + 1); }

//заполнение массива рандомными числами
void fillArray(int(&nums)[arrLength])
{
	const int minLimit = 1;
	const int maxLimit = 100;

	for (int i = 0; i < arrLength; i++)
		nums[i] = getRandomNumber(minLimit, maxLimit);
}

// вывод массива
void printArray(int(&nums)[arrLength])
{
	for (int i = 0; i < arrLength; i++)
		std::cout << nums[i] << " ";
}

// сортировка пузырьком обратна€
void reverseBubbleSort(int(&nums)[arrLength])
{
	for (int i = 0; i < arrLength - 1; i++)
		for (int j = arrLength - 1; j > i; j--)
			if (nums[j] < nums[j - 1])
			{
				int tmp = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = tmp;
			}
}

// сортировка пузырьком пр€ма€
/*void straightBubbleSort(int(&nums)[arrLength])
{
  for (int i = 0; i < arrLength - 1; i++)
  {
	for (int j = 0; j < arrLength - i - 1; j++)
	{
	  if (nums[j + 1] < nums[j])
	  {
		int tmp = nums[j];
		nums[j] = nums[j + 1];
		nums[j + 1] = tmp;
	  }
	}
  }
}*/