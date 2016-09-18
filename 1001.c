#include <stdio.h>

int Get_Result(int num);

int main(int argc, char const *argv[])
{
	int n;
	int result = 0;

	scanf("%d", &n);
	result = Get_Result(n);
	printf("%d\n", result);

	return 0;
}
/*******************Write your function code here*****************/

/*****************************************************************/