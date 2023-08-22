#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//18) Solicite um nome e apresente a quantidade de vogais (apenas maiúsculas) da mesma;
    char pala[40]; 
    int v=0;
    printf("Digite um nome:");
    setbuf(stdin, 0);
    fgets(pala, 40, stdin);
    for(int x=0; x<strlen(pala); x++){
        if((pala[x]=='A')||(pala[x]=='E')||(pala[x]=='I')||(pala[x]=='O')||(pala[x]=='U')){
            v++;
        }
    }
    printf("\nQuantidade de vogais igual a:%d\n", v);

    system("pause");
    return 0;
}