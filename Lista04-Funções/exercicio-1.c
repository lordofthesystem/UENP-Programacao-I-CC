#include <stdio.h>
// Fómurla IMC = peso/(altura * altura)

float calcularIMC(float peso, float altura) {
    float imc;
    imc = peso / (altura * altura);
    return imc;
}

void classificacaoIMC(float imc) {
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
}

int main() {
    float peso, altura;
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    float imc = calcularIMC(peso, altura);
    printf("Seu IMC é: %.2f\n", imc);
    classificacaoIMC(imc);
}