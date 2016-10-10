#include <stdio.h>
void main ()
{
int a,b;
int i,min;
scanf ("%d%d",&a,&b);
min=a<b?a:b;
for (i=min;i>0;i--)
if (a%i==0&&b%i==0)
{printf ("%d",i);
break;
}
}
