#include <stdio.h>

int main() {
    int a, b, c, menor;

    // Entrada dos três números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    // Inicializa o menor como o primeiro número
    menor = a;

    // Compara com os outros
    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    // Mostra o menor número
    printf("O menor número é: %d\n", menor);

    return 0;
}
