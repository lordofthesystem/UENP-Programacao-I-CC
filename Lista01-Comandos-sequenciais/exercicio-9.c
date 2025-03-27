#include <stdio.h>

int main() {
    float tamanhoArquivo, velocidadeInternet, tempo;
    
    // Entrada dos dados
    printf("Digite o tamanho do arquivo (em MB): ");
    scanf("%f", &tamanhoArquivo);
    printf("Digite a velocidade da internet (em Mbps): ");
    scanf("%f", &velocidadeInternet);
    
    // Cálculo do tempo de download
    tempo = (tamanhoArquivo / velocidadeInternet) * 8;
    
    // Exibição do resultado
    printf("\nO tempo estimado de download é %.2f segundos.\n", tempo);
    
    return 0;
}
