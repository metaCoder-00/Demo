#include <reg52.h>

void delay(void)
{
	int i;
	for(i=0;i<32000;i++);
}




void main()
{
	int hzy[11]={252,96,218,242,102,182,190,224,254,230,142};
	int i;
	for(i=0;i<11;i++)
{
	P0=hzy[i];
	delay();
} 

}

