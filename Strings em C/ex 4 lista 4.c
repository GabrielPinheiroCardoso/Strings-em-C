#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//4) Solicite uma palavra com no mínimo 5 caracteres e apresente apenas os 3 últimos;
    char pala1[40]; 
    int tam;
    printf("Digite uma palavra(min-5 letras):");
    setbuf(stdin, 0);
    do{
    fgets(pala1, 40, stdin);
    }while(strlen(pala1)<6);
    tam=strlen(pala1)-4;
    printf("\n%.3s\n", pala1+tam);

    system("pause");
    return 0;
}