#include <STDIO.H>

void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while (a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	printf("%d\n",a);
}