#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //declaration des variables
    char name[30];
    char pren[30];
    int age;
    float cont1;
    float cont2;
    float synthese;
    float moy;


    printf("Quel est votre nom:  ");
    scanf("%s",name);

    printf("\n");

    printf("Quel est votre prenom: ");
    scanf("%s",pren);

    printf("\n");

        printf("Quel est votre age:  ");
    scanf("%d",&age);

    printf("\n");

        printf("Quel est votre note de controle 1  ");
    scanf("%f",&cont1);

    printf("\n");

        printf("Quel est votre note de controle 2  ");
    scanf("%f",&cont2);

    printf("\n");

        printf("Quel est votre note de synthese ");
    scanf("%f",&synthese);

    printf("\n");

    moy = (cont1+cont2 + 2*synthese)/4;

    printf(" l'eleve %s %s d'age %d a comme moyenne %.2f \n",name,pren,age,moy);






   // printf("%s",name);



    return 0;
}
