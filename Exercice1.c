#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Donner a \n");
    scanf("%d",&a);
    printf("Donner b \n");
    scanf("%d",&b);
    printf("Donner c \n");
    scanf("%d",&c);
    if(a>b && a>c){
        if(b>c){
            printf("Le plus grand nombre est %d \n",(a*100) + (b*10) + c);
            printf("Le plus petit nombre est %d \n",(c*100) + (b*10) + a);
        }else{
            printf("Le plus grand nombre est %d \n",(a*100) + (c*10) + b);
            printf("Le plus petit nombre est %d \n",(b*100) + (c*10) + a);
        }
    }else{
        if(b>a && b>c){
            if(a>c){
                printf("Le plus grand nombre est %d \n",(b*100) + (a*10) + c);
                printf("Le plus petit nombre est %d \n",(c*100) + (a*10) + b);
            }else{
                printf("Le plus grand nombre est %d \n",(b*100) + (c*10) + a);
                printf("Le plus petit nombre est %d \n",(a*100) + (c*10) + b);
            }
        }else {
            if(c>a && c>b){
                if(a>b){
                    printf("Le plus grand nombre est %d \n",(c*100) + (a*10) + b);
                    printf("Le plus petit nombre est %d \n",(b*100) + (a*10) + c);
                }else{
                    printf("Le plus grand nombre est %d \n",(c*100) + (b*10) + a);
                    printf("Le plus petit nombre est %d \n",(a*100) + (b*10) + c);
                }
            }

        }
    }
    return 0;
}
