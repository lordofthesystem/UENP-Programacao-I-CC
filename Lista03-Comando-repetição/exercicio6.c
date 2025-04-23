#include <stdio.h>

int main() {
    int a, b, resultado = 0;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    // Guarda o sinal do resultado
    int negativo = 0;
    if (a < 0) {
        a = -a;
        negativo = !negativo;
    }
    if (b < 0) {
        b = -b;
        negativo = !negativo;
    }

    // Soma repetida
    for(int i = 0; i < b; i++) {
        resultado += a;
    }

    // Ajusta o sinal, se necessário
    if (negativo) {
        resultado = -resultado;
    }

    printf("Resultado da multiplicação: %d\n", resultado);

    return 0;
}
