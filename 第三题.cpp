#include<stdio.h>
int main(void)
{	
	int a=0,b=0,m=0,n=0,t=0;

	printf("Enter a,b\n");
	scanf("%d%d",&a,&b);
	if(a>b){
		m=b;
	}
	else{
		m=a;
	}
	for(n=1;n<=m;n++)
	{
		if(a%n==0)
		{
			if(b%n==0)
			{
			t=n;
			}
		}
	}
printf("%d与%d的最大公约数为%d\n",a,b,t);
return 0;
}
