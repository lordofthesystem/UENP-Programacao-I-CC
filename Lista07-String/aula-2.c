#include <stdio.h>
#include <string.h>
#define MAX 500

int main() {
    char frase [MAX];
    int i=0, count = 0;
    printf("Entre com uma string: ");
    fgets (frase, MAX, stdin);

    while (frase [i] != '\0') {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            count++;
        }
        i++;
    }

    // Remove o '\n' do final, se existir
    frase[strcspn(frase, "\n")] = '\0';
    printf("A frase: '%s' tem %d vogais\n", frase,count);

    return 0;
}