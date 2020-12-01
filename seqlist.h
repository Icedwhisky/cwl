#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define OK		1
#define ERROR	0
#define TRUE	1
#define FALSE	0


#define	MAXSIZE  100          /*�˴��ĺ궨�峣����ʾ���Ա���ܴﵽ����󳤶�*/

typedef int ElemType; 
typedef  struct
{ 
	ElemType  elem[MAXSIZE];  // ���Ա�ռ�õ�����ռ�
                              // fidsa;kf
	int       last;           /*��¼���Ա������һ��Ԫ��������elem[ ]�е�λ�ã��±�ֵ�����ձ���Ϊ-1*/
}SeqList;

/*************************************************************************
 *           ��ʼ�����Ա�L           *
 *************************************************************************/ 
void InitList(SeqList* L); 

/**
 * ����Ԫ��e��˳���L�е�λ�� 
 */
int  Locate(SeqList L, ElemType e);

/**
 * ��L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 
 */
int  InsList(SeqList *L, int i, ElemType e);

/**
 * ɾ��L�е�i��λ����Ԫ��e�������ظ�Ԫ�� 
 */
int  DelList(SeqList *L, int i, ElemType *e);

