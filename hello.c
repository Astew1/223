#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv){

   char c = 0;  //This does show that chars are signed implicitly on this mac
   c = c - 1;
   printf("%d", c);
   printf("Hello, world!\n");
   return 0;
}
