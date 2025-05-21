#include <stdio.h>

int somaSequencia(int n) {
    int i=1, soma=0;
    while(i<=n){
        soma=soma+i;
    }
    return soma;
}
int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    int resultado = somaSequencia(n);
    printf("A soma dos números de 1 a %d é: %d\n", n, resultado);
    return 0;
}