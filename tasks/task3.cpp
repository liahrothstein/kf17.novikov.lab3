#include <iostream>

#include "../utils/calculate-y.cpp"

int main() {
    char buffer[100];
    double a, b;
    int N;

    double x, y, h;
    double maxY, minY;
    double xAtMax, xAtMin;

    printf("Программа вычисляет таблицу значений функции Y(x) при разбиении области [a, b] изменения аргумента на N шагов");
    printf("\nY(x)=1/(x^2+x+1)");
    printf("\n\nИсполнитель: Новиков Д. А.");
    printf("\nВариант: №14\n");

    printf("Введите пожалуйста а: ");
    scanf("%lf", &a);
    printf("Введите пожалуйста b: ");
    scanf("%lf", &b);
    printf("Введите пожалуйста N: ");
    scanf("%d", &N);

    h = (b - a) / N; /*Вычисление шага*/

    /*Заголовок таблицы
    %-4s выравнивает строку по левому краю, ширина 4*/
    printf("\n------------------------------------\n");
    printf("  №  |      x      |      Y(x)     \n");
    printf("------------------------------------\n");
    for (int i = 0; i <= N; ++i) { /*Цикл расчета*/
        x = a + i * h; /*Вычисление аргумента x*/

        y = calculateY(x); /*Вычисление функции Y(x)*/

        /*Вывод строки таблицы*/
        printf(" %4d | %11.4lf | %11.4lf \n", i, x, y);
        if (i == 0) { /*Поиск минимума и максимума*/
            maxY = minY = y;
            xAtMax = xAtMin = x;
        } else {
            if (y > maxY) {
                maxY = y;
                xAtMax = x;
            }
            if (y < minY) {
                minY = y;
                xAtMin = x;
            }
        }
    }
    printf("------------------------------------\n");

    printf("\nРезультат:\n");
    printf("Max Y = %.4lf при x = %.4lf\n", maxY, xAtMax);
    printf("Min Y = %.4lf при x = %.4lf\n", minY, xAtMin);

    return 0;
}