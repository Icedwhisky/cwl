#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define OK		1
#define ERROR	0
#define TRUE	1
#define FALSE	0


#define	MAXSIZE  100          /*此处的宏定义常量表示线性表可能达到的最大长度*/

typedef int ElemType; 
typedef  struct
{ 
	ElemType  elem[MAXSIZE];  // 线性表占用的数组空间
                              // fidsa;kf
	int       last;           /*记录线性表中最后一个元素在数组elem[ ]中的位置（下标值），空表置为-1*/
}SeqList;

/*************************************************************************
 *           初始化线性表L           *
 *************************************************************************/ 
void InitList(SeqList* L); 

/**
 * 查找元素e在顺序表L中的位置 
 */
int  Locate(SeqList L, ElemType e);

/**
 * 在L中第i个位置之前插入新的数据元素e，L的长度加1 
 */
int  InsList(SeqList *L, int i, ElemType e);

/**
 * 删除L中第i个位置上元素e，并返回该元素 
 */
int  DelList(SeqList *L, int i, ElemType *e);

