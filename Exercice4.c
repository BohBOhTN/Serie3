#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moy;
    printf("Donner la moyenne de l'etudiant \n");
    scanf("%f",&moy);
    if(moy>=10 && moy<12){
        printf("Montion passable \n");
    }else{
        if(moy>=12 && moy<14){
            printf("Montion assez bien \n");
        }else{
            if(moy>=14 && moy<16){
                printf("Montion bien \n");
            }else{
                if(moy>16 && moy < 20 ){
                    printf("Montion Tres Bien ");
                }else{
                    if(moy>20 || moy < 0){
                        printf("Error !! Donner un moyenne valide \n");
                    }else{
                        printf("L'etudiant a rater l'annee \n");
                    }

                }
            }
        }
    }
    return 0;
}
