#include <stdio.h>

int main() {
    int qtdAlunos, i;
    float nota, somaNotas = 0.0;
    int aprovados = 0, exame = 0, reprovados = 0;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &qtdAlunos);

    for(i = 1; i <= qtdAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        somaNotas += nota;

        if(nota >= 6.0) {
            aprovados++;
        } else if(nota >= 4.0) {
            exame++;
        } else {
            reprovados++;
        }
    }

    float mediaTurma = somaNotas / qtdAlunos;
    float percentualExame = (exame * 100.0) / qtdAlunos;
    float percentualReprovados = (reprovados * 100.0) / qtdAlunos;

    printf("\nResultados:\n");
    printf("Número de alunos aprovados: %d\n", aprovados);
    printf("Média da turma: %.2f\n", mediaTurma);
    printf("Percentual de alunos em exame: %.2f%%\n", percentualExame);
    printf("Percentual de alunos reprovados: %.2f%%\n", percentualReprovados);

    return 0;
}
