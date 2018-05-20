#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
   if (argc < 3)
   {
       printf("error: a buffer size and string must be provided as input\n");
       exit(-1);
   }

   char buf[atoi(argv[1])];

   memset(buf, '\0', atoi(argv[1]));
   strlcpy(buf, argv[2], atoi(argv[1]));
   fprintf(stdout, "%s", buf); 

   return 0;
}

