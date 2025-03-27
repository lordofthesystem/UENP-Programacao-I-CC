#include <stdio.h>

int main() {
    int codigo;
    float horas_trabalhadas, valor_hora, salario;
    
    // Entrada dos dados do funcionário
    printf("Digite o código do funcionário: ");
    scanf("%d", &codigo);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valor_hora);
    
    // Cálculo do salário
    salario = horas_trabalhadas * valor_hora;
    
    // Exibição do resultado
    printf("\nCódigo do funcionário: %d\n", codigo);
    printf("Salário: R$ %.2f\n", salario);
    
    return 0;
}
