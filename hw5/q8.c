#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
   char buf[32];
   int mem_marker = 1;
   snprintf(buf, sizeof(buf), argv[1]);
   buf[sizeof(buf) - 1] = 0;
   printf("The buffer size is: (%d) \nInput: %s \n", (int) strnlen(buf, 34), buf);
   printf("mem_marker equals: %d / in hex: %#x\nThe memory address for mem_marker: (%p)\n", mem_marker, mem_marker, &mem_marker);

   return 0;
}

