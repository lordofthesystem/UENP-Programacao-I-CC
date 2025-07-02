#include <stdio.h>
#include <string.h>

void trocar_numeros_asterisco(char str[]) {

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            str[i] = '*';
        }
    }
    printf("String modificada: %s\n", str);
    }

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    trocar_numeros_asterisco(str);

    return 0;
}