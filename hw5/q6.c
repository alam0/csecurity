#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 16

char* release(char *str)
{
   free(str);
   return str;
}

char* copy(char *str)
{
   char *buf;
   buf = malloc(LEN);
   memset(buf, '\0', LEN);

   return (strnlen(str) <= LEN - 1) ? strlcpy(buf, str, LEN - 1) : release(buf);
}

int main(int argc, char **argv)
{
   char *buf;

   buf = copy(argv[1]);
   if (buf != NULL)
       printf("The input string is: %s\n", buf);
   release(buf);

   return 0;
}

