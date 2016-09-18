#include <stdio.h>
#include <stdlib.h>

void Shift(int *a, int lenth, int digits);//a：目标操作数组，lenth：数组长度，digits：要移动的位数

int main(int argc, char const *argv[])
{
	int m, n;
	int i;
	int *a;

	scanf("%d %d", &n, &m);
	a = (int *)malloc(sizeof(int) * n);//创建数组a

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]); 
	}//获取输入数组数据

	a = Shift(a, n, m);

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}//输出

	return 0;
}

/*******************Write your function code here*****************/

/*****************************************************************/