#include <stdio.h>
int main()
{
	int figure=0; 
	printf("请输入一个三位数");
	scanf("%d",&figure);
	
	int a=figure/100;
	int b=figure%100/10;
	int c=figure%10;
	
	printf("交换后的数为%d",c*100+b*10+a) ;
	return 0;
  }
