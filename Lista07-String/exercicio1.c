#include <stdio.h>
#include <string.h>

int conta_ocorrencias(char str[], char c) {
    int i, cont = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            cont++;
        }
    }
    return cont;
}

int main() {
    char str[100], caractere;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int total = conta_ocorrencias(str, caractere);
    printf("O caractere '%c' aparece %d vez(es) na string.\n", caractere, total);

    return 0;
}