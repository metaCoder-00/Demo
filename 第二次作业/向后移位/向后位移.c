#include <reg52.h>

void delay(void)
{
	int i;
	for(i=0;i<32000;i++);
}




void main()
{
	int hzy[15]={252,96,218,242,102,182,190,224,254,230,142};
	int i,a;
	for(i=0;i<15;i++)
{		if(hzy[i]==224)
		a=i;
		
}
    
	for(i=a;i<15;i++)
		{
		hzy[i]=hzy[i+1];
		}
	for(i=1;i<15;i++)
{
	P0=hzy[i];
	delay();
	delay();
} 

}

