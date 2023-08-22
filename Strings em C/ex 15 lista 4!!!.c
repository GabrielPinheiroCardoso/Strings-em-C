#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//15) Solicite duas palavras e apresente se elas fazem parte de um ANAGRAMA
    char pala1[40], pala2[40], aux[40]; 
    printf("Digite a palavra 1:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    strcpy(aux, pala1);
    printf("Digite a palavra 2:");
    fgets(pala2, 40, stdin);
    for(int x=0; x<strlen(pala1); x++){
        for(int y=0; y<strlen(pala1); y++){
            if((int)pala1[x]<(int)aux[y]){
                aux[y]=pala1[x];
                break;
            }
        }
    }


    system("pause");
    return 0;
}