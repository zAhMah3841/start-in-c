#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void main(void)
{
    setlocale(LC_ALL, "Russian");    //Установка русской локали
    
    float x,s;    //Объявление вещественных переменных
    
    printf("Введите значение х:");
    scanf("%f",&x);    //Ввод переменной х
    
    s=16*x*x;    //Рассчет результата
    
    printf("Результат:%f",s);    //Вывод результата
}