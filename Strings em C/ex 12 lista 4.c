#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
//12) Solicitar uma palavra (3 a 20 caracteres) e apresentar cada um dos caracteres
//adicionando o valor 10 ao código ASCII;
    setlocale(LC_ALL, "Portuguese");
    char pala[40];
    int x;
    do{
        printf("Digite uma palavra(3-20):");
        setbuf(stdin, 0);
        fgets(pala, 40, stdin);
    }while(strlen(pala)<4 || strlen(pala)>21);

    for(x=0; x<strlen(pala)-1; x++){
        printf("%c: %d\n", pala[x], (int) pala[x]+10);
    }
    printf("\n");

    system("pause");
    return 0;
}