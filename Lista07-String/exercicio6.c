#include <stdio.h>
#include <string.h>
#define MAX 200

void verifica_iguais(char frase1[],char frase2[]) {
    if(strlen(frase1)!=strlen(frase2)){
        printf("As frases são diferentes\n");
        return;
    }
    if(strcmp(frase1,frase2)==0){
        printf("As frases são iguais\n");
    }
    else{
        printf("As frases são diferentes\n");
    }    
}

int main() {
    char frase1[MAX];
    char frase2[MAX];
    printf("Digite uma frase: ");
    fgets(frase1, MAX, stdin);

    
    printf("Digite uma frase: ");
    fgets(frase2, MAX, stdin);

    verifica_iguais(frase1, frase2);

    return 0;
}