#include <cmath>

double calculateDoWhile(double N) {
    double F, lnArg = 0;
    int i = 0;

    do {
        lnArg = lnArg + pow(i + 1, 3);
    
        i++;
    } while (i < N);

    F = log(lnArg);

    return F;
}