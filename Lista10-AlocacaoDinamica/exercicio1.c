#include <stdio.h>
#include <stdlib.h>

void cadastrar(int **IDs, int paramQT){
    if(paramQT==0){
        *IDs = (int*) malloc(sizeof(int));
    } else {
        *IDs = (int*) realloc(*IDs, (paramQT + 1) * sizeof(int));
    }
    printf("Digite o ID: ");
    scanf("%d", &(*IDs)[paramQT]);
    getchar();
}

void listainverso(int IDs[], int paramQT){
    for(int i=paramQT-1; i>=0; i--){
        printf("%d\n", IDs[i]);
    }

}

int main() {
   int *IDs = NULL;
   int opcao;
   int qt=0;

   do{
    printf("---- Menu ----\n");
    printf("1 - Cadastrar\n");
    printf("2 - Lista Inversa\n");
    printf("3 - Sair\n\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    getchar();
    switch (opcao){
        case 1:
            //Cadastrar
            cadastrar(&IDs, qt);
            qt++;
            break;
        case 2:
            //Listar inverso
            listainverso(IDs, qt);
            break;
        case 3:
            printf("Até a próxima!");
            break;
        default:
            printf("Opção inválida");
            break;
    }
   }while (opcao!=3);

   
}
