#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");
    
    int n;

    printf("Введите размер квадратной матрицы:\n");
    scanf("%d",&n);

    int a[n][n];

    // Ввод элементов матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Введите элемент a(%d, %d)", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

	for (int j = 0; j < n; j++) {
		int ok = 1;
		int sum = 0;
		for (int k = 0; k < n; k++) {
			if (a[j][k] < 0) {
				ok = 0;
				break;
			}
			sum += a[j][k];
		}
		if (ok) {
			printf("Строка: %d, сумма: %d\n", j+1, sum);
		}
	}
    int sum;
    int summin = a[0][0];

    for (int k = 1; k < n; k++) {
        sum = 0;
        for (int i = 0; i < n - k; i++) {
            sum += a[i][i + k];
        }
        if (sum < summin) {
            summin = sum;
        }
    }

    // Диагонали ниже главной
    for (int k = 1; k < n; k++) {
        sum = 0;
        for (int i = k; i < n; i++) {
            sum += a[i][i - k];
        }
        if (sum > summin) {
            summin = sum;
        }
    }


    printf("Минимальная сумма элементов диагонали, параллельной главной: %d\n",summin);
    return 0;
}