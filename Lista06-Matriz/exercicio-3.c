#include <stdio.h>

//Faca um programa que receba uma matriz de inteiros de ordem 5 x 3 e verifique quais os
//elementos da matriz s ̃ao m ultiplos de 3, armazenando esses elementos em um vetor. Depois,
//exiba esses elementos.

void preencherMatriz(int matriz[5][3]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
}

void verificarMultiplosde3(int matriz[5][3], int vetor[15]){
    int x = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] % 3 == 0){
                vetor[x]=matriz[i][j];
                x++;
            }
        }
    }

}

int main(){
    int vetor[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int matriz[5][3];
    preencherMatriz(matriz);
    verificarMultiplosde3(matriz, vetor);
    for(int i = 0; i < 15; i++){
        if(vetor[i] == 0){
            break;
        }
        printf("%d\n", vetor[i]);
    }
    

    return 0;
}