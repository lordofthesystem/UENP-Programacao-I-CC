#include <stdio.h>
#include <string.h>

struct Agenda{
    char nome[150];
    char telefone[20];
    char email[50];
};

void cadastrar(struct Agenda agenda[], int pos_atual){
    printf("Digite o nome: ");
    fgets(agenda[pos_atual].nome, 150, stdin);
    printf("Digite o telefone: ");
    fgets(agenda[pos_atual].telefone, 20, stdin);
    printf("Digite o email: ");
    fgets(agenda[pos_atual].email, 50, stdin);
}

void buscar(struct Agenda agenda[], int pos_atual){
    char nome[150];
    char *resultado;
    printf("Digite o nome para buscar: ");
    gets(nome);

    for(int i=0; i<pos_atual; i++){
        resultado = strstr(agenda[i].nome, nome);
        if(resultado!=NULL){
            printf("Nome: %s", agenda[i].nome);
            printf("Telefone: %s", agenda[i].telefone);
            printf("Email: %s", agenda[i].email);
        }
    }

}

int main() {
    struct Agenda agenda[20];
    int opcao;
    int pos_atual=0;

    do{
        printf("---- Menu ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Buscar\n");
        printf("Escolha uma opção ou 3 para sair\n\n");
        scanf("%d", &opcao);
        getchar(); // limpar o enter

        switch(opcao){
            case 1:
                /////Cadastrar (passo vetor e a pos_atual=posicao)
                cadastrar(agenda, pos_atual);
                pos_atual++;   
                break;
            case 2:
                /// Buscar
                buscar(agenda, pos_atual);
                break;
            case 3:
                ///Sair
                break;
            default:
                printf("Opção inválida");
                break;
        }

    }while(opcao!=3);
    
    return 0;
}
