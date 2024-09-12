#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void main(void)
{
    setlocale(LC_ALL, "Russian");    //Установка русской локали
    
    float x,y,z,s;    //Объявление вещественных переменных
    
    printf("Введите значение х:");
    scanf("%f",&x,"/n");
    printf("Введите значение y:");
    scanf("%f",&y,"/n");
    printf("Введите значение z:");
    scanf("%f",&z,"/n");
    
    s=cbrt(9+pow(x-y,2))/(x*x+y*y+2)-exp(fabsf(x-y))*pow(tan(z),3); //Рассчет результата
    
    printf("Результат s:%f",s);
}