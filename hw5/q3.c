#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy(char *str)
{
   char buf[24];
   memset(buf, '\0', 24);
   strcpy(buf, str);
   printf("The input string is: %s\n", buf);
}

int main(int args, char **argv)
{
   if (strlen(argv[1]) < 24)
   {
       copy(argv[1]);
   }

   return(0);
} 
