#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char ch2[30]= "anas";
    const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);



   printf("%s \n",ch2);
int chCount;
  chCount = strlen(ch2);

  printf("%d",chCount);



    return 0;
}
