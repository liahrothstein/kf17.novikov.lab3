#include <cmath>

double calculateY(double x) {
    double y;

    y = 1 / (pow(x, 2) + x + 1);

    return y;
}