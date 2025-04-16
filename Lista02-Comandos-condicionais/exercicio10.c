#include <stdio.h>
#include <ctype.h> // para tolower()

int main() {
    char tipo;
    float litros, preco_litro, preco_total, desconto, preco_final;
    float percentual_desconto;

    // Entrada do tipo de combustível e quantidade de litros
    printf("Digite o tipo de combustível (e: etanol, g: gasolina): ");
    scanf(" %c", &tipo);
    tipo = tolower(tipo); // Aceita letra maiúscula ou minúscula

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    // Define preço por litro e percentual de desconto
    if (tipo == 'e') {
        preco_litro = 4.50;
        if (litros <= 20)
            percentual_desconto = 0.04;
        else
            percentual_desconto = 0.07;
    } else if (tipo == 'g') {
        preco_litro = 5.80;
        if (litros <= 20)
            percentual_desconto = 0.05;
        else
            percentual_desconto = 0.09;
    } else {
        printf("Tipo de combustível inválido!\n");
        return 1;
    }

    // Cálculo dos valores
    preco_total = litros * preco_litro;
    desconto = preco_total * percentual_desconto;
    preco_final = preco_total - desconto;

    // Exibe os resultados
    printf("\nPreço total sem desconto: R$ %.2f\n", preco_total);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Preço final a pagar: R$ %.2f\n", preco_final);

    return 0;
}
