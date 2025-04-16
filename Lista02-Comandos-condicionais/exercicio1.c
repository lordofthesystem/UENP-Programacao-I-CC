#include <stdio.h>

int main() {
    float num1, num2, num3, media;
    int acima_da_media = 0;

    // Entrada dos três números
    printf("Digite três números positivos:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calcula a média
    media = (num1 + num2 + num3) / 3.0;

    // Verifica quantos estão acima da média
    if (num1 > media) acima_da_media++;
    if (num2 > media) acima_da_media++;
    if (num3 > media) acima_da_media++;

    // Exibe o resultado
    printf("Quantidade de números acima da média: %d\n", acima_da_media);

    return 0;
}
