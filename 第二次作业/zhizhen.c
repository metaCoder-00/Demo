#include<reg51.h>
void Delay10ms(unsigned int c);   
unsigned char code *taba[]={0xFD, 0x61, 0xDB, 0xF3, 0x67, 0xB7, 0xBF, 0xE1,0xFF,0xF7,0x8F
                                 };  //F=0x71
 void main(void)
{
	unsigned char i = 0;

	while(1)
	{
	    P0 = *(taba+i);
		i++;
		if(i == 11)
		{
			i = 0;
		}
		Delay10ms(100);
	}				
}


void Delay10ms(unsigned int c)   //Îó²î 0us
{
    unsigned char a, b;

    for (;c>0;c--)
	{
		for (b=38;b>0;b--)
		{
			for (a=130;a>0;a--);
		}          
	}       
}