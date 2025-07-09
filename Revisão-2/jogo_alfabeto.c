#include <stdio.h>


int main() {
    char alfabeto_correto[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    char alfabeto_jogador[26];     
    char letra_digitada;
    int i;

    printf("--- Jogo do Alfabeto ---\n");
    printf("Digite as letras do alfabeto em ordem correta (de A a Z).\n\n");

    for (i = 0; i < 26; i++) {
        printf("Digite a %dª letra: ", i + 1);
        scanf(" %c", &letra_digitada);
        if (letra_digitada == alfabeto_correto[i]) {
            alfabeto_jogador[i] = letra_digitada;
        } else {
            printf("===== Game Over =====\n");
            return 1;
        }
    }

    printf("\nParabéns! Você completou o alfabeto corretamente!\n");

    return 0;
}