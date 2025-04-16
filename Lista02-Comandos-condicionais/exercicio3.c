#include <stdio.h>

int main() {
    char letra;

    // Entrada do caractere
    printf("Digite um caractere: ");
    scanf(" %c", &letra); // espaço antes do %c para ignorar espaços em branco


    // Pode usar o #include <ctype.h> // para tolower()
    // char minuscula = tolower(letra);
    
    // Verifica se é vogal (maiúscula ou minúscula)
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("É uma vogal.\n");
    } else {
        printf("Não é uma vogal.\n");
    }

    return 0;
}
