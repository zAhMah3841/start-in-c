#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int positiveElements(int rows, int cols, int** matrix) {
    int l;
    int stop = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0 && stop == 0) {
                l = i;
                printf("Строка с положительным элементом: %d\n", l + 1);
                stop = 1;
            }
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int rows, cols;
    printf("Введите количество строк матрицы: ");
    scanf("%d", &rows);
    printf("Введите колисество столбцов матрицы: ");
    scanf("%d", &cols);

    int** matrix = (int**) malloc(rows * sizeof(int*));
    for (int i = 0; i < cols; i++) { 
        matrix[i] = malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Введите элементы матрицы a(%d, %d): ", i+1, j+1);
            scanf("%d", (*(matrix + i) + j));
        }
    }

    positiveElements(rows, cols, matrix);

    for (int i = 0; i < n; i++) { 
        free(matrix[i]); 
    } 
    free(matrix);
    return 0;
}
