#include <stdio.h>

int main() {
    float distancia, consumo, litros;
    
    // Entrada dos valores
    printf("Digite a distância percorrida até a UENP (em km): ");
    scanf("%f", &distancia);
    printf("Digite o consumo médio do veículo (em km/l): ");
    scanf("%f", &consumo);
    
    // Cálculo do consumo de combustível
    litros = distancia / consumo;
    
    // Exibição do resultado
    printf("\nSerão necessários %.2f litros de combustível para o trajeto.\n", litros);
    
    return 0;
}