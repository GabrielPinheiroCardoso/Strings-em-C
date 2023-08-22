#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//3) Solicitar uma palavra, copiar e apresentar apenas 3 caracteres a partir do segundo
//caractere;
    char pala1[40], pala2[4]; 
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    strncpy(pala2, pala1+2, 3);
    printf("\n%.3s\n", pala2);

    system("pause");
    return 0;
}