#include <stdio.h>
#include <stdlib.h>

void gastoTotal(float IDs[]){
    int gasto=0;
    for(int i=0; i<7; i++){
        gasto+=IDs[i];
    }
    printf("Gasto total: %d\n", gasto);
}

void maiorGasto(float IDs[]){
    int maior=0;
    for(int i=0; i<7; i++){
        if(IDs[i]>maior){
            maior=IDs[i];
        }
    }
    printf("Maior gasto da semana: %d\n", maior);

}

int main() {
    float *IDs = NULL;
    IDs = (float*) malloc(sizeof(float)*7);

    for(int i=0; i<7; i++){
    printf("Digite o valor do %dº dia: ",i+1);
    scanf("%f", &IDs[i]);
    getchar();
   }

    gastoTotal(IDs);
    maiorGasto(IDs);

   
}
