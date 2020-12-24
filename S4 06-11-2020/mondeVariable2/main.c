#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int anas=787;

    int a=6,b=15,c=23,d=9,e=0;
    printf("%d+%d+%d=%d \n",a,b,c,a+b+c);
    printf("%d*(%d+%d*%d)=%d\n",a,b,c,d,a*(b+c+d));
    e=a*b;
    a=10;

    anas=6;
    printf("%d*%d + %d *(%d+%d ) =%d\n",a,b,c,b,a,e );




    return 0;
}
