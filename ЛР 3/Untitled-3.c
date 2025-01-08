#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    double population, triple_population;
    int years = 0;

    printf("Введите начальльное население:");
    scanf("%lf", &population);
    printf("Введите значение n: ");
    scanf("%d", &n);
    triple_population = population*3;

    while (population < triple_population) {
        population += population / n;
        round(population);
        years++;
    }

    printf("Население утроится через %d лет.\n", years);

    return 0;
}
