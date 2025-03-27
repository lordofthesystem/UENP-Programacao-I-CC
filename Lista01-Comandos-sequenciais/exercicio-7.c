#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float peso1, peso2, peso3, peso4;
    float media_ponderada;
    
    // Entrada das notas e pesos
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    printf("Digite o peso da quarta nota: ");
    scanf("%f", &peso4);
    
    // Cálculo da média ponderada
    media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3 + peso4);
    
    // Exibição do resultado
    printf("\nA média ponderada das notas é: %.2f\n", media_ponderada);
    
    return 0;
}
