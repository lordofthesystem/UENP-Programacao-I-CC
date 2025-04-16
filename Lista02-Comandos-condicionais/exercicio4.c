#include <stdio.h>
#include <ctype.h> // para tolower()

int main() {
    char categoria;
    float percurso, consumo;

    // Entrada dos dados
    printf("Digite a categoria do carro (a, b ou c): ");
    scanf(" %c", &categoria);

    // Converte para minúsculo caso o usuário digite em maiúsculo
    categoria = tolower(categoria);

    printf("Digite o percurso em km: ");
    scanf("%f", &percurso);

    // Calcula o consumo com base na categoria
    if (categoria == 'a') {
        consumo = percurso / 15.0;
    } else if (categoria == 'b') {
        consumo = percurso / 12.0;
    } else if (categoria == 'c') {
        consumo = percurso / 10.0;
    } else {
        printf("Categoria inválida!\n");
        return 1; // encerra o programa com erro
    }

    // Exibe o resultado
    printf("Consumo estimado de combustível: %.2f litros\n", consumo);

    return 0;
}
