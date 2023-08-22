#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//29) Solicite ao usuário duas palavras e concatene-as em uma terceira variável,
//alternando entre os caracteres da primeira e da segunda palavra. (ex: ANA /
//CLAUDIO = ACNLAAUDIO);
    char pala1[40], pala2[40], pala3[80]="";
    printf("Digite a primeira palavra:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    printf("\nDigite asegunda palavra:");
    fgets(pala2, 40, stdin);
    for(int x=0; x<strlen(pala1)+strlen(pala2)-1; x++){
        strncat(pala3[x], pala1[x], 1);
        strncat(pala3[x]+1, pala2[x]+1, 1);
    }
    printf("\n%s\n", pala3);

    system("pause");
    return 0;
}