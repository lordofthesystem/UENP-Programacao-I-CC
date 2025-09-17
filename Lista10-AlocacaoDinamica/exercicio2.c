#include <stdio.h>
#include <stdlib.h>

void cadastrar(int **IDs){
    *IDs = (float*) malloc(sizeof(float)*7);

    for(int i=0; i<7; i++){
    printf("Digite o valor do %dº dia: ",i+1);
    scanf("%f", &(*IDs)[i]);
    getchar();
   }
}

void gastoTotal(int IDs[]){
    int gasto=0;
    for(int i=0; i<7; i++){
        gasto+=IDs[i];
    }
    printf("Gasto total: %d\n", gasto);
}

void maiorGasto(int IDs[]){
    int maior=0;
    for(int i=0; i<7; i++){
        if(IDs[i]>maior){
            maior=IDs[i];
        }
    }
    printf("Maior gasto da semana: %d\n", maior);

}

int main() {
    int *IDs = NULL;

    cadastrar(&IDs);
    gastoTotal(IDs);
    maiorGasto(IDs);

   
}
