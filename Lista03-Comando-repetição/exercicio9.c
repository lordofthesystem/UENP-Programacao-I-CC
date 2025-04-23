#include <stdio.h>

int main() {
    int codigo;
    float consumoMensal, novoPreco;
    char continuar;
    const float precoAtual = 3.77;

    do {
        printf("Digite o código do posto: ");
        scanf("%d", &codigo);

        printf("Digite o consumo mensal do posto (em litros): ");
        scanf("%f", &consumoMensal);

        if (consumoMensal <= 50000) {
            novoPreco = precoAtual * 1.27;
        } else {
            novoPreco = precoAtual * 1.18;
        }

        printf("Posto %d: novo preço do litro é R$%.2f\n", codigo, novoPreco);

        printf("Deseja cadastrar outro posto? (s/n): ");
        scanf(" %c", &continuar); // espaço antes do %c para ignorar o ENTER anterior

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
