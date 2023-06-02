#include <stdio.h>
#include <string.h>

char* join(char* words[], int n) {
    static char result[256]; // Статический массив для результата
    result[0] = '\0'; // Начальное значение пустой строки

    for (int i = 0; i < n; i++) {
        strcat(result, words[i]); // Добавляем текущую строку к результату
        if (i != n - 1) strcat(result, " "); // Если это не последняя строка, добавляем пробел
    }
    return result; // Возвращаем строку
}

int main() {
    char* words[] = {"Hello", "world", "from", "function", "join!"}; // Массив с тестовыми элементами
    int n = sizeof(words) / sizeof(words[0]); // Считаем кол-во слов (элементов) в массиве

    char* result = join(words, n); // Передаём значение в функцию
    printf("%s\n", result); // Вывод строки
    return 0;
}