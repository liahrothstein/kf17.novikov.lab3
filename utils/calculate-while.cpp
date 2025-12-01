#include <cmath>

double calculateWhile(int N) {
    double F, lnArg = 0;
    int i = 0;
    
    while (i < N) {        
        lnArg = lnArg + pow(i + 1, 3);
        
        i++;
    };
    
    F = log(lnArg);
    
    return F;
}