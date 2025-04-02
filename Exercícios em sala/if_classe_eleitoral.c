//Ex.: Ler a idade da pessoa e informar sua classe eleitoral
#include <stdio.h>

    int main() {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    //Tem como melhorar esse if? Talvez uma outra sequência de if?
    if ( (idade >=16 && idade <18) || (idade>65) ){
        printf("Eleitor facultativo\n");
    }
    if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatório\n");
    }
    else{
        printf("Não eleitor\n");
    }
    return 0;
}