#include <stdio.h>
#include <stdlib.h>

int main(){

    char choix;

    printf("Donner un alphabet,numero ou caractere special \n");
    scanf("%c",&choix);
    if((choix>='a' && choix<='z') || (choix>='A' && choix<='Z')){
        printf("vous avez entrer un alphabet \n");
    }else{
        if(choix>=0 && choix<=9){
            printf("vous avez entrer un numero \n");
        }else{
            printf("Vous avez entrer un charactere special \n");
        }

    }

}
