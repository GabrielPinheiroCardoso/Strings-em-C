#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
//13) Solicitar uma palavra (4 a 12 caracteres) e apresentar cada um dos caracteres
//adicionando o valor 20 ao código ASCII e também a posiç?o do caractere na
//palavra;
    setlocale(LC_ALL, "Portuguese");
    char pala[40];
    int x;
    do{
        printf("Digite uma palavra(3-20):");
        setbuf(stdin, 0);
        fgets(pala, 40, stdin);
    }while(strlen(pala)<5 || strlen(pala)>13);

    for(x=0; x<strlen(pala)-1; x++){
        printf("%c, posiç?o %d, valor: %d\n", pala[x], x+1, (int) pala[x]+20);
    }
    printf("\n");

    system("pause");
    return 0;
}