/**************1**************/
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

int Get_Result(int num)
{
	int cnt = 0;
	while(num != 1)
	{
		if (num % 2)
		{
			num = (3 * num + 1) / 2;
		}else
		{
			num /= 2;
		}
		++cnt;
	}
	return cnt;
}
/********************************/

/**************2**************/
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int m = 0, n = 0, target1 = 0, target2 = 0;
	int result1 = 0, result2 = 0;
	scanf("%d %d %d %d", &m, &target1, &n, &target2);
	while(m || n)
	{
		if (m % 10 == target1)
		{
			result1 = result1 * 10 + target1;
		}
		if (n % 10 == target2)
		{
			result2 = result2 * 10 + target2;
		}
		m /= 10;
		n /= 10; 
	}
	printf("%d\n", result1 + result2);


	return 0;
}
/********************************/

/**************3**************/
#include <stdio.h>
#include <stdlib.h>

void Shift(int *a, int len);

int main(int argc, char const *argv[])
{
	int m, n;
	int i;
	int *a;

	scanf("%d %d", &n, &m);
	a = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]); 
	}

	for (i = 0; i < m; ++i)
	{
		Shift(a, n);
	}

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}

	return 0;
}

void Shift(int *a, int len)
{
	int i, t;

	t = a[len - 1];
	for (i = len - 1; i > 0; --i)
	{
		a[i] = a[i - 1];
	}
	a[0] = t;
}
/********************************/


/**************4**************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}List;//节点结构体定义

List *Node_Creat(int dat);//创建节点函数
List *List_Creat(void);//创建链表函数
/************Declaration of your function************/
int List_Lenth(List *list);//第一题函数声明
List* List_Delete(List *list);//第二题函数声明
/****************************************************/

int main(int argc, char const *argv[])
{
	int lenth = 0;
	List *list;
	list = List_Creat();
	/***调用题目函数***/
	//lenth = List_Lenth(list);
	//list = List_Delete(list);
	/***结果输出***/
	for (; list ; list = list -> next)
	{
		printf("%d\n", list -> data);
	}

	return 0;
}

List *Node_Creat(int dat)
{
	List *p = (List *)malloc(sizeof(List));
	if (!p)
	{
		return NULL;
	}
	p -> data = dat;
	p -> next = NULL;

	return p;
}

List *List_Creat(void)
{
	int i;
	List *head, *p, *q;
	head = Node_Creat(0);
	if (!head)
	{
		return NULL;
	}
	p = head;
	for (i = 0; i < 4; ++i)
	{
		q = Node_Creat(i + 1);
		p -> next = q;
		p = p -> next;
	}

	return head;
}


/********************************/