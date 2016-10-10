#include<stdio.h>
int fun(int a,int b){
	int n=a<b?a:b;
	 while(n>0)
    {
        if(a%n==0 &&b%n==0)
			break;
		else
			n--;
    }
    return n;
}
main(){
	int a,b,x;
	printf("输入两个整数:");
	scanf("%d%d",&a,&b);
	x=fun(a,b);
	printf("最大公约数为：%d",x) ;
}
