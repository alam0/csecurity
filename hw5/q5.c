#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
   char *str;

   str = malloc(atoi(argv[1]));
   memset(str, '\0', atoi(argv[1]));

   printf("Enter the input here: ");
   scanf ("%s", str);
   //fgets(str, atoi(argv[1]), stdin);
   printf("The input is: %s\n", str);
   free(str);
   

   return 0;
}
