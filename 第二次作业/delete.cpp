#include<stdio.h>
  
unsigned char  taba[11]={0xFD, 0x61, 0xDB, 0xF3, 0x67, 0xB7, 0xBF, 0xE1,0xFF,0xF7,0x8F};  

void main (void )
{
for (int i = 0;i < 11;i++ )
{
	if (taba[i]==0xE1)
	{
	    for (int j = i;j < 11;j++)
		taba[j] = taba[j+1];
	}   
}
for (i =0 ;i<10;i++)
printf("%x ",taba[i]);
}

