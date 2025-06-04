#include <stdio.h>

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int contarValor(int vetor[], int valor, int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho-1; i++) {
        if(vetor[i] == valor) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int vetorX[10];
    preencherVetor(vetorX, 10);
    int retorno = contarValor(vetorX, vetorX[9], 10);
    printf("O valor %d aparece %d vezes no vetor.\n", vetorX[9], retorno);
}