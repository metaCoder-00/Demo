#include "stdio.h"
#include "stdlib.h"

int Get_Result(int num1, int target1, int num2, int target2);

int main(int argc, char const *argv[])
{
	int m = 0, n = 0, target1 = 0, target2 = 0;
	int result;
	scanf("%d %d %d %d", &m, &target1, &n, &target2);
	result = Get_Result(m, target1, n, target2);
	printf("%d\n", result);
	return 0;
}

/*******************Write your function code here*****************/

/*****************************************************************/