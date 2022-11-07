#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1,nb2,choix_methode;
    char choix;

    printf("Donner le premier entier \n");
    scanf("%d",&nb1);
    printf("Donner le deuxieme entier \n");
    scanf("%d",&nb2);
    printf("Donner votre choix de l'operation a effectuer sur %d et %d \n",nb1,nb2);
    printf("Pour l'addition tapez + ou a ou A \n");
    printf("Pour la soustraction tapez - ou s ou S \n");
    printf("Pour la multiplication tapez * ou m ou M \n");
    printf("Pour la division tapez / ou d ou D \n");
    printf("\n");
    printf("Donner votre choix de l'operation arithmetique \n");
    scanf("%s",&choix);
    printf("Choisir la methode de travail \n");
    printf("Pour la methode de choix conditionnel If...else taper 1 \n");
    printf("Pour la methode de choix conditionnel switch case taper 2 \n");
    scanf("%d",&choix_methode);
        if(choix_methode == 1){
        if(choix == '+' || choix == 'a' || choix == 'A'){
            printf("%d + %d = %d ",nb1,nb2,nb1+nb2);
        }else{
            if(choix == '-' || choix == 's' || choix == 'S'){
                printf("%d - %d = %d ",nb1,nb2,nb1-nb2);
            }else{
                if(choix == '*' || choix == 'm' || choix == 'M'){
                    printf("%d * %d = %d ",nb1,nb2,nb1*nb2);
                }else{
                    if(choix == '/' || choix == 'd' || choix == 'D'){
                        printf("%d / %d = %.2f ",nb1,nb2,(float)nb1/nb2);
                    }else{
                        printf("Error... merci de verifier le choix de l'operation arithmetique \n");
                    }
                }
            }

        }

    }else{
        if(choix_methode == 2){
             switch(choix){
                case 'a':
                    printf("%d + %d = %d ",nb1,nb2,nb1+nb2);
                    break;
                case '+':
                    printf("%d + %d = %d ",nb1,nb2,nb1+nb2);
                    break;
                case 'A':
                    printf("%d + %d = %d ",nb1,nb2,nb1+nb2);
                    break;
                case '-':
                    printf("%d - %d = %d ",nb1,nb2,nb1-nb2);
                    break;
                case 's':
                    printf("%d - %d = %d ",nb1,nb2,nb1-nb2);
                    break;
                case 'S':
                    printf("%d - %d = %d ",nb1,nb2,nb1-nb2);
                    break;
                case '*':
                    printf("%d * %d = %d ",nb1,nb2,nb1*nb2);
                    break;
                case 'm':
                    printf("%d * %d = %d ",nb1,nb2,nb1*nb2);
                    break;
                case 'M':
                    printf("%d * %d = %d ",nb1,nb2,nb1*nb2);
                    break;
                case '/':
                    printf("%d / %d = %.2f ",nb1,nb2,(float)nb1/nb2);
                    break;
                case 'd':
                    printf("%d / %d = %.2f ",nb1,nb2,(float)nb1/nb2);
                    break;
                case 'D':
                    printf("%d / %d = %.2f ",nb1,nb2,(float)nb1/nb2);
                    break;
                default:
                    printf("Error... merci de verifier le choix de l'operation arithmetique \n");

                }
        }else
            printf("Error... merci de verifier le choix de la methode de travail \n");
    }
    return 0;
}
