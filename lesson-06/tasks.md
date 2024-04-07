<details>
<summary><font size="+2">Задача 1. Арифметические функции</font></summary>

### Описание
Дана программа:

```cpp
int main(int argc, char** argv)
{
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;
	
	return 0;
}
```

В ней используются функции `sum`, `diff`, `multiplication`, `division`. Ваша задача — написать эти функции, чтобы результат работы программы выглядел следующим образом:
```
5 + 10 = 15
5 - 10 = -5
5 * 10 = 50
5 / 10 = 0.5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Arithmetic functions</font></summary>

### Description
Given the program:

```cpp
int main(int argc, char** argv)
{
int a = 5, b = 10;

int s = sum(a, b);
int dif = diff(a, b);
int mult = multiplication(a, b);
double div = division(a, b);

std::cout << a << " + " << b << " = " << s << std::endl;
std::cout << a << " - " << b << " = " << dif << std::endl;
std::cout << a << " * " << b << " = " << mult << std::endl;
std::cout << a << " / " << b << " = " << div << std::endl;

return 0;
}
```

It uses the functions `sum`, `diff`, `multiplication`, `division`. Your task is to write these functions so that the result of the program looks like this:
```
5 + 10 = 15
5 - 10 = -5
5 * 10 = 50
5 / 10 = 0.5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Устранение дублирования</font></summary>

### Описание
Дана программа:

![Программа](tasks_img/program.png)

Определите, что она делает, и найдите дублирующийся код. Создайте функцию, которая будет устранять дублирование, и вместо повторяющегося кода вызывайте её. Результат работы программы не должен измениться.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
5 в степени 2 = 25
3 в степени 3 = 27
4 в степени 4 = 256
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Eliminating duplication</font></summary>

### Description
Given the program:

![Program](tasks_img/program.png)

Determine what it does and find the duplicate code. Create a function that will eliminate duplication and call it instead of repeating code. The result of the program should not change.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
5 to the power of 2 = 25
3 to the power of 3 = 27
4 to the power of 4 = 256
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 3. Числа Фибоначчи</font></summary>

### Описание
Числа Фибоначчи — элементы числовой последовательности `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233...`, в которой первые два числа равны 0 и 1, а каждое последующее число равно сумме двух предыдущих чисел.

Напишите функцию, которая принимает на вход целое число — номер элемента последовательности Фибоначчи — и возвращает число Фибоначчи, имеющее этот номер в последовательности. Функция должна быть рекурсивной.

Напишите программу, которая использует написанную функцию для вывода последовательности Фибоначчи. Программа должна запрашивать у пользователя целое число и выводить на экран столько чисел последовательности Фибоначчи, сколько ввёл пользователь.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите число: 5
Числа Фибоначчи: 0 1 1 2 3
```
```
Введите число: 10
Числа Фибоначчи: 0 1 1 2 3 5 8 13 21 34
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3. Fibonacci numbers</font></summary>

### Description
Fibonacci numbers are the elements of the number sequence `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233...`, in which the first two numbers are 0 and 1, and each subsequent number is equal to the sum of the two previous numbers.

Write a function that takes as input an integer - the number of an element of the Fibonacci sequence - and returns the Fibonacci number that has this number in the sequence. The function must be recursive.

Write a program that uses the written function to print the Fibonacci sequence. The program should prompt the user for an integer and display as many Fibonacci sequence numbers as the user entered.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter number: 5
Fibonacci numbers: 0 1 1 2 3
```
```
Enter number: 10
Fibonacci numbers: 0 1 1 2 3 5 8 13 21 34
```
</details>
</details>
<br>