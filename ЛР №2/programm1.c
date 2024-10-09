#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>

bool approx_equal(float a, float b)
{
  const float EPSILON = 0.1;
  return fabs(a - b) < EPSILON;
}

int main(void) {

    //Подключение русской локали
    setlocale(LC_ALL,"Russian"); 

    //Объявление вещественных переменных
    float x1, y1, x2, y2, x3, y3, a, b, c, x, y, z;

    //Ввод данных
    printf("Введите координаты первой вершины (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Введите координаты второй вершины (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Введите координаты третьей вершины (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    //Рассчет длин сторон формулой Евклидова
    a = sqrtf(pow((x1-x2), 2) + pow((y1-y2), 2));
    b = sqrtf(pow((x2-x3), 2) + pow((y2-y3), 2));
    c = sqrtf(pow((x3-x1), 2) + pow((y3-y1), 2));

    // Проверка вида треугольника
  if (a+b > c, a+c > b, b+c > b)
    if (approx_equal(a*a, b*b+c*c) || approx_equal(b*b, a*a+c*c) || approx_equal(c*c, a*a + b*b))
            printf("Треугольник прямоугольный\n");
        else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a + b*b)
            printf("Треугольник тупоугольный\n");
        else if (a*a < b*b+c*c || b*b < a*a+c*c || c*c < a*a + b*b)
            printf("Треугольник остроугольный\n");
        
  else
      printf("Это не треугольник\n");

    return 0;
}
