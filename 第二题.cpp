#include<stdio.h>
int main(void)
{
	int x,y,a,b,c;

	printf("Enter x(100<=x<=999):\n");
	scanf("%d",&x);
	a=x/100;
	b=(x-a*100)/10;
	c=x-a*100-b*10;
	y=c*100+b*10+a;

	printf("y=%d",y);

	return 0;
	}

