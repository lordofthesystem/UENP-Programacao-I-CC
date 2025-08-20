#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, x, contador = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &x);

    
    int *p;
    p = &matriz[0][0];

    for (i = 0; i < 16; i++) {
       if(*(p+i)==x){
        printf("Achou\n");
        contador++;
       }
    }

    printf("O numero %d aparece %d vezes na matriz.\n", x, contador);

    return 0;
}