#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
//11) Solicitar uma palavra (4 a 15 caracteres) e apresentar o código ASCII de cada
//caractere;
    setlocale(LC_ALL, "Portuguese");
    char pala[40];
    int x;
    do{
        printf("Digite uma palavra(4-15):");
        setbuf(stdin, 0);
        fgets(pala, 40, stdin);
    }while(strlen(pala)<5 || strlen(pala)>16);

    for(x=0; x<strlen(pala)-1; x++){
        printf("%c: %d\n", pala[x], (int) pala[x]);
    }
    printf("\n");

    system("pause");
    return 0;
}