#include<stdio.h>
int main(){
	int n,a,b,c;
	printf("输入一个三位数:");
	scanf("%d",&n);
	a=n/100;
	b=n/10%10;
	c=n%10;
	n=c*100+b*10+a;
	printf("%d",n);
}
