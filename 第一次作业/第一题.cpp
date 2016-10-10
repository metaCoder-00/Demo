#include <stdio.h>
#include <stdlib.h>
void main ()
{
int t;
char s[100];
t=(75&99)|32;
itoa (t,s,2); 
printf ("%s\n",s);
}

