#include <stdio.h>
#include <stdlib.h> // Para system()
#include <string.h>

#define MAX_LETRAS 20
#define MAX_ERROS 6


void limpar_tela() {
    // Comando para limpar a tela (funciona em Windows e Linux/macOS)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void mostrar_status(char palavra[]) {
    printf("\nPalavra: ");
    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c ", palavra[i]);
    }
}

int main() {
    char palavra_secreta[MAX_LETRAS];
    char palavra_do_jogador[MAX_LETRAS];
    char letra;
    char acertos=0;
    int erros = 0;
    int letra_encontrada;
    int tamanho_palavra;
    int i;

    printf("--- Jogo da Forca ---\n");
    printf("Jogador, digite a palavra secreta (max %d letras, sem espacos): ", MAX_LETRAS);
    fgets(palavra_secreta, MAX_LETRAS, stdin);
    palavra_secreta[strcspn(palavra_secreta, "\n")] = '\0';
    tamanho_palavra = strlen(palavra_secreta);

    for (i = 0; i < tamanho_palavra-1; i++) {
        palavra_do_jogador[i] = '_';
    }
    palavra_do_jogador[i] = '\0';

    limpar_tela();

    while (erros != MAX_ERROS && acertos != tamanho_palavra) {
        mostrar_status(palavra_do_jogador);

        printf("\nJogador, digite uma letra: ");
        scanf(" %c", &letra);
        letra_encontrada=0;
        for (i = 0; i < tamanho_palavra; i++) {
            if (palavra_secreta[i] == letra) {
                palavra_do_jogador[i] = letra;
                letra_encontrada=1;
                acertos++;
            }
        }
        if (!letra_encontrada) {
            erros++;
            printf("Letra não encontrada");
        }

    }



    if (acertos == tamanho_palavra) {
        printf("\nParabens, voce venceu!\n");
    } else {
            printf("\nGame Over! A palavra secreta era: %s\n", palavra_secreta);
    }

    return 0;
}
