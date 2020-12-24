#include <stdio.h>
#include <stdlib.h>

int main()
{
	int g,choice;

	do {

		printf("Si vous etes homme tapez 1 ou Si vous etes femme tapez 2: ");


		scanf_s("%d", &g);

	} while (!((g == 1) || (g == 2)));


	do
	{
		printf("choisissez un numero de 1 a 3: ");
		scanf_s("%d", &choice);
	} while (!((choice == 1) || (choice == 2) || (choice == 3)));

	if (g == 1)
	{

		switch (choice)
		{
		case 1:
			printf("Vous serez un Millonnaire !!!");
			break;
		case 2:
			printf("Vous serez un Homme d'affaire  !!!");
			break;
		case 3:
			printf("Vous serez un simple employee !!!");
			break;

		}

	}
	else if( g ==2)
	{



		switch (choice)
		{
		case 1:
			printf("Vous serez une femme d'affaire !!!");
			break;
		case 2:
			printf("Vous serez une pilote  !!!");
			break;
		case 3:
			printf("Vous serez une femme au foyer !!!");
			break;

		}

	}






	return 0;
}
