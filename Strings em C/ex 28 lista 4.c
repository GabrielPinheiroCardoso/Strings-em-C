#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//28) Com base ao exercício anterior, apresente o alfabeto (minúsculo) em ordem
//decrescente.
    for(int x=122; x>96; x--){
        printf("%c", x);
    }
    printf("\n");
    
    system("pause");
    return 0;
}