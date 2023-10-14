/*
˫��������
����жϴ�ͷ����ѭ��˫����L�Ƿ�Գ����
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef int DataType;

typedef struct DulNode{
    DataType data;
    struct DulNode  * prior,
                    * next;
}DulNode;


bool Symm(DulNode *L)
{
    if(L->next == L && L->prior == L)   //�ж������Ƿ�Ϊ��
        return false;
    DulNode *p=L->prior; //pָ��β���
    DulNode *n=L->next; //qָ���׽��
    while (p != n || n->next != p)  //�ֱ��ж����ż
    {
        if(p->data == n->data){
            p = p->prior;
            n = n->next;
        }   
        else
            return false;
    }
    return true;
}
