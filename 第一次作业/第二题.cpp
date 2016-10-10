#include <stdio.h>
void main ()
{
int a, b[3];
int m=1;
int i=0;
scanf("%d",&a);

for ( i = 0;i < 3; i++)
{
	b[i]=(a/m)%10;
	m*=10;
}

for (i = 0; i < 3; i++)
    if (b[i] != 0)
    printf("%d",b[i]);
}