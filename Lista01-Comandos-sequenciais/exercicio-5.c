#include <stdio.h>

int main() {
    float preco_original, desconto, preco_final;
    
    // Entrada do preço original e percentual de desconto
    printf("Digite o preço original do produto: ");
    scanf("%f", &preco_original);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    
    // Cálculo do preço final
    preco_final = preco_original * (1 - desconto / 100);
    
    // Exibição do resultado
    printf("\nO preço final a ser pago é R$ %.2f\n", preco_final);
    
    return 0;
}