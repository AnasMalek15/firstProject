#include <stdio.h>
#include <stdlib.h>

int main()
{

int controle1;
int controle2;
int synthese;

float moyenne;

printf("Entrer la note du controle 1: ");
scanf("%d",&controle1);


printf("Entrer la note du controle 2: ");
scanf("%d",&controle2);


printf("Entrer la note du synthese: ");
scanf("%d",&synthese);

moyenne=(controle1+controle2+synthese*2)/4;

printf("La moyenne de la matiere est: %f",moyenne);


    return 0;


}

