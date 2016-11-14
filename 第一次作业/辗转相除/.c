#include <stdio.h>

void main()
{
	int temp;
	int a,b,num1,num2;
	printf("please input num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
	a=num1;
	b=num2;

	}
	else                            
	{
	a=num2;
	b=num1;
	}
	while(b>0)
	{
	temp=a%b;
	a=b;
	b=temp;
	}
	printf("最大公约数是%d\n",a);
}