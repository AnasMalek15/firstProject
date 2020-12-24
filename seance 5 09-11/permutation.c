
#include <stdio.h>
#include <stdlib.h>

int main()
{

 int a=5;
 int b=6;
 int c;


 printf("la valeur de a=%d,b=%d \n",a,b);


 //modification
c=a;
a=b;
b=c;



printf("la nouvelle de valeur de a=%d,b=%d ",a,b);

     return 0;
}
