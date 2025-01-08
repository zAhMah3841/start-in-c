#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int rows, cols, l;
    printf("Введите количество строк матрицы: ");
    scanf("%d", &rows);
    printf("Введите колисество столбцов матрицы: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int stop = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Введите элементы матрицы a(%d, %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0 && stop == 0) {
                l = i;
                for (int k = 0; k < cols; k++) {
                        matrix[i - 1][k] = -1 * matrix[i - 1][k];
                }
                stop = 1;
            }
        }
    }

    printf("Строка с положительным элементом: %d\n", l + 1);
    printf("Измененная матрица:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
