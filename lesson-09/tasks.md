<details>
<summary><font size="+2">Задача 1. Вывод массива</font></summary>

### Описание
Напишите функцию `print`, которая принимает на вход массив произвольного размера и выводит его на экран. В программе создайте несколько массивов разного размера и используйте для вызова вашей функции.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
1 2 3 4 5 6 7 8 9
6 5 4 8
1 4 3 7 5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Array output</font></summary>

### Description
Write a `print` function that takes an array of arbitrary size as input and prints it to the screen. In the program, create several arrays of different sizes and use them to call your function.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
1 2 3 4 5 6 7 8 9
6 5 4 8
1 4 3 7 5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Снова swap</font></summary>

### Описание
Ваша задача — реализовать уже знакомую вам функцию `swap` (вспомнить можно [здесь](../../1.7/02)), но с помощью указателей, а не ссылок.

Обратите внимание, что в пространстве имён `std` уже есть функция `swap`. Поэтому **НЕ** используйте в своём решении конструкцию `using namespace std;`, так как в этом случае будет вызвана библиотечная функция `swap`, а не ваша.

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
<summary><font size="+2">Task 2. Swap again</font></summary>

### Description
Your task is to implement the `swap` function that you are already familiar with (you can remember [here](../../1.7/02)), but using pointers, not links.

Note that the `std` namespace already has a `swap` function. Therefore, **DO NOT** use the `using namespace std;` construction in your solution, since in this case the library `swap` function will be called, not yours.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
a = 5, b = 8
a = 8, b = 5
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3. Flipping an array</font></summary>

### Description
Write a function `reverse` that takes an array of arbitrary size as input and “reverses” it - that is, the first element becomes the last and vice versa. Print the array to the console before calling the function and after calling the function.

Note that the `reverse` function must modify the array passed to it. The elements in it must change their order.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Before the reverse function: 1 2 3 4 5 6 7 8 9
After the reverse function: 9 8 7 6 5 4 3 2 1
```
</details>
</details>
<br>