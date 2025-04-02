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

    if (operador == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operador == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operador == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operador == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else {
        printf("Erro: Operador inválido.\n");
    }

    return 0;
}