#include <stdio.h>

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void buscarValor(int vetor[], int valor, int tamanho) {
    for (int i = 0; i < tamanho-1; i++) {
        if(vetor[i] == valor) {
            printf("Valor %d encontrado no índice %d.\n", valor, i);
        }
    }
    return;
}

int main() {
    int vetorX[10];
    preencherVetor(vetorX, 10);
    buscarValor(vetorX, vetorX[9], 10);
}