#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado +: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado -: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado *: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado /: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Erro: Operador inválido.\n");
            break;
    }
    printf("Fim do programa.\n");
    return 0;
}