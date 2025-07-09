#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LETRAS 20

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    char palavra_secreta[MAX_LETRAS + 1]; // +1 para o caractere nulo
    char palavra_jogador[MAX_LETRAS + 1];
    int tamanho_palavra;
    int letras_corretas;

    printf("Digite a palavra secreta (max. %d letras): ", MAX_LETRAS);
    scanf("%s", palavra_secreta);
    tamanho_palavra = strlen(palavra_secreta);
    limpar_tela();

    printf("A palavra secreta tem %d letras. Tente adivinhar!\n", tamanho_palavra);

    do {
        printf("Digite a palavra: ");
        scanf("%s", palavra_jogador);

        letras_corretas = 0;
        for (int i = 0; i < palavra_jogador; i++) {
            if (palavra_jogador[i] == palavra_secreta[i]) {
                letras_corretas++;
            }
        }

        if (letras_corretas == tamanho_palavra) {
            printf("Parabéns! Você acertou a palavra secreta.\n");
            break; 
        } else {
            printf("Você acertou %d letras na posição correta. Continue tentando.\n", letras_corretas);
        }
    } while (1); 

    return 0;
}
