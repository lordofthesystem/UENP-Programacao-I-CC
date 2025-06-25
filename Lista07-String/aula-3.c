#include <stdio.h>
#include <string.h>
#define MAX 500

int main() {
    char frase [MAX];
    char fraseinvertida [MAX];
    int i=0;
    printf("Entre com uma string: ");
    fgets (frase, MAX, stdin);
    int j = strlen(frase)-2; // tamanho da frase menos o \n e \0
    while (i <= (strlen(frase)-2)) {
        fraseinvertida[j]=frase[i];
        i++;
        j--;
    }
    fraseinvertida[i]='\0';
    printf("A frase: '%s'", frase);
    printf("A frase Invertida: '%s'", fraseinvertida);

    return 0;
}