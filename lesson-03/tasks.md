<details>
<summary><font size="+2">Задание 1. Таблица истинности</font></summary><br>

Напишите программу, которая выводит таблицу истинности для логических операторов `||`, `&&`, с применением логических выражений.

<details>
<summary><font size="+1">Результат работы программы</font></summary>

```
Оператор: ||
true    true    true
false   true    true
true    false   true
false   false   false

Оператор: &&
true    true    true
false   true    false
true    false   false
false   false   false
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Truth table</font></summary><br>

Write a program that prints the truth table for the logical operators `||`, `&&`, using logical expressions.

<details>
<summary><font size="+1">Result of the program</font></summary>

```
Operator: ||
true true true
false true true
true false true
false false false

Operator: &&
true true true
false true false
true false false
false false false
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задание 2. Упорядочить числа</font></summary><br>

Напишите программу, которая запрашивает у пользователя три целых числа и выводит их на экран в порядке убывания.

## Ограничения*

Для решения задачи используйте только оператор `?:`.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите первое число: 1
Введите второе число: -2
Введите третье число: 3

Результат: 3 1 -2
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Order the numbers</font></summary><br>

Write a program that prompts the user for three integers and displays them on the screen in descending order.

## Restrictions*

To solve the problem, use only the `?:` operator.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter first number: 1
Enter the second number: -2
Enter third number: 3

Result: 3 1 -2
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задание 3*. Гороскоп</font></summary><br>

Пользователь вводит информацию о себе:

- пол;
- знак зодиака;
- возраст.

Результат работы программы – предсказание.

Если это мужчина водного знака зодиака и строго моложе 40 лет, то на экран должен вывестись текст:

```
Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.
```

Если это женщина земляного знака зодиака и в возрасте от 15 до 30 лет, включая границы, то на экран должен вывестись текст:

```
Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. 
Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.
```

В противном случае на экране должен появиться текст:

```
Гороскоп для вас находится в разработке. Приходите чуточку позже ;)
```

Если будет желание и настроение, можно добавить свои собственные предсказания :)

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите пол: м
Введите знак зодиака: овен
Введите возраст: 32
Ваше предсказание:
Гороскоп для вас находится в разработке. Приходите чуточку позже ;)
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3*. Horoscope</font></summary><br>

The user enters information about himself:

- floor;
- Zodiac sign;
- age.

The result of the program is a prediction.

If this is a man of the water sign of the zodiac and strictly younger than 40 years old, then the text should be displayed on the screen:

```
Today is a very fruitful day. You can achieve what previously seemed almost impossible.
```

If this is a woman of the earth sign of the zodiac and between the ages of 15 and 30 years, including boundaries, then the text should be displayed on the screen:

```
Tonight is suitable for communicating with friends, holding home celebrations and impromptu parties.
It will not only be fun, but also interesting: there will be something that will captivate everyone.
```

Otherwise, the following text should appear on the screen:

```
A horoscope for you is in development. Come back a little later ;)
```

If you have the desire and mood, you can add your own predictions :)

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter gender: m
Enter your zodiac sign: Aries
Enter age: 32
Your prediction:
A horoscope for you is in development. Come back a little later ;)
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задание 4*. Сравнить числа</font></summary><br>

Напишите программу, которая запрашивает у пользователя два целых числа меньше 100 и выводит на экран результат их сравнения в текстовом виде.

## Ограничения

Программа может работать только с числами меньше 100 и больше -100. Если хотя бы одно из введённых чисел не укладывается в этот диапазон, вместо результата программа должна сообщить пользователю об ошибке.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите целое число: 17
Введите целое число: 36

семнадцать меньше чем тридцать шесть
```

```
Введите целое число: 99
Введите целое число: -36

девяносто девять больше чем минус тридцать шесть
```

```
Введите целое число: 17
Введите целое число: 17

семнадцать равно семнадцать
```

```
Введите целое число: 17
Введите целое число: -117

Ошибка! Одно из чисел вне диапазона!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 4*. Compare numbers</font></summary><br>

Write a program that asks the user for two integers less than 100 and displays the result of their comparison in text form.

## Restrictions

The program can only work with numbers less than 100 and greater than -100. If at least one of the entered numbers does not fit into this range, the program should inform the user of an error instead of the result.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter an integer: 17
Enter an integer: 36

seventeen less than thirty six
```

```
Enter an integer: 99
Enter an integer: -36

ninety nine more than minus thirty six
```

```
Enter an integer: 17
Enter an integer: 17

seventeen equals seventeen
```

```
Enter an integer: 17
Enter an integer: -117

Error! One of the numbers is out of range!
```
</details>
</details>
<br>