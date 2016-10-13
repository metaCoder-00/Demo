#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入两个数字（中间用空格）：");
	scanf("%d %d",&a,&b);
	
	c=a%b;
	
	while(c!=0) 
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("这两个数的最大公约数是%d",b);
	return 0;
 } 
