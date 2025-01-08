#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int rows, cols;
    printf("Введите количество строк матрицы: ");
    scanf("%d", &rows);
    printf("Введите колисество столбцов матрицы: ");
    scanf("%d", &cols);


    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Введите элементы матрицы a(%d, %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int count = 0;
    for (int j = 0; j < cols; j++) {
        int hasZero = 0;
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] == 0) {
                hasZero = 1;
                break;
            }
        }
        if (!hasZero) {
            count++;
        }
    }

    printf("Количество столбцов, не содержащих ни одного нулевого элемента: %d\n", count);
    return 0;
}
