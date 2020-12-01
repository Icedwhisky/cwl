#include "seqlist.h"

int  Locate(SeqList L, ElemType e)
{	
	int i=0;                            /*iΪɨ�����������ֵΪ0�����ӵ�һ��Ԫ�ؿ�ʼ�Ƚ�*/
	while ((i<=L.last)&&(L.elem[i]!=e))	/*˳��ɨ���ֱ���ҵ�ֵΪkey��Ԫ��, ��ɨ�赽��β��û�ҵ�*/
	{
		i++;
	}	 
	if  (i<=L.last)                    /*���ҵ�ֵΪe��Ԫ�أ��򷵻������*/
	{
		return(i+1);
	}	                  
	else
	{
		return(-1);                     /*��û�ҵ����򷵻ؿ����*/
	}
}

void InitialSeqList(SeqList* L, int n)
{
	int	i;
	int	r;
	
	memset(L->elem, 0, sizeof(ElemType)*MAXSIZE);
	printf("���������Ա�ĳ���:");
	scanf("%d", &r);
	L->last = r-1;
	printf("���������Ա�ĸ�Ԫ��ֵ:\n");
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

	
	
	if((i<1) || (i>L->last+2))       /*�����жϲ���λ���Ƿ�Ϸ�*/
	{
		printf("����λ��iֵ���Ϸ�");
		return(ERROR);
	}
	if(L->last>= MAXSIZE-1)
	{
		printf("�������޷�����");
		return(ERROR);
	}
	for(k=L->last;k>=i-1;k--)        /* Ϊ����Ԫ�ض��ƶ�λ�� */
		L->elem[k+1]=L->elem[k];
	L->elem[i-1]=e;                  /* ��C���������У���i��Ԫ�ص��±�Ϊi-1 */
	L->last++;
	
	return(OK);
}

int  DelList(SeqList *L, int i, ElemType *e)
{ 
	int	k;
	
	if((i<1)||(i>L->last+1))   
	{ 
		printf("ɾ��λ�ò��Ϸ�!");
		return(ERROR);
	}
	*e = L->elem[i-1];               /* ��ɾ����Ԫ�ش�ŵ�e��ָ��ı����� */
	for(k=i; i<=L->last; k++)
		L->elem[k-1] = L->elem[k];   /* �������Ԫ������ǰ�� */
	L->last--;
	
	return(OK);
}
