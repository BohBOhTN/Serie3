#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee;
    printf("Donner une annee \n");
    scanf("%d",&annee);
    if(annee % 4 == 0){
        printf("L'annee %d est bissextile \n",annee);
    }else{
        printf("L'annee %d n'est pas bissextile \n",annee);
    }
    return 0;
}
