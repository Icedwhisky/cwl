#include "seqlist.h"

int  Locate(SeqList L, ElemType e)
{	
	int i=0;                            /*i为扫描计数器，初值为0，即从第一个元素开始比较*/
	while ((i<=L.last)&&(L.elem[i]!=e))	/*顺序扫描表，直到找到值为key的元素, 或扫描到表尾而没找到*/
	{
		i++;
	}	 
	if  (i<=L.last)                    /*若找到值为e的元素，则返回其序号*/
	{
		return(i+1);
	}	                  
	else
	{
		return(-1);                     /*若没找到，则返回空序号*/
	}
}

void InitialSeqList(SeqList* L, int n)
{
	int	i;
	int	r;
	
	memset(L->elem, 0, sizeof(ElemType)*MAXSIZE);
	printf("请输入线性表的长度:");
	scanf("%d", &r);
	L->last = r-1;
	printf("请输入线性表的各元素值:\n");
	for(i=0; i<=L->last; i++)
	{
		scanf("%d", &L->elem[i]);
	}
}

int  InsertList(SeqList *L, int pos, ElemType e)
{ 
	int	k;
	int * picounter;
	double dsum;

	
	
	if((i<1) || (i>L->last+2))       /*首先判断插入位置是否合法*/
	{
		printf("插入位置i值不合法");
		return(ERROR);
	}
	if(L->last>= MAXSIZE-1)
	{
		printf("表已满无法插入");
		return(ERROR);
	}
	for(k=L->last;k>=i-1;k--)        /* 为插入元素而移动位置 */
		L->elem[k+1]=L->elem[k];
	L->elem[i-1]=e;                  /* 在C语言数组中，第i个元素的下标为i-1 */
	L->last++;
	
	return(OK);
}

int  DelList(SeqList *L, int i, ElemType *e)
{ 
	int	k;
	
	if((i<1)||(i>L->last+1))   
	{ 
		printf("删除位置不合法!");
		return(ERROR);
	}
	*e = L->elem[i-1];               /* 将删除的元素存放到e所指向的变量中 */
	for(k=i; i<=L->last; k++)
		L->elem[k-1] = L->elem[k];   /* 将后面的元素依次前移 */
	L->last--;
	
	return(OK);
}
