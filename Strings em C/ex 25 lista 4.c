#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//25) Solicite uma string e informe ao usuário trata-se ou n?o de palíndromo.
    char pala[40], pala2[40]="";
    int y=0;
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala, 40, stdin);
    pala[strcspn(pala, "\n")] = '\0';
    for (int x=strlen(pala)-1; x>-1; x--)
    {
        pala2[y]=pala[x];
        y++;
    }   
    if(strcmp(pala, pala2)==0){
        printf("\nA palavra É um palíndromo\n");
    }else{
        printf("\nA palavra N?O um palíndromo\n");
    }

    system("pause");
    return 0;
}