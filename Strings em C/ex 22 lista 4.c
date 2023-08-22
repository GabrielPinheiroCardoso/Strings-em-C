#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//22) Construa um algoritmo que apresente cada uma das vogais e seu respectivo código
//decimal ASCII correspondente (cada vogal será uma), tanto maiúsculo quanto
//minúsculo. Exemplo: A=65 a=97
    char vogmai[6]="AEIOU", vogmin[6]="aeiou";
    for(int x=0; x<strlen(vogmai); x++){
        printf("%c=%d %c=%d\n", vogmai[x], (int)vogmai[x], vogmin[x], (int)vogmin[x]);
    }

    system("pause");
    return 0;
}