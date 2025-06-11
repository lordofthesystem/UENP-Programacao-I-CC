#include <stdio.h>

void preencherMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somarDiagonal(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma=0;
    for(int i=0; i<linhas; i++){
        soma+= matriz[i][i];
    }
    return soma;
}

int maiorMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    int maior = matriz[0][0];
    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }
    return maior;
}

int somarDiagonalSecundaria(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma = 0;
    for(int i = 0; i < linhas; i++) {
        soma += matriz[i][colunas - 1 - i];
    }
    return soma;
}
int main(){

    int linhas, colunas;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    int matriz[linhas][colunas];
    preencherMatriz(linhas, colunas, matriz);

    int resultado = somarDiagonal(linhas, colunas, matriz); 
    printf("A soma dos elementos da diagonal principal é: %d\n", resultado);
    
    int maior = maiorMatriz(linhas, colunas, matriz);
    printf("O maior elemento da matriz é: %d\n", maior);

    int soma = somarDiagonalSecundaria(linhas, colunas, matriz);
    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);

}

