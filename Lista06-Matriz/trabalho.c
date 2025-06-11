#include <stdio.h>

void prencheMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void mostrarMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }   
}

void procuraeZera(int linhas, int colunas, int matriz[linhas][colunas], int valor){
    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if(matriz[i][j] == valor){
                matriz[i][j] = 0;
            }
        }
    }
}

int main(){
    int linhas = 5, colunas = 5;
    int matriz[linhas][colunas];
    prencheMatriz(linhas, colunas, matriz);
    mostrarMatriz(linhas, colunas, matriz);
    int valor;
    while(1){
        printf("Digite o valor a ser zerado: ");
        scanf("%d", &valor);
        procuraeZera(linhas, colunas, matriz, valor);
        mostrarMatriz(linhas, colunas, matriz);
    }
    return 0;

}