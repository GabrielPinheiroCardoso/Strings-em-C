#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//20) Solicite um nome completo (mínimo 13 caracteres) e apresente apenas o seu
//sobrenome;
    char pala[40]; 
    int x=0, y=0;
    do{
    printf("Digite um nome(min. 13c):");
    setbuf(stdin, 0);
    fgets(pala, 40, stdin);
    }while(strlen(pala)<14);
    for(x=0; x<strlen(pala); x++){
        if((int)pala[x]==32){
            for(y=y+1; y<strlen(pala); y++){
                printf("%c", pala[y]);
            }
            printf("\n");
            system("pause");
            return 0;
        }
        y++;
    }

    system("pause");
    return 0;
}