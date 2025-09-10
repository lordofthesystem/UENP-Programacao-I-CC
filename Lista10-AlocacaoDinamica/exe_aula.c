#include <stdio.h>
#include <string.h>

struct dc{
    char nome[150];
    int forca;
    int velocidade;
    int inteligencia;
};

void cadastrar(struct dc **Personagens, int qt){
    if(qt == 0){
        *Personagens = (struct dc*) malloc(sizeof(struct dc));
    } else {
        *Personagens = (struct dc*) realloc(*Personagens, (qt + 1) * sizeof(struct dc));
    }

    printf("Digite o nome: ");
    fgets((*Personagens)[qt].nome, 150, stdin);
    printf("Digite a força: ");
    scanf("%d", &(*Personagens)[qt].forca);
    printf("Digite a velocidade: ");
    scanf("%d", &(*Personagens)[qt].velocidade);
    printf("Digite a inteligência: ");
    scanf("%d", &(*Personagens)[qt].inteligencia);
    getchar(); // limpar \n
}

void listar(struct dc Personagens[], int qt){
  for(int i=0; i<qt; i++){
    printf("Nome: %s", Personagens[i].nome);
    printf("Força: %d", Personagens[i].forca);
    printf("Velocidade: %d", Personagens[i].velocidade);
    printf("Inteligência: %d", Personagens[i].inteligencia);
    printf("\n");
  }
}

void maisForte(struct dc Personagens[], int qt){
  int forca=0;
  struct dc aux;
  for(int i=0; i<qt; i++){
    if(Personagens[i].forca>forca){
      forca=Personagens[i].forca;
      aux=Personagens[i];
    }
  }
  printf("Nome: %s", aux.nome);
  printf("Força: %d", aux.forca);
  printf("Velocidade: %d", aux.velocidade);
  printf("Inteligência: %d", aux.inteligencia);
  printf("\n");
}


int main() {
    struct dc *Personagens = NULL;
    int opcao;
    int qt=0;

    do{
        printf("---- Menu ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - + Forte\n");
        printf("4 - + Rápido\n");
        printf("5 - + Inteligente\n");
        printf("Escolha uma opção ou 6 para sair\n\n");
        scanf("%d", &opcao);
        getchar(); // limpar o enter

        switch(opcao){
            case 1:
                /////Cadastrar
                cadastrar(&Personagens, qt);
                qt++;   
                break;
            case 2:
                /// Listar
                listar(Personagens, qt);
                break;
            case 3:
                ///
                maisForte(Personagens, qt);
                break;
            default:
                printf("Opção inválida");
                break;
        }

    }while(opcao!=6);
    
    return 0;
}
