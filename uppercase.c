#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void* upper(char* input)  {

int i; 
int length;
length = strlen(input);

  for(i=0; i<length; i++){
    putchar(toupper(input[i]));
}}

int main( int argc, char **argv)  { 
   upper(argv[1]);
    return 0;
}
