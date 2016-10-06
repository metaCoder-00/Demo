#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",(n%10)*100+((n/=10)%10)*10+(n/=10));
	return 0;
}
