#include <stdio.h>

int main() {
    int numero, i, contador = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Divisores de %d:\n", numero);
    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            printf("%d\n", i);
            contador++;
        }
    }

    printf("Quantidade de divisores: %d\n", contador);

    return 0;
}
