#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
   int a;
   int b;
   int k;

   printf("a = ");
   scanf("%d",&a);
   printf("b = ");
   scanf("%d",&b);

  if(a > b)
{
   printf("a > b");
}
  else if(a <  b)
 printf("a < b");

else
printf("a = b");

*/

int t[5];
int v[5];
int i = 0, k =0;

t[0] = 3;
t[1] = 10;
t[2] = 2;
t[3] = 11;

v[0] = 1;
v[1] = 2;
v[2] = 6;
v[3] = 0;

if (t[0] > v[0])
    i++;
else if(t[0] < v[0])
    k++;

    if (t[1] > v[1])
    i++;
else if(t[1] < v[1])
    k++;

    if (t[2] > v[2])
    i++;
else if(t[2] < v[2])
    k++;

    if (t[3] > v[3])
    i++;
else if(t[3] < v[3])
    k++;


    if ( i>k)
        printf("le tableau T est le gagnant");
    else

        printf("le tableau V est le gagnant");

        printf("i = %d , k = %d",i,k);


    return 0;
}
