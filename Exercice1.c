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
            printf("Le plus grand nombre est %d \n",a);
            printf("Le plus petit nombre est %d \n",c);
        }else{
            printf("Le plus grand nombre est %d \n",a);
            printf("Le plus petit nombre est %d \n",b);
        }
    }else{
        if(b>a && b>c){
            if(a>c){
                printf("Le plus grand nombre est %d \n",b);
                printf("Le plus petit nombre est %d \n",c);
            }else{
                printf("Le plus grand nombre est %d \n",b);
                printf("Le plus petit nombre est %d \n",a);
            }
        }else {
            if(c>a && c>b){
                if(a>b){
                    printf("Le plus grand nombre est %d \n",c);
                    printf("Le plus petit nombre est %d \n",b);
                }else{
                    printf("Le plus grand nombre est %d \n",c);
                    printf("Le plus petit nombre est %d \n",a);
                }
            }

        }

    }
    return 0;
}
