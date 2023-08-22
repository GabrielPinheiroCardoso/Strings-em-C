#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//21) Solicite uma frase e informe ao usuário se a palavra “AMOR” está ou não na
//frase;
    char pala[100]; 
    printf("Digite uma frase:");
    setbuf(stdin, 0);
    fgets(pala, 100, stdin);   
    for(int x=0; x<strlen(pala); x++){
        if((pala[x]=='A')&&(pala[x+1]=='M')&&(pala[x+2]=='O')&&(pala[x+3]=='R')){
            printf("A palavra 'AMOR' se encontra dentro da frase.");
            system("pause");
            return 0;
        }else{
            printf("A palavra 'AMOR' não foi encontrada na frase.");
            system("pause");
            return 0;
        }
    }
}