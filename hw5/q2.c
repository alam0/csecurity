#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void length_check(char *str)
{
   printf("The combined input length is: %d\n", (int) strlen(str));
}

int main(int args, char **argv)
{
   char buf[32];
   memset(buf, '\0', 32);
   strncpy(buf, argv[1], 16);
   strncat(buf, argv[2], 16);
   length_check(buf);

   return(0); 
} 

