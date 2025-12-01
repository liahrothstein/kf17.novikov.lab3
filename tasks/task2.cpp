#include <iostream>

#include "../utils/calculate-for.cpp"
#include "../utils/calculate-while.cpp"
#include "../utils/calculate-do-while.cpp"

int main() {
    double forValue, whileValue, doWhileValue;

    printf("Программа вычисляет значение выражения F=ln(1+2^3+3^3+4^3+N^3) для N=6, N=5");
    printf("\nВычисления проводятся при помощи 3 различных видов операторов циклов");
    printf("\n\nИсполнитель: Новиков Д. А.");

    forValue = calculateFor(6);  /*Вычисления при N=6*/
    whileValue = calculateWhile(6);
    doWhileValue = calculateDoWhile(6);
    printf("\n\nПри N=6, F равен:\nfor():%.6lf\nwhile():%.6lf\ndo while():%.6lf", forValue, whileValue, doWhileValue);
    
    forValue = calculateFor(5); /*Вычисления при N=5*/
    whileValue = calculateWhile(5);
    doWhileValue = calculateDoWhile(5);
    printf("\n\nПри N=5, F равен:\nfor():%.6lf\nwhile():%.6lf\ndo while():%.6lf\n", forValue, whileValue, doWhileValue);

    return 0;
}