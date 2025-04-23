#include <stdio.h>

int main() {
    int totalCompetidores;
    float notas[5], soma, maior, menor, mediaFinal;

    printf("Digite o total de competidores: ");
    scanf("%d", &totalCompetidores);

    for(int i = 1; i <= totalCompetidores; i++) {
        printf("\nDigite as 5 notas do competidor %d:\n", i);
        
        for(int j = 0; j < 5; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[j]);
        }

        // Inicializa maior e menor
        maior = menor = notas[0];
        soma = notas[0];

        // Encontra maior, menor e soma total
        for(int j = 1; j < 5; j++) {
            soma += notas[j];
            if(notas[j] > maior)
                maior = notas[j];
            if(notas[j] < menor)
                menor = notas[j];
        }

        // Subtrai a maior e menor da soma
        mediaFinal = (soma - maior - menor) / 3.0;

        printf("Nota final do competidor %d: %.2f\n", i, mediaFinal);
    }

    return 0;
}
