#include "stdio.h"    
#include "string.h"
#include "ctype.h"      
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"
typedef struct LNode {//定义单链表结点类型
	int date;         //每个节点存放一个数据元素
	struct LNode *next; //指针指向下一个节点
}LNode, *LinkList;
int InitList(LinkList *L)
{   //初始化一个链表带头结点
	*L = (LNode*)malloc(sizeof(LNode));//分配一个头节点
	if (L == NULL)
		return 0;
	(*L)->next = NULL;    //头节点之后暂无节点
	return 1;
}

int main()
{
	LinkList L;
	InitList(&L);
	return 0;
}