/*用C语言求最大公约数 */
#include<stdio.h>
int main()
{
      int a,b,temp,num1,num2;
	  int r;
	  printf("输入两个正整数:");
	  scanf("%d %d",&num1,&num2);
	  r=num1%num2;
	  temp=num2;
	  while(r!=0)
	  {
	        num1=num2;
			num2=r;
			r=num1%num2;
	  }
	  printf("最大公约数：%d\n",num2);
	   return 0;
}