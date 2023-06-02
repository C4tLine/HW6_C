#include <stdio.h>

int ispolnitel(int num) {
    int first = num / 100; // Первая цифра числа
    int second = (num / 10) % 10; // Вторая цифра числа
    int third = num % 10; // Третья цифра числа

    int prod1 = first * second; // Произведение первой и второй цифр
    int prod2 = second * third; // Произведение второй и третьей цифр

    int result; // Объявляем переменную результат
    //  Если первое число больше или равен второму
    if (prod1 >= prod2) {
        result = prod1 * 10 + prod2; // Умножаем на 10 и прибавляем второе число
    } else {
        result = prod2 * 10 + prod1; // Умножаем на 10 и прибавляем первое число
    }
    return result; // Возвращаем число
}

int main() {
    int num = 345; // Объявляем переменную с тестовым значением
    int result = ispolnitel(num); // Объявляем результат и передаём число в функию
    printf("Result: %d\n", result); // Вывод числа (212)
    return 0;
}