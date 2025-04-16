#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    // Entrada dos coeficientes
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Verificação se é uma equação de segundo grau
    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
    } else {
        delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("Não existem raízes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2*a);
            printf("A equação possui uma raiz real: x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}