#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入两个数");
	scanf("%d %d",&a,&b);
	
	while(a!=b) 
	{
		if(a>b) 
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}

	}
	printf("最大公约数为%d",a);
	return 0;
}
