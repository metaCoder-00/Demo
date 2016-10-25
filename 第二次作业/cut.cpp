#include<stdio.h>
  
unsigned char  taba[12]={0xFD, 0x61, 0xDB, 0xF3, 0x67, 0xB7, 0xBF, 0xE1,0xFF,0xF7,0x8F};  

void main (void)
{
for (int j = 12; j > 2;j-- )
	 taba[j] = taba[j-1];

taba[j] = 0x8F;
for (int i = 0; i < 12; i++)
printf("%x ",taba[i]);
}

