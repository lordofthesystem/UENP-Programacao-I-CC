#include <stdio.h>

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void buscarValor(int vetor[], int valor1, int valor2, int tamanho) {
    for (int i = 0; i < tamanho-1; i++) {
        if(vetor[i] > valor1 && vetor[i] < valor2) {
            printf("Valor %d encontrado.\n", vetor[i], i);
        }
    }
    return;
}


int main() {
    char continuar='S';
    while(continuar=='S'){
        int vetor[10];
        preencherVetor(vetor, 10);
        buscarValor(vetor, 15, 45, 10);
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    }
    
}