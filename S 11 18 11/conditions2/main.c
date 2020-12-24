#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int a,b;



    printf("a=");
    scanf("%d",&a);


    printf("b=");
    scanf("%d",&b);


    if(a>b)
    {
    printf("a>b");

    }

else if(a<b)
{
    printf("a<b");
}

else
{
    printf("a=b");

}
*/


int t[4];

printf("t[1]= ");
scanf("%d",&t[0] );

printf("t[2]= ");
scanf("%d",&t[1]);

printf("t[3]= ");
scanf("%d",&t[2]);

printf("t[4]= ");
scanf("%d",&t[3]);


/*
if (t[0] == 0 )
{
    printf("je suis gagnant");

}
else if (t[1] == 0 )
     printf("je suis gagnant");

 else  if (t[2] == 0 )
     printf("je suis gagnant");
   else if (t[3] == 0 )
     printf("je suis gagnant");
   else if (t[4] == 0 )
    printf("je suis gagnant");
else

  printf("je suis perdant ");

*/

if ((t[0] == 0 ) || (t[0] == 0 ) || (t[0] == 0 ) || (t[0] == 0 )|| (t[0] == 0 ))

 printf("je suis gagnant");

else


 printf("je suis perdant ");


    return 0;
}
