#include <stdio.h>

int main() {
    int numero;

    // Entrada do número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se é zero
    if (numero == 0) {
        printf("O número é zero.\n");
    } else {
        // Verifica se é positivo ou negativo
        if (numero > 0) {
            printf("O número é positivo.\n");
        } else {
            printf("O número é negativo.\n");
        }

        // Verifica se é par ou ímpar
        if (numero % 2 == 0) {
            printf("O número é par.\n");
        } else {
            printf("O número é ímpar.\n");
        }
    }

    return 0;
}
