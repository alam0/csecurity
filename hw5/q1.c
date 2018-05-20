#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIM ","

void parser(char *str, int num_fields)
{
   int i;
   char *buf[24];

   for (i = 0; i < num_fields; i++)
   {
       if (i == 0)
           buf[i] = strtok(str, DELIM);
       else
           buf[i] = strtok(NULL, DELIM);

       printf("%s\n", buf[i]);
   }
}

int main(int args, char **argv)
{
    parser(argv[1], atoi(argv[2]));
    return(0);
} 
