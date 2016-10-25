#include <reg52.h>
void delay(void)
{
	int	i;
	for(i=0;i<32000;i++);
		
}






void main()
{
	int hzy[15]={252,96,218,242,102,182,190,224,254,230,142};
	int *a,i;
	for(i=0;i<15;i++)
		{
		a=hzy+i;
		P0=*a;
		delay();
		delay();
		}
}