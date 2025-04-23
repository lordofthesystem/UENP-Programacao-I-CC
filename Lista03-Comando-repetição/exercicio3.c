#include <stdio.h>

int main() {
    int numerador = 1;
    double S = 0.0;

    for(int denominador = 1; denominador <= 50; denominador++) {
        S += (double)numerador / denominador;
        numerador += 2;
    }

    printf("O valor de S é: %.4f\n", S);

    return 0;
}
