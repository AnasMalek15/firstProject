#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	/*
	do
	{
		printf("Khalil \n");
		i++;
		printf("%d", i);
	} *//*while (i < 5);*/

	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("%d \n", i);
	//}


	//int i = 7;

	//while (i < 5)
	//{
	//	printf("Khalil \n");
	//	i++;
	//}

	/*do
	{
		printf("Khalil \n");
		i++;
	} while (i < 5);
*/

	int tab[5];
	for (int i = 0; i < 5; i++)
	{
		printf("tab[%d]= ",i);
	
		scanf_s("%d", &tab[i]);
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		printf("tab[%d]= %d", i, tab[i]);



	}
	







	return 0;
}
