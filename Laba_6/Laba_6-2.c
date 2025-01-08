#include <stdio.h>
#include <stdlib.h> //malloc и free

int main() {
    int n, m, i_1; 

    printf("Введите количество столбцев: ");
    scanf("%d", &n);
    printf("Введите количество строк: ");
    scanf("%d", &m);

    int **array = (int **)malloc(m * sizeof(int *));

    for (i_1 = 0; i_1 < m; i_1++) { 
        array[i_1] = malloc(n * sizeof(int));
    }

    while (array == NULL || array[i_1] == NULL) {
        printf("Ошибка выделения памяти, попробуйте еще раз\n");

        printf("Введите количество столбцев: ");
        scanf("%d", &n);
        printf("Введите количество строк: ");
        scanf("%d", &m);

        int **array = (int **)malloc(m * sizeof(int *));

        for (i_1 = 0; i_1 < m; i_1++) { 
            array[i_1] = malloc(n * sizeof(int));
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Введите элемент а(%d, %d): ", i + 1, j + 1);
            scanf("%d", (*(array + i) + j)); 
        }
    }

    //Вычисляем кол-во столбцев без нулевого элемента
    int count = 0;
    for (int j = 0; j < n; j++) {
        int hasZero = 0;
        for (int i = 0; i < m; i++) {
            if (*(*(array + i) + j) == 0) {
                hasZero = 1;
                break;
            }
        }
        if (!hasZero) {
            count++;
        }
    }
   
    printf("Количество столбцев без нулевого элемента: %d", count);

    for (int i = 0; i < n; i++) { 
        free(array[i]); 
    } 
    free(array);

    return 0;
}