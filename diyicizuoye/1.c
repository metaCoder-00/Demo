#include <stdio.h>
#include <stdlib.h>
int main (){
	char a[255];
	int x=75^40;
	itoa(x,a,2);
	printf("输出为:%s",a);
	itoa(x,a,16);
	printf("十六进制输出为:%s",a);
}
