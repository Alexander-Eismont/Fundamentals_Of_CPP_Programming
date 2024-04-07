<details>
<summary><font size="+2">Задача 1. Считающая функция</font></summary>

### Описание
Нужно написать функцию, которая отслеживает, сколько раз она была вызвана за время работы программы.

Посмотрите на этот код:
```cpp
int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}
```
Ваша задача — написать функцию `counting_function` так, чтобы программа имела вывод на консоль, как показано ниже.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Количество вызовов функции counting_function(): 1
Количество вызовов функции counting_function(): 2
Количество вызовов функции counting_function(): 3
Количество вызовов функции counting_function(): 4
Количество вызовов функции counting_function(): 5
Количество вызовов функции counting_function(): 6
Количество вызовов функции counting_function(): 7
Количество вызовов функции counting_function(): 8
Количество вызовов функции counting_function(): 9
Количество вызовов функции counting_function(): 10
Количество вызовов функции counting_function(): 11
Количество вызовов функции counting_function(): 12
Количество вызовов функции counting_function(): 13
Количество вызовов функции counting_function(): 14
Количество вызовов функции counting_function(): 15
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Counting function</font></summary>

### Description
You need to write a function that tracks how many times it has been called while the program is running.

Look at this code:
```cpp
int main(int argc, char** argv)
{
     for (int i = 0; i < 15; i++)
     {
         counting_function();
     }
}
```
Your task is to write the `counting_function` function so that the program has console output as shown below.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Number of calls to the counting_function() function: 1
Number of calls to the counting_function() function: 2
Number of calls to the counting_function() function: 3
Number of calls to counting_function(): 4
Number of calls to the counting_function() function: 5
Number of calls to the counting_function() function: 6
Number of calls to the counting_function() function: 7
Number of calls to counting_function(): 8
Number of calls to the counting_function() function: 9
Number of calls to the counting_function() function: 10
Number of calls to counting_function(): 11
Number of calls to counting_function(): 12
Number of calls to counting_function(): 13
Number of calls to counting_function(): 14
Number of calls to counting_function(): 15
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Одинаковые, но разные функции</font></summary>

### Описание
Ваша задача — создать несколько функций с **одинаковой** сигнатурой, то есть с одинаковым именем, одинаковыми параметрами и одинаковым типом возвращаемого значения, но с разной реализацией.

Создайте четыре функции `int calc(int x, int y)`, каждая из которых будет реализовывать одно из четырёх простых арифметических действий: сложение, вычитание, умножение, деление.

В функции `main` напишите код, который использует каждую из четырёх функций и выводит результат на экран. В функции передавайте два числа, которые перед этим тоже выведите на экран, чтобы можно было убедиться в корректности операции.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
x = 6, y = 9
Сложение: 15
Вычитание: -3
Умножение: 54
Деление: 0
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Same but different functions</font></summary>

### Description
Your task is to create several functions with the **same** signature, that is, with the same name, the same parameters and the same return type, but with different implementations.

Create four functions `int calc(int x, int y)`, each of which will implement one of the four simple arithmetic operations: addition, subtraction, multiplication, division.

In the `main` function, write code that uses each of the four functions and prints the result to the screen. In the function, pass two numbers, which you also display on the screen before so that you can verify the correctness of the operation.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
x = 6, y = 9
Addition: 15
Subtraction: -3
Multiplication: 54
Division: 0
```
</details>
</details>
<br>