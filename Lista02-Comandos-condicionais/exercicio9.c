#include <stdio.h>
#include <string.h>

int main() {
    char jogo[20], companhia[20], horario[20];

    printf("=== Descubra seu perfil gamer! ===\n");

    // Pergunta 1
    printf("Você prefere jogar 'Valorant' ou 'Minecraft'? ");
    scanf("%s", jogo);

    // Pergunta 2
    printf("Você prefere jogar 'sozinho' ou 'com amigos'? ");
    scanf("%s", companhia);

    // Pergunta 3
    printf("Você prefere jogar 'de dia' ou 'à noite'? ");
    scanf("%s", horario);

    // Análise simples das respostas
    if (strcmp(jogo, "Valorant") == 0 && strcmp(companhia, "com") == 0 && strcmp(horario, "noite") == 0) {
        printf("Perfil: Gamer competitivo!\n");
    } else if (strcmp(jogo, "Minecraft") == 0 && strcmp(companhia, "sozinho") == 0) {
        printf("Perfil: Gamer criativo e casual!\n");
    } else {
        printf("Perfil: Gamer versátil!\n");
    }

    return 0;
}
