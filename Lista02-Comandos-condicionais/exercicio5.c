#include <stdio.h>

int main() {
    float x, y, resultado;
    int opcao;

    // Entrada dos números
    printf("Digite dois números (x e y): ");
    scanf("%f %f", &x, &y);

    // Menu de opções
    printf("\nEscolha a operação:\n");
    printf("1 - Média aritmética entre x e y\n");
    printf("2 - Diferença do maior pelo menor número\n");
    printf("3 - Produto entre x e y\n");
    printf("4 - Divisão entre x e y\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Verifica e executa a opção
    switch (opcao) {
        case 1:
            resultado = (x + y) / 2;
            printf("Média aritmética: %.2f\n", resultado);
            break;
        case 2:
            resultado = (x > y) ? (x - y) : (y - x);
            printf("Diferença do maior pelo menor: %.2f\n", resultado);
            break;
        case 3:
            resultado = x * y;
            printf("Produto: %.2f\n", resultado);
            break;
        case 4:
            if (y != 0) {
                resultado = x / y;
                printf("Divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Erro: Opção inválida!\n");
            break;
    }

    return 0;
}
