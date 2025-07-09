#include <stdio.h>
#include <string.h>
#define MAX 200

void criptografa(char str[]) {
    char invertidas[] = "zyxwvutsrqponmlkjihgfedcba";
    char invertidasM[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";  
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            //Minusculo
            int j = str[i] - 'a';
            str[i] = invertidas[j];
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')        {
            //Maiusculo
            int j = str[i] - 'A';
            str[i] = invertidasM[j];
        }
    }
    printf("Frase criptografada: %s\n", str);
}

int main() {
    char frase[MAX];
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    criptografa(frase);
    printf("Frase criptografada: %s\n", frase);

    return 0;
}

