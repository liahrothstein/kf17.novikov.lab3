#include <iostream>
#include <cmath>

int main() {
    double a, b, result;
    char op;

    printf("Программа может выполнять сложение, вычитание, умножение и деление двух чисел а и b\n");
    printf("А также вычисляет выражение a^b, и показывает результат\n");
    printf("При вводе двух нулевых значений или неправильного типа операции программа завершает свою работу\n");
    printf("\n\nИсполнитель: Новиков Д. А.");

    while (true) {
        printf("\nВведите пожалуйста число а: ");
        scanf("%lf", &a);
        printf("\nВведите пожалуйста тип операции: ");
        scanf(" %c", &op);
        printf("\nВведите пожалуйста число b: ");
        scanf("%lf", &b);

        if ((a == 0) && (b == 0)) break;

        switch (op) {
            case '+':
                result = (a + b);
                printf("\na %c b = %.2lf; a^b = %.2lf", op, result, pow(a, b));
                break;
            case '-':
                result = (a - b);
                printf("\na %c b = %.2lf; a^b = %.2lf", op, result, pow(a, b));
                break;
            case '*':
                result = (a * b);
                printf("\na %c b = %.2lf; a^b = %.2lf", op, result, pow(a, b));
                break;
            case '/':
                if (b != 0) {
                    result = (a / b);
                    printf("\na %c b = %.2lf; a^b = %.2lf", op, result, pow(a, b));
                    break;
                } else {
                    printf("\nОшибка: деление на ноль");
                    break;
                }
            default:
                printf("\nОшибка: неизвестный тип операции\n");
                break;
        };
        if (op != '+' && op != '-' && op != '*' && op != '/') break;
    };

    return 0;
}