#include <stdio.h>

// Regras para um ano ser bissexto:
// Deve ser divisível por 4 e
// Não pode ser divisível por 100, 
//a menos que seja também divisível por 400.

int main() {
    int ano;
    int divisivelPor4, naoDivisivelPor100, divisivelPor400;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    divisivelPor4 = (ano % 4 == 0);
    naoDivisivelPor100 = (ano % 100 != 0);
    divisivelPor400 = (ano % 400 == 0);

    if ((divisivelPor4 && naoDivisivelPor100) || divisivelPor400) {
        printf("%d é um ano bissexto!\n", ano);
    }    
    else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}