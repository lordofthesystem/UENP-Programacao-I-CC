#include <stdio.h>
#include <string.h>

int main(){

char linha[3];
char matriz[2][3];
matriz[0][0]='a';
matriz[0][1]='b';
matriz[0][2]='\0';
matriz[1][0]='c';
matriz[1][1]='d';
matriz[1][2]='\0';

strcpy(linha,matriz[0]);
printf("%s",linha);
strcmp(linha,matriz[0]);

fgets(matriz[0],3,stdin);
printf("%s",matriz[0]);
printf("%s",matriz[1]);
}