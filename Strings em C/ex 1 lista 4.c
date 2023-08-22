#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//1) Solicitar uma palavra e apresentar a quantidade de caracteres na mesma;
    char pala[40];
    int qtd;
    printf("Digite uma palavra:");
    scanf("%s", &pala);
    qtd=strlen(pala);
    printf("\nQuantidade de caracteres:%d\n\n", qtd);

    system("pause");
    return 0;    
}