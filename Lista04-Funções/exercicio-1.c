#include <stdio.h>
// Fómurla IMC = peso/(altura * altura)

float calcularIMC(float peso, float altura) {
    float imc;
    imc = peso / (altura * altura);
    return imc;
}

int main() {
    float peso, altura;
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    float imc = calcularIMC(peso, altura);
    printf("Seu IMC é: %.2f\n", imc);
}