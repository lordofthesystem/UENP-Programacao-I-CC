#include <stdio.h>

int main() {
    int valor, cafes, perda;
    
    // Entrada do valor inserido
    printf("Digite o valor colocado na máquina (múltiplo de 5): ");
    scanf("%d", &valor);
    
    // Cálculo da quantidade de cafés e da perda no troco
    cafes = valor / 7;
    perda = valor - (cafes * 7);
    // Que tal usar o % ???
    
    // Exibição do resultado
    printf("\nO cliente receberá %d cafés e perderá R$ %d no troco.\n", cafes, perda);
    
    return 0;
}
