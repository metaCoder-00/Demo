		#include <stdio.h>
int main()
{
	int a=1,b=1,tmp=1;
	printf("Please Input two int number like 23432,255543\n");
	scanf("%d,%d",&a,&b);
	if(b>=a)tmp=b,b=a,a=tmp,tmp=b;
	if((a==b)||(a%b==0)){
		printf("%d\n",b);
	}else{
		tmp=b-1;	
		while(!((b%tmp==0)&&(a%tmp==0)))
		{	
		tmp--;
		}
		printf("%d\n",tmp);
	}
	return 0;
}
