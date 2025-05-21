#include <stdio.h>

int verificaVogal(char letra){
    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' ||
       letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
        return 1; // É vogal
    }
    else
        return 0; // Não é vogal
    }

main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    int resultado = verificaVogal(letra);
    if(resultado){
        printf("A letra '%c' é uma vogal.\n", letra);
    } else {
        printf("A letra '%c' não é uma vogal.\n", letra);
    }

    return 0;
 }