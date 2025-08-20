#include <stdio.h>
#define MAX 255

int main() {
    char str[MAX], caractere;
    int count = 0;
    int pos;
    char *p;

    printf("Entre com a string: ");
    fgets(str, MAX, stdin);

    printf("Entre com o caractere: ");
    scanf(" %c", &caractere);
    
    p=str;
    pos=0;
    while(*p!='\0'){
        if(*p==caractere){
           printf("%d\n", pos);
           count++;
        }
        pos++;
        p++;
    }



    if (count == 0)
        printf("-1\n");

    return 0;
}
