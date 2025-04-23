#include <stdio.h>

int main() {
    int x, y, menor, maior;

    printf("Digite dois números inteiros (x e y): ");
    scanf("%d %d", &x, &y);

    // Definindo ordem crescente
    if(x < y) {
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }

    printf("Números entre %d e %d com resto 2 ou 3 ao dividir por 5:\n", menor, maior);

    for(int i = menor + 1; i < maior; i++) {
        int resto = i % 5;
        if(resto == 2 || resto == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
