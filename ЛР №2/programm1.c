#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {

    //Подключение русской локали
    setlocale(LC_ALL,"Russian"); 

    //Объявление вещественных переменных
    float x1, y1, x2, y2, x3, y3, a, b, c;

    //Ввод данных
    printf("Введите координаты первой вершины (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Введите координаты второй вершины (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Введите координаты третьей вершины (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    //Рассчет длин сторон формулой Евклидова
    a = sqrtf((x1-x2)*(y1-y2));
    b = sqrtf((x2-x3)*(y2-y3));
    c = sqrtf((x3-x1)*(y3-y1));

    // Проверка вида треугольника
    if (a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a + c*c)
            printf("Треугольник прямоугольный\n");
        else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a + c*c)
            printf("Треугольник тупоугольный\n");
        else if (a*a < b*b+c*c || b*b < a*a+c*c || c*c < a*a + c*c)
            printf("Треугольник остроугольный\n");
        
    else
        printf("Это не треугольник\n");


    return 0;
}