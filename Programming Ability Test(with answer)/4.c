#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}List;//节点结构体定义

List *Node_Creat(int dat);//创建节点函数
List *List_Creat(void);//创建链表函数

int List_Lenth(List *list);//第一题函数声明
List* List_Delete(List *list);//第二题函数声明

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

/*******************Write your function code here*****************/

/*****************************************************************/