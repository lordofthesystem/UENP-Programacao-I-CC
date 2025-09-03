#include <stdio.h>
#include <string.h>

#define MAX_VIDEOS 50

struct video {
    char titulo[100];
    int visualizacoes;
};

void cadastrar(struct video videos[], int pos_atual){
    printf("Digite o título: ");
    fgets(videos[pos_atual].titulo, 100, stdin);
    printf("Digite o visualizações: ");
    scanf("%d", &videos[pos_atual].visualizacoes);
}

void video_maior_visualizacoes(struct video videos[], int pos_atual){
    int qt_visualizacoes=0;
    int pos_video=0;
    for(int i=0; i<pos_atual; i++){
        if(videos[i].visualizacoes>qt_visualizacoes){
            qt_visualizacoes=videos[i].visualizacoes;
            pos_video=i;
        }
    }
    printf("O vídeo com maior número de visualizações é: %s", videos[pos_video].titulo);
}

void total_visualizacoes(struct video videos[], int pos_atual){
    int qt_visualizacoes=0;
    for(int i=0; i<pos_atual; i++){
            qt_visualizacoes+=videos[i].visualizacoes;
    }
    printf("O total de visualizações é: %d", qt_visualizacoes);
}

void ordenar_popularidade(struct video videos[], int pos_atual){
    struct video aux;
    for(int i=0; i<pos_atual; i++){
        for(int j=i+1; j<pos_atual; j++){
            if(videos[i].visualizacoes<videos[j].visualizacoes){
                aux=videos[i];
                videos[i]=videos[j];
                videos[j]=aux;
            }
        }
    }
    for(int i=0; i<pos_atual; i++){
        printf("Título: %s", videos[i].titulo);
        printf("Visualizações: %d\n", videos[i].visualizacoes);
        printf("\n");
    }

}

int main() {
    struct video videos[MAX_VIDEOS];
    int opcao;
    int pos_atual=0;

    do{
        printf("---- Menu ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Exibir o vídeo com o maior número de visualiações.\n");
        printf("3 - Mostrar o total de visualizacoes da plataforma.\n");
        printf("4 - Ordenar os videos em ordem crescente de popularidade (ranking).\n");
        printf("Escolha uma opção ou 5 para sair\n\n");
        scanf("%d", &opcao);
        getchar(); // limpar o enter

        switch(opcao){
            case 1:
                /////Cadastrar (passo vetor e a pos_atual=posicao)
                cadastrar(videos, pos_atual);
                pos_atual++;   
                break;
            case 2:
                ///
                video_maior_visualizacoes(videos, pos_atual);
                break;
            case 3:
                //
                total_visualizacoes(videos, pos_atual);
                break;
            case 4:
                //
                ordenar_popularidade(videos, pos_atual);
                break;
            case 5:
                //
                break;                                
            default:
                printf("Opção inválida");
                break;
        }

    }while(opcao!=5);
    
}