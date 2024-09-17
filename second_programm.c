#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void main(void)
{
    setlocale(LC_ALL, "Russian");    //Установка русской локали
    
    float x,y,z,s;    //Объявление вещественных переменных
    
    printf("Введите значение х:");
    scanf("%f",&x,"/n");    //Ввод переменной х
    printf("Введите значение y:");
    scanf("%f",&y,"/n");    //Ввод переменной у
    printf("Введите значение z:");
    scanf("%f",&z,"/n");    //Ввод переменной z

    //Рассчет результата
    s=cbrt(9+pow(x-y,2));
    s=s/(x*x+y*y+2);
    s=s-exp(fabsf(x-y))*pow(tan(z),3);

    printf("Результат s:%f",s); //Вывод результата s
}
