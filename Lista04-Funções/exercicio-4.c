#include <stdio.h>

void imprimirDecrescente(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d\n", n); 
    imprimirDecrescente(n - 1);
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    imprimirDecrescente(numero);

    return 0;
}
