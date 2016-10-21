#include"reg52.h" // 试试 对了这里用的 P1
sbit wela=P3^7;
void delayms(int xms)
{
int i,j;
for (i=300;i>0;i--)
for (j=xms;j>0;j--);
}


void main()
{
wela=0;
while (1)
{
P1=0x3f;
delayms(200);
P1=0x06;
delayms(200);
P1=0x5b;
delayms(200);
P1=0x4f;
delayms(200);
P1=0x66;
delayms(200);
P1=0x6d;
delayms(200);
P1=0x7d;
delayms(200);
P1=0x07;
delayms(200);
P1=0x7f;
delayms(200);
P1=0x6f;
delayms(200);
P1=0x71;
delayms(200);
}
}