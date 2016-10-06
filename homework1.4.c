#include<stdio.h>
int main()
{
	int a=0,b=0,tmp=0;
	printf("please input two number like 2354,2354:\n");
	scanf("%d,%d",&a,&b);
	if(b>a)tmp=a,a=b,b=tmp;
	while(b!=0){
	tmp=a%b;
	if(tmp==0)printf("%d\n",b);
	a=b,b=tmp;	
	}
	return 0;
}
