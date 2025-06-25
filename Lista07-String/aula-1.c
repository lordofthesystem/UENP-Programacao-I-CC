#include <stdio.h>

int main(){
    char frase[20];

    printf("Digite uma frase: ");
    gets(frase);

    printf("%s\n", frase);
    return 0;
}