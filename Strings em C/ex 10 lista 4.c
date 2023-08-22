#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//10) Solicitar uma palavra (5 a 10 caracteres) e apresentar cada caractere alternando em
//MAIUSCULO e MINUSCULO cada um dos caracteres;
    char pala1[40]; 

    do{
    printf("Digite uma palavra(5-10):");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    }while(strlen(pala1)<6 || strlen(pala1)>11);

    for(int x=0; x<strlen(pala1); x++){
        if(x%2==0){
            pala1[x]=toupper(pala1[x]);
        }else{
            pala1[x]=tolower(pala1[x]);
        }
    }
    printf("\n%s\n", pala1);

    system("pause");
    return 0;
}