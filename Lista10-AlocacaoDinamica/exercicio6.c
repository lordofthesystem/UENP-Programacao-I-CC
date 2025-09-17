#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


int main() {
    int **estacionamento;
    int l,c;
    int contador0, contador1, contador2;
    contador0=0;
    contador1=0;
    contador2=0;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    estacionamento = (int**) malloc(sizeof(int*)*l);
    for(int i=0;i<l;i++){
        estacionamento[i] = (int*) malloc(sizeof(int)*c);
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<l;j++){
            estacionamento[i][j]=rand() % 3;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<l;j++){
            printf("%d ",estacionamento[i][j]);
            if(estacionamento[i][j]==0){
                contador0++;
            }
            else if(estacionamento[i][j]==1){
                contador1++;
            }
            else{
                contador2++;
            }
        }
        printf("\n");
    }
    printf("Lugares vazios: %d \n", contador0);
    printf("Lugares carros: %d \n", contador1);
    printf("Lugares caminhonete: %d \n", contador2 ); 


}