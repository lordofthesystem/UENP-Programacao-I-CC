#include <stdio.h>
#include <stdlib.h> // Para system()
#include <string.h>


void limpar_tela() {
    // Comando para limpar a tela (funciona em Windows e Linux/macOS)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
    char palavra_secreta[20];
    char palavra_jogador[20];
    int erros=0;
    int acertos=0;
    char letra;
    printf("Digite a palavra secreta:");
    fgets(palavra_secreta,20,stdin);
    palavra_secreta[strcspn(palavra_secreta, "\n")] = '\0';

    limpar_tela();
    int tam_palavra_secreta=strlen(palavra_secreta);
    for(int i=0;i<tam_palavra_secreta;i++){
        palavra_jogador[i]='_';
        palavra_jogador[i+1]='\0';
    }
    printf(" %s \n",palavra_jogador);
    while(erros<6 && acertos<tam_palavra_secreta){
        printf("Dgite a próxima letra:");
        scanf(" %c", &letra);
        int achou=0;
        for(int i=0;i<tam_palavra_secreta;i++){
            if(letra==palavra_secreta[i]){
                palavra_jogador[i]=letra;
                acertos++;
                achou=1;
            }
        }
        if(achou == 0){
            erros++;
        }
        printf("%s",palavra_jogador);
    }

}