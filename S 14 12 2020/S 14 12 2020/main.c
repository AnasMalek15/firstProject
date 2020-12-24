#include <stdint.h>
#include <stdio.h>

int main()
{
	int a;
	printf("Entrer l'entier: ");
	scanf_s("%d", &a);




	/*if (a==1)
	{
		printf("Aujourd'hui c'est Dimanche :)");

	}
	else if (a == 2)
	{
		printf("Aujourd'hui c'est Lundi :)");

	}
	else if (a == 3)
	{
		printf("Aujourd'hui c'est Mardi :)");

	}
	else if (a == 4)
	{
		printf("Aujourd'hui c'est Mercredi :)");

	}
	else if (a == 5)
	{
		printf("Aujourd'hui c'est Jeudi :)");

	}
	else if (a == 6)
	{
		printf("Aujourd'hui c'est Vendredi :)");

	}
	else if (a == 7)
	{
		printf("Aujourd'hui c'est Samedi :)");

	}*/


	//switch (a)
	//{
	//case 1:
	//	printf("Aujourd'hui c'est Lundi :)");
	//	break;
	//case 2:
	//	printf("Aujourd'hui c'est Lundi :)");
	//	break;
	//case 3:
	//	printf("Aujourd'hui c'est Mardi :)");
	//	break;
	//case 4:
	//	printf("Aujourd'hui c'est Mercredi :)");
	//	break;
	//case 5:
	//	printf("Aujourd'hui c'est Jeudi :)");
	//	break;
	//case 6:
	//	printf("Aujourd'hui c'est Vendredi :)");
	//	break;
	//case 7:
	//	printf("Aujourd'hui c'est Samedi :)");
	//	break;
	//default:
	//	printf("Votre choix n'est pas claire veillez reessayer s'il vous plait");

	//}


	char couleur[10]="jaune";

	printf("Entrer l'entier :");	
	//canf_s("%s",couleur );

	
	switch (couleur)
	{	case ("noir"):
		printf("le numero de votre boale est 1:");
		break;
	case ("blanc"):
		printf("le numero de votre boale est 2:");
		break;
	case ("rouge"):
		printf("le numero de votre boale est 3:");
		break;
	case ("vert"):
		printf("le numero de votre boale est 4:");
		break;
	case ("orange"):
		printf("le numero de votre boale est 5:");
		break;
	case ("jaune"):
		printf("le numero de votre boale est 6:");
		break;
	



	}  



	return 0;

}