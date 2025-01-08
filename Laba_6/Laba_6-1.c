#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h> //malloc и free

int main() {
    setlocale(LC_ALL, "Russian");

    int n; 
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    
    float *array = calloc(n, sizeof(float));

    while (array == NULL) { 
        printf("Ошибка выделения памяти, попробуйте еще раз\n");

        printf("Введите количество элементов массива: ");
        scanf("%d", &n);

        float *array = calloc(n, sizeof(float));
    }

    for (int i = 0; i < n; i++) {
        printf("Введите %d-й элемент массива: ", i+1);
        scanf("%f", (array + i)); // указатель на i-й элемент 
    }

    //Максимальный по модулю элемент
    float max_element = 0;
    for (int i = 0; i < n; i++) {
        if (max_element < fabsf(*(array + i))) { // значение i-го элемента 
            max_element = *(array + i);
        }
    }

    //Поиск первых 2-х положительных элементов
    int first = -1, second = -1, stop = 0;
    int i_1;
    for (i_1 = 0; i_1 < n && stop == 0; i_1++) {
        if (*(array + i_1) > 0 && stop == 0) {
            first = i_1;
            stop = 1;
        }
    }
    
    stop = 0;
    
    for (int i = i_1; i < n; i++) {
        if (*(array + i) > 0 && stop == 0) {
            second = i;
            stop = 1;
        }
    }
    //произведение элементов между максимальным и минимальным
    float sum_elements = 0;

    for (int i = first + 1; i < second; i++) {
        sum_elements = sum_elements + *(array + i);
    }

    printf("Максимальный элемент по модулю: %.2f\n", max_element);

    if (first == -1) {
        printf("Отсутствуют оба положительных элемента\n");
    }
    else if (second == -1) {
        printf("Отсутствует 2-ой положительный элемент\n");
    } 
    else {
        printf("Сумма, между 2-мя положительными элементами: %.2f\n", sum_elements);
    }

    // освобождение памяти
    free(array); //чтоб не было утечки памяти

    return 0;
}