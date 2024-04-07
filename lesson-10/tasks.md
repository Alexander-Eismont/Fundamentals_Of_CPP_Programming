<details>
<summary><font size="+2">Задача 1. Ввод массива с консоли</font></summary>

### Описание
Вам необходимо организовать ввод массива с консоли. Сначала спросите у пользователя размер массива, а затем предложите ему по очереди ввести каждый элемент массива. В конце выведите на экран получившийся массив.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите размер массива: 3
arr[0] = 4
arr[1] = 8
arr[2] = 54
Введённый массив: 4 8 54
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Entering an array from the console</font></summary>

### Description
You need to organize array input from the console. First ask the user for the size of the array, and then prompt the user to enter each element of the array in turn. Finally, display the resulting array.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter array size: 3
arr[0] = 4
arr[1] = 8
arr[2] = 54
Input array: 4 8 54
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Создатель массивов</font></summary>

### Описание
Напишите функцию `create_array`, которая принимает на вход размер массива, создаёт внутри себя динамический массив для значений типа `double`, инициализирует его нулями и возвращает вызывающей функции.
Используйте эту функцию для создания массива. Запросите у пользователя размер массива и выведите на консоль получившийся массив. В конце на забудьте очистить память.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите размер массива: 10
Массив: 0 0 0 0 0 0 0 0 0 0
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Array creator</font></summary>

### Description
Write a function `create_array` that takes the size of the array as input, creates a dynamic array internally for values of type `double`, initializes it with zeros and returns it to the calling function.
Use this function to create an array. Ask the user for the size of the array and print the resulting array to the console. At the end, don't forget to clear the memory.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter array size: 10
Array: 0 0 0 0 0 0 0 0 0 0
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 3. Динамическая таблица умножения</font></summary>

### Описание
Напишите четыре функции:
1. `create_two_dim_array`: принимает на вход количество строк и столбцов. Создаёт целочисленный двумерный динамический массив заданной размерности и возвращает указатель на него.
2. `fill_two_dim_array`: принимает на вход указатель на двумерный целочисленный массив, количество строк и столбцов в нём. Заполняет полученный массив значениями из таблицы умножения. Таблица не ограничена 10 строками или 10 столбцами. Не возвращает ничего.
3. `print_two_dim_array`: принимает на вход указатель на двумерный целочисленный массив, количество строк и столбцов в нём. Выводит полученный массив на консоль. Не возвращает ничего.
4. `delete_two_dim_array`: принимает на вход указатель на двумерный целочисленный массив, количество строк и столбцов в нём. Очищает полученный массив. Не возвращает ничего.

Используйте эти функции для организации работы программы, которая спрашивает у пользователя количество строк и столбцов и выводит на консоль таблицу умножения заданной размерности.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите количество строк: 10
Введите количество столбцов: 10
Таблица умножения:
 1  2  3  4  5  6  7  8  9  10
 2  4  6  8 10 12 14 16 18  20
 3  6  9 12 15 18 21 24 27  30
 4  8 12 16 20 24 28 32 36  40
 5 10 15 20 25 30 35 40 45  50
 6 12 18 24 30 36 42 48 54  60
 7 14 21 28 35 42 49 56 63  70
 8 16 24 32 40 48 56 64 72  80
 9 18 27 36 45 54 63 72 81  90
10 20 30 40 50 60 70 80 90 100
```
```
Введите количество строк: 5
Введите количество столбцов: 3
Таблица умножения:
1  2  3
2  4  6
3  6  9
4  8 12
5 10 15
```
```
Введите количество строк: 3
Введите количество столбцов: 3
Таблица умножения:
1 2 3
2 4 6
3 6 9
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3. Dynamic multiplication table</font></summary>

### Description
Write four functions:
1. `create_two_dim_array`: takes as input the number of rows and columns. Creates an integer two-dimensional dynamic array of a given size and returns a pointer to it.
2. `fill_two_dim_array`: takes as input a pointer to a two-dimensional integer array, the number of rows and columns in it. Fills the resulting array with values from the multiplication table. The table is not limited to 10 rows or 10 columns. Returns nothing.
3. `print_two_dim_array`: takes as input a pointer to a two-dimensional integer array, the number of rows and columns in it. Prints the resulting array to the console. Returns nothing.
4. `delete_two_dim_array`: takes as input a pointer to a two-dimensional integer array, the number of rows and columns in it. Clears the resulting array. Returns nothing.

Use these functions to organize a program that asks the user for the number of rows and columns and displays a multiplication table of a given size to the console.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter number of lines: 10
Enter number of columns: 10
Multiplication table:
 1  2  3  4  5  6  7  8  9  10
 2  4  6  8 10 12 14 16 18  20
 3  6  9 12 15 18 21 24 27  30
 4  8 12 16 20 24 28 32 36  40
 5 10 15 20 25 30 35 40 45  50
 6 12 18 24 30 36 42 48 54  60
 7 14 21 28 35 42 49 56 63  70
 8 16 24 32 40 48 56 64 72  80
 9 18 27 36 45 54 63 72 81  90
10 20 30 40 50 60 70 80 90 100
```
```
Enter number of lines: 5
Enter number of columns: 3
Multiplication table:
1  2  3
2  4  6
3  6  9
4  8 12
5 10 15
```
```
Enter number of lines: 3
Enter number of columns: 3
Multiplication table:
1 2 3
2 4 6
3 6 9
```
</details>
</details>
<br>