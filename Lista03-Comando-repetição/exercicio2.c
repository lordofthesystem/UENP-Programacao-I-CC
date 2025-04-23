#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double S = 0.0;

    for(i = 1; i <= 100; i++) {
        S += pow(2, i - 1) / (double)i;
    }

    printf("O valor de S com 100 termos é: %.4f\n", S);

    return 0;
}
