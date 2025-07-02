#include <stdio.h>
#include <string.h>
#define MAX 200

void conta_e_mostra_palavras(char frase[]) {
    int i=0;
    int contador_palavras=1;
    while(frase[i]!='\0') { //Olá Mundo
        if(frase[i]==' ') {
            contador_palavras++;
            printf("\n");
        }
        else{
            printf("%c",frase[i]);
        }
        i++;
    }
    printf("A frase tem %d palavras\n", contador_palavras);

}

int main() {
    char frase[MAX];
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    conta_e_mostra_palavras(frase);

    return 0;
}