<details>
<summary><font size="+2">Задача 1. Адреса переменных</font></summary>

### Описание
В этом задании вы потренируетесь выводить адреса и размеры переменных.
Ваша задача — создать переменные следующих типов:
- int;
- short;
- long;
- long long;
- float;
- double;
- long double;
- bool.

Для каждой переменной выведите на консоль её **адрес** и **размер**.


<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
short: 007DF924 2
int: 007DF918 4
long: 007DF90C 4
long long: 007DF8FC 8
float: 007DF8F0 4
double: 007DF8E0 8
long double: 007DF8D0 8
bool: 007DF8C7 1
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Variable addresses</font></summary>

### Description
In this activity you will practice printing the addresses and sizes of variables.
Your task is to create variables of the following types:
- int;
- short;
- long;
- long long;
- float;
- double;
- long double;
- bool.

For each variable, print its **address** and **size** to the console.


<details>
<summary><font size="+1">Example of program operation</font></summary>

```
short: 007DF924 2
int: 007DF918 4
long: 007DF90C 4
long long: 007DF8FC 8
float: 007DF8F0 4
double: 007DF8E0 8
long double: 007DF8D0 8
bool: 007DF8C7 1
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Обмен значениями</font></summary>

### Описание
В этом задании вам нужно написать функцию `swap`, которая будет обменивать значения между двумя переменными. Посмотрите на эту часть программы:
```cpp
int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
```

В этой программе используется функция swap, которую вам и предстоит создать. При этом вы должны написать её так, чтобы программа работала, как показано ниже.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
a = 5, b = 8
a = 8, b = 5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Exchange of values</font></summary>

### Description
In this assignment you need to write a `swap` function that will swap values between two variables. Look at this part of the program:
```cpp
int main(int argc, char** argv)
{
int a = 5, b = 8;

std::cout << "a = " << a << ", b = " << b << std::endl;

swap(a, b);

std::cout << "a = " << a << ", b = " << b << std::endl;

return 0;
}
```

This program uses the swap function, which is what you need to create. However, you must write it so that the program works as shown below.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
a = 5, b = 8
a = 8, b = 5
```
</details>
</details>
<br>