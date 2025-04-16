#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Entrada dos números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    // Lógica com até 4 ifs para ordenar
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    // Saída dos números em ordem crescente
    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
