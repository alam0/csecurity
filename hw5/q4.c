#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 32

char* combine(int num_A, int num_B)
{
   char *buf;
   int i, j;

   buf = malloc(2 * MAX_SIZE);
   memset(buf, '\0', 2 * MAX_SIZE);

   if (!buf)
       exit(-1);

   for (i = 0; i < num_A && MAX_SIZE >= i; i++)
       buf[i] = 'A';

   for (j = 0; j < num_B && MAX_SIZE >= j; j++)
       buf[i + j] = 'B';

   return buf;
}

int main(int argc, char **argv)
{
   char *str;

   str = combine(atoi(argv[1]), atoi(argv[2]));
   fprintf(stdout, "Output string: %s\n", str);
   free(str);

   return 0;
}


