#include <stdio.h>

int main() {
    float custo_aquisicao, valor_venda, lucro;
    
    // Entrada do custo de aquisição e valor de venda
    printf("Digite o custo de aquisição do produto: ");
    scanf("%f", &custo_aquisicao);
    printf("Digite o valor de venda do produto: ");
    scanf("%f", &valor_venda);
    
    // Cálculo do lucro
    lucro = valor_venda - custo_aquisicao;
    
    // Exibição do resultado
    printf("\nO lucro obtido pelo vendedor é R$ %.2f\n", lucro);
    
    return 0;
}