#include <stdio.h>

int main() {
    int dias, semanas, dias_restantes;
    
    // Entrada da quantidade de dias
    printf("Digite a quantidade de dias que faltam para a prova de Programação I: ");
    scanf("%d", &dias);
    
    // Cálculo das semanas e dias restantes
    semanas = dias / 7;
    // Pq ele não mostra semanas com vírgula???
    dias_restantes = dias % 7;
    
    // Exibição do resultado
    printf("\nFaltam %d semanas e %d dias para a prova.\n", semanas, dias_restantes);
    
    return 0;
}
