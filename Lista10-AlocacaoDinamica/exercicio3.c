#include <stdio.h>
#include <stdlib.h>

main()
{
    int *vetorProducaoDiaria = NULL;
    int *vetorProjecao = NULL;
    int vlrProducaoDiara;
    int i,tamanhoVetor=0;

    do{
        printf("Digite o valor da produção diária: ");
        scanf("%d", &vlrProducaoDiara);
        getchar();
        if(vlrProducaoDiara!=0){
            vetorProducaoDiaria = (int*) realloc(vetorProducaoDiaria,sizeof(int)*tamanhoVetor+1);
            vetorProducaoDiaria[tamanhoVetor]=vlrProducaoDiara;
            tamanhoVetor++;
        }
    }while(vlrProducaoDiara!=0);

    for(int i=0; i<tamanhoVetor; i++){
        printf("%d\n",vetorProducaoDiaria[i]);
    }

    vetorProjecao = (int*) malloc(sizeof(int)*tamanhoVetor);
    for(i=0; i<tamanhoVetor; i++){
        vetorProjecao[i]=vetorProducaoDiaria[i]*2;
    }
    for(i=0; i<tamanhoVetor; i++){
        printf("%d\n",vetorProjecao[i]);
    }
}