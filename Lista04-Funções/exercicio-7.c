#include <stdio.h>

int proximoEstado(int estadoAtual){
    if(estadoAtual==0){
        estadoAtual=2;
    }
    else {
        estadoAtual=estadoAtual-1;
    }
    return estadoAtual;
}

void mostrarCor(int estadoAtual){
    if(estadoAtual==0){
        printf("Vermelho\n");
    }
    else if (estadoAtual==1){
        printf("Amarelo\n");
    }   
    else {
        printf("Verde\n");
    }
}

int main()
{
    int estadoAtual;
    printf("Qual o estado atual?");
    scanf("%i",&estadoAtual);
    int novoEstado = proximoEstado(estadoAtual);
    printf("%i -> %i ", estadoAtual, novoEstado);
    mostrarCor(novoEstado);
    
}
