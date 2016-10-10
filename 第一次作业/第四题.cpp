#include <stdio.h>
void main ()
{
int a,b;
int t;
scanf("%d%d",&a,&b);
if (a<b)
{
t=a;
a=b;
b=t;
}
while (1)
{
t=a%b;
if (t==0)
{
	printf ("%d",b);
    break;
}
else 
{
a=b;
b=t;
}

}
}