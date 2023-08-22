#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//2) Solicite uma palavra e apresente os 4 primeiros caracteres;
    char pala1[40]; 
    printf("Digite uma palavra:");
    setbuf(stdin,0);
    fgets(pala1, 40, stdin);
    printf("\nOs 4 primeiros caracteres s?o:%.4s\n", pala1);

    system("pause");
    return 0;
}