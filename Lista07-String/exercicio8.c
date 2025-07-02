#include <stdio.h>
#include <string.h>
#define MAX 200

void conta_m_m(char frase[]) {
    int contMa=0, contMi=0, contDi=0;
    for(int i=0;frase[i]!='\0';i++){
        if(frase[i]!='\n')
            contDi++;
        if(frase[i]>='a' && frase[i]<='z'){
            contMi++;
        }
        else if(frase[i]>='A' && frase[i]<='Z'){
            contMa++;
        }
    }
    printf("%d Maiusculos, %d Minusculos e %d Digitos\n", contMa, contMi, contDi);
}

int main() {
    char frase[MAX];
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    conta_m_m(frase);

    return 0;
}