#include <stdio.h>

int somaMultiplos(int limite, int divisor) {
    int soma = 0;
    int i = divisor;

    while (i <= limite) {
        soma += i;
        i += divisor; // pula para o próximo múltiplo
    }

    return soma;
}

int main() {
    int limite;
    int divisor;
    printf("Digite o limite: ");
    scanf("%i", &limite);
    printf("Digite o divisor: ");
    scanf("%i", &divisor);
    int resultado = somaMultiplos(limite, divisor);
    printf("Soma dos múltiplos de %d até %d: %d\n", divisor, limite, resultado);

    return 0;
}
