#define _OPEN_SYS_ITOA_EXT
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i;
  char buffer [sizeof(int)*8+1];
  printf ("Enter a number: ");
  if (scanf ("%d",&i) == 1) {
  itoa (i,buffer,DECIMAL);
  printf ("decimal: %s\n",buffer);
  itoa (i,buffer,HEX);
  printf ("hexadecimal: %s\n",buffer);
  itoa (i,buffer,OCTAL);
  printf ("octal: %s\n",buffer);
}
return 0;
}
