#include <stdio.h>
//#include <stdlib.h>

void main()
{
	int i,as,sd,df;
	scanf("%d",&i);
	as=i%10;
	sd=i/10%10;
	df=i/100;
	printf("%d\n",df+sd*10+as*100);
}