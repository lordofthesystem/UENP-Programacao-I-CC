#include <stdio.h>

void preencherMatriz(int matriz[5][3]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
}

void somarlinha(int matriz[5][3], int linha){
    int soma = 0;
    for(int j=0; j < 3; j++){
        soma+= matriz[linha][j];
        printf("%i ", matriz[linha][j]);
    }
    printf("%i \n", soma);
}

void somarlinhas(int matriz[5][3]){
    for(int i=0;i<5;i++){
        int soma = 0;
        for(int j=0;j<3;j++){
            printf("%i ", matriz[i][j]);
            soma+=matriz[i][j];
        }
        printf("%i ", soma);
        printf("\n");
    }
}

int main(){
    int linhas = 5, colunas = 3;
    int matriz[linhas][colunas];
    preencherMatriz(matriz);
    for(int i = 0; i < 5; i++){
        somarlinha(matriz,i);
    }

    somarlinhas(matriz);
    return 0;
}