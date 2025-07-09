#include <stdio.h>

void preencher_1coluna(int tabuada[10][3], int numero) {
    for(int i=0; i<10; i++){
        tabuada[i][0]=numero;
    }
}
void preencher_2coluna(int tabuada[10][3], int numero) {
    for(int i=0; i<10; i++){
        tabuada[i][1]=i+1;
    }
}
void preencher_multiplicao(int tabuada[10][3]) {
    for(int i=0; i<10; i++){
        tabuada[i][2]=tabuada[i][0]*tabuada[i][1];
    }
}


int main() {

    int tabuada[10][3];
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    preencher_1coluna(tabuada, numero);
    preencher_2coluna(tabuada, numero);
    preencher_multiplicao(tabuada);





    return 0;
}