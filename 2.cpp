#include<stdio.h>
int main()
{
	char s[4];
	printf("Please input the number\n");
	scanf("%s",s);
	if(s[2]=='0')
		if(s[1]=='0')
			printf("%c\n",s[0]);
		else
			printf("%c%c\n",s[1],s[0]);
	else
		printf("%c%c%c\n",s[2],s[1],s[0]);
	return 0;

}