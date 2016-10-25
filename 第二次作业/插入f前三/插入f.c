#include <reg52.h>

void delay(void)
{
	int i;
	for(i=0;i<32000;i++);
}




void main()
{
	int hzy[15]={252,96,218,242,102,182,190,224,254,230,142};
	int i;
	/*for(i=0;i<11;i++)
{		if(hzy[i]==218)
		a=i;
}*/
	for(i=9;i>2;i--)
	{hzy[i+1]=hzy[i];}
	hzy[3]=142;


	for(i=0;i<15;i++)
{
	P0=hzy[i];
	delay();
	delay();
	
} 

}

