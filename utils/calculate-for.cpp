#include <cmath>

double calculateFor(double N) {
    double F, lnArg = 0;

    for (int i = 0; i < N; i++) {
        lnArg = lnArg + pow(i + 1, 3);
    };

    F = log(lnArg);

    return F;
}