#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//17) Solicite um nome e apresente a quantidade de vogais da mesma;
    char pala[40]; 
    int v=0;
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala, 40, stdin);
    for(int x=0; x<strlen(pala); x++){
        if((pala[x]=='a')||(pala[x]=='e')||(pala[x]=='i')||(pala[x]=='o')||(pala[x]=='u')||(pala[x]=='A')||(pala[x]=='E')||(pala[x]=='I')||(pala[x]=='O')||(pala[x]=='U')){
            v++;
        }
    }
    printf("\nQuantidade de vogais igual a:%d\n", v);

    system("pause");
    return 0;
}