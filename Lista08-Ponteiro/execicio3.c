#include <stdio.h>

int main() {
    char frase[] = "nao gosto de programar em C";
    char *p;
    p=frase;
    int contador=0;
    while(*p!='\0'){
        if(*p==' ')
            contador++;
        p++;
    }
    
    printf("Existem %i espacos em branco\n", contador);
    return 0;
}