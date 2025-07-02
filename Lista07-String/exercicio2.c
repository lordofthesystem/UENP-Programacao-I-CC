#include <stdio.h>
#include <string.h>

void mostra_ocorrencias(char str[], char c) {
    int i, encontrou = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    char str[100], caractere;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Posições do caractere '%c': ", caractere);
    mostra_ocorrencias(str, caractere);

    return 0;
}