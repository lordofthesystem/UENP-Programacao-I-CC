#include <stdio.h>

int main() {
    int x, y, temp;
    
    // Entrada dos valores
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    // Permutação dos valores
    temp = x;
    x = y;
    y = temp;
    
    // Exibição dos valores permutados
    printf("\nDepois da permutação:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    return 0;
}