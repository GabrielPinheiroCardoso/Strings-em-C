#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//19) Solicite um nome e apresente a quantidade de caracteres numéricos da mesma;
    char pala[40]; 
    int n=0;
    printf("Digite um nome:");
    setbuf(stdin, 0);
    fgets(pala, 40, stdin);
    for(int x=0; x<strlen(pala); x++){
        if((pala[x]=='0')||(pala[x]=='1')||(pala[x]=='2')||(pala[x]=='3')||(pala[x]=='4')||(pala[x]=='5')||(pala[x]=='6')||(pala[x]=='7')||(pala[x]=='8')||(pala[x]=='9')){
            n++;
        }
    }
    printf("\nQuantidade de caracteres numéricos igual a:%d\n", n);

    system("pause");
    return 0;
}