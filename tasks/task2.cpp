#include <iostream>

#include "../utils/calculate-for.cpp"
#include "../utils/calculate-while.cpp"
#include "../utils/calculate-do-while.cpp"

int main() {
    double forValue, whileValue, doWhileValue;
    int N;

    printf("Программа вычисляет значение выражения F=ln(1+2^3+3^3+4^3+N^3)");
    printf("\nВычисления проводятся при помощи 3 различных видов операторов циклов");
    printf("\n\nИсполнитель: Новиков Д. А.");

    printf("\n\nВведите пожалуйста N: ");
    scanf("%d", &N);

    forValue = calculateFor(N);  /*Вычисления N*/
    whileValue = calculateWhile(N);
    doWhileValue = calculateDoWhile(N);
    printf("\nПри N=%d, F равен:\nfor():%.6lf\nwhile():%.6lf\ndo while():%.6lf", N, forValue, whileValue, doWhileValue);

    return 0;
}