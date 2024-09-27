#include <stdio.h>
#include <string.h> //Библиотека для работами со строками и памятью

int main() {
    //Подключение русской локали
    setlocale(LC_ALL, "Russian");
    
    //Ввод данных
    char season[10];
    printf("Введите время года (Зима, Весна, Лето, Осень):\n");
    scanf("%s", season);

    //Проверка данных
    if (strcmp(season, "зима") == 0 || strcmp(season, "Зима") == 0) 
        printf("Месяцы: Декабрь, Январь, Февраль\n");
     else if (strcmp(season, "весна") == 0 || strcmp(season, "Весна") == 0)
        printf("Месяцы: Март, Апрель, Май\n");
     else if (strcmp(season, "лето") == 0 || strcmp(season, "Лето") == 0)
        printf("Месяцы: Июнь, Июль, Август\n");
     else if (strcmp(season, "осень") == 0 || strcmp(season, "Осень") == 0)
        printf("Месяцы: Сентябрь, Октябрь, Ноябрь\n");
     else 
        printf("Неверное время года!\n");
    

    return 0;
}