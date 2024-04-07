<details>
<summary><font size="+2">Задача 1. Вывод файла</font></summary>

### Описание
Напишите программу, которая открывает файл и выводит его содержимое на консоль. Каждое слово выводится на отдельной строке.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

Содержимое файла `in.txt`:
```
Картошка капуста
Малина клубника черешня
Яблоко груша апельсин
```
Вывод на консоль
```
Картошка
капуста
Малина
клубника
черешня
Яблоко
груша
апельсин
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. File output</font></summary>

### Description
Write a program that opens a file and prints its contents to the console. Each word is displayed on a separate line.

<details>
<summary><font size="+1">Example of program operation</font></summary>

Contents of the file `in.txt`:
```
Potato cabbage
Raspberry strawberry cherry
Apple pear orange
```
Console output
```
Potato
cabbage
Raspberries
strawberry
cherries
Apple
pear
orange
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Чтение массива из файла</font></summary>

### Описание
Напишите программу, которая открывает файл `in.txt`, содержащий массив целых чисел, и выводит на консоль этот массив в обратном порядке.
Первое «слово» входящего файла — это число элементов массива. Дальше следует сам массив.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

Содержимое файла `in.txt`:
```
5
1 2 3 4 5
```
Вывод на консоль
```
5 4 3 2 1
```
</details>
<br>

<details>
<summary><font size="+1">Еще пример работы программы</font></summary>

Содержимое файла `in.txt`:
```
7
6 5 3 8 2 5 8
```
Вывод на консоль
```
8 5 2 8 3 5 6
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Reading an array from a file</font></summary>

### Description
Write a program that opens a file `in.txt` containing an array of integers and prints the array to the console in reverse order.
The first “word” of the input file is the number of array elements. Next comes the array itself.

<details>
<summary><font size="+1">Example of program operation</font></summary>

Contents of the file `in.txt`:
```
5
1 2 3 4 5
```
Console output
```
5 4 3 2 1
```
</details>
<br>

<details>
<summary><font size="+1">Another example of how the program works</font></summary>

Contents of the file `in.txt`:
```
7
6 5 3 8 2 5 8
```
Console output
```
8 5 2 8 3 5 6
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 3. Пользовательский массив в файл</font></summary>

### Описание
Напишите программу, которая запрашивает у пользователя массив целых чисел и записывает его в файл в обратном порядке.
Программа должна сначала спросить у пользователя размер предполагаемого массива, а затем попросить заполнить каждый его элемент.
После этого программа должна записать размер полученного массива и сам полученный массив в обратном порядке в файл `out.txt`.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

Консоль:
```
Введите размер массива: 5
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
```
Файл `out.txt`:
```
5
5 4 3 2 1
```
</details>
<br>

<details>
<summary><font size="+1">Еще пример работы программы</font></summary>

Консоль:
```
Введите размер массива: 7
arr[0] = 5
arr[1] = 6
arr[2] = 7
arr[3] = 2
arr[4] = 4
arr[5] = 3
arr[6] = 5
```
Файл `out.txt`:
```
7
5 3 4 2 7 6 5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3. Custom array to file</font></summary>

### Description
Write a program that prompts the user for an array of integers and writes it to a file in reverse order.
The program must first ask the user for the size of the intended array, and then ask the user to fill each element.
After this, the program must write the size of the resulting array and the resulting array itself in reverse order to the file `out.txt`.

<details>
<summary><font size="+1">Example of program operation</font></summary>

Console:
```
Enter array size: 5
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
```
File `out.txt`:
```
5
5 4 3 2 1
```
</details>
<br>

<details>
<summary><font size="+1">Another example of how the program works</font></summary>

Console:
```
Enter array size: 7
arr[0] = 5
arr[1] = 6
arr[2] = 7
arr[3] = 2
arr[4] = 4
arr[5] = 3
arr[6] = 5
```
File `out.txt`:
```
7
5 3 4 2 7 6 5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 4. Считывание двумерного массива из файла</font></summary>

### Описание
Напишите программу, которая считывает из файла `in.txt` двумерный массив и выводит его на консоль. При этом каждая строка должна быть развёрнута в обратную сторону.
Файл `in.txt` устроен следующим образом: первые два числа — это число строк и число столбцов двумерного массива. Далее идёт сам двумерный массив в виде таблицы.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

Файл `in.txt`:
```
2 3
1 2 3
4 5 6
```
Вывод на консоль:
```
3 2 1
6 5 4
```
</details>
<br>

<details>
<summary><font size="+1">Еще пример работы программы</font></summary>

Файл `in.txt`:
```
5 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
```
Вывод на консоль:
```
5 4 3 2 1
10 9 8 7 6
15 14 13 12 11
20 19 18 17 16
25 24 23 22 21
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 4. Reading a two-dimensional array from a file</font></summary>

### Description
Write a program that reads a two-dimensional array from the file `in.txt` and prints it to the console. In this case, each line must be turned in the opposite direction.
The `in.txt` file is organized as follows: the first two numbers are the number of rows and the number of columns of the two-dimensional array. Next comes the two-dimensional array itself in the form of a table.

<details>
<summary><font size="+1">Example of program operation</font></summary>

File `in.txt`:
```
2 3
1 2 3
4 5 6
```
Console output:
```
3 2 1
6 5 4
```
</details>
<br>

<details>
<summary><font size="+1">Another example of how the program works</font></summary>

File `in.txt`:
```
5 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
```
Console output:
```
5 4 3 2 1
10 9 8 7 6
15 14 13 12 11
20 19 18 17 16
25 24 23 22 21
```
</details>
</details>
<br>