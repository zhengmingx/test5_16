#include "stdio.h"    
#include "string.h"
#include "ctype.h"      
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"
typedef struct LNode {//���嵥����������
	int date;         //ÿ���ڵ���һ������Ԫ��
	struct LNode *next; //ָ��ָ����һ���ڵ�
}LNode, *LinkList;
int InitList(LinkList *L)
{   //��ʼ��һ�������ͷ���
	*L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ�ڵ�
	if (L == NULL)
		return 0;
	(*L)->next = NULL;    //ͷ�ڵ�֮�����޽ڵ�
	return 1;
}

int main()
{
	LinkList L;
	InitList(&L);
	return 0;
}