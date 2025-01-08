#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

// Функция для нахождения максимального слова
char* findLongestWord(char* str) {
    setlocale(LC_ALL, "Russian");

    int len = strlen(str);
    int max_len = 0;
    int current_len = 0;
    int max_start = 0;
    int current_start = 0;
    char* longest_word = NULL;

    for (int i = 0; i <= len; i++) {
        if (isalnum(str[i])) { // Проверяем, является ли символ буквой или цифрой
            if (current_len == 0) {
                current_start = i;
            }
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_start = current_start;
            }
            current_len = 0; // Сбрасываем счетчик длины слова
        }
    }

    if (max_len > 0) {
        longest_word = (char*)malloc((max_len + 1) * sizeof(char)); // Выделяем память под слово
        if (longest_word == NULL) {
          perror("Ошибка выделения памяти: ");
          exit(EXIT_FAILURE);
        }
        strncpy(longest_word, str + max_start, max_len);
        longest_word[max_len] = '\0'; // Добавляем нуль-терминатор
    }

    return longest_word;
}

int main() {
    setlocale(LC_ALL, "Russian");

    char str[1000];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Убираем символ новой строки из fgets

    char* longest = findLongestWord(str);

    if (longest != NULL) {
        printf("Самое длинное слово: %s\n", longest);
    } else {
        printf("В строке нет слов.\n");
    }

    free(longest); // Освобождаем выделенную память

    return 0;
}