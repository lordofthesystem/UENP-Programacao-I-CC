#include <stdio.h>

void preencherMatriculas(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a matrícula do aluno %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void mostraAlunosProgIProgII(int progI[], int progII[], int tamanho) {
    int valorMatricula1, valorMatricula2;
    for (int i=0;i<tamanho;i++){
        valorMatricula1= progI[i];
        for(int j=0;j<tamanho;j++){
            valorMatricula2= progII[j];
            if (valorMatricula1==valorMatricula2){
                printf("Aluno com matrícula %d está matriculado em Programação I e Programação II.\n", valorMatricula1);
            }
        }
    }

}
int main() {
    int progI[10];
    int progII[10];

    printf("Preenchendo as matrículas da turma de Programação I:\n");
    preencherMatriculas(progI, 10);

    printf("\nPreenchendo as matrículas da turma de Programação II:\n");
    preencherMatriculas(progII, 10);

    mostraAlunosProgIProgII(progI, progII, 10);

}