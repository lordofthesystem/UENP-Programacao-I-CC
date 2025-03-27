#include <stdio.h>

int main() {
    // Declara as variáveis necessárias para o programa
    float nota1, nota2, nota3, nota4; // Armazenar as notas dos alunos
    float mediaFinal; // Armazenar a média final
    int resultado; // Armazenar valor 1 para aprovado e 0 para reprovado
  
    // Lê as notas via teclado
    printf("Digite as 04 notas: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    // Calcula a média final obtida e verifica se o aluno foi aprovado ou não
    mediaFinal = (nota1 + nota2 + nota3 + nota4) / 4;
    resultado = (mediaFinal >= 7);

    // Mostra na tela a média final calculada e se o aluno foi aprovado ou não
    printf("Média Final: %.2f\n", mediaFinal);
    printf("O aluno foi %s\n", resultado ? "Aprovado" : "Reprovado");

    return 0;
}