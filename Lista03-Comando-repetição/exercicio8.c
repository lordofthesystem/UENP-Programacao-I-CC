#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        for(i = 2; i <= numero / 2; i++) {
            if(numero % i == 0) {
                ehPrimo = 0; // Achou um divisor além de 1 e ele mesmo
                break;
            }
        }
    }

    if(ehPrimo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
