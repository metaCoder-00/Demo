#include<stdio.h>
int main()
{
	int a,b;
	printf("Please input a,b\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		int t=a;
		a=b;
		b=t;
	}
	for(int i=a;i>1;i--)
	{
		if(a%i==0&&b%i==0)
			break;
	}
	if(i==1)
		printf("无最大公约数\n");
	else
		printf("最大公约数为：%d\n",i);
	return 0;

}
