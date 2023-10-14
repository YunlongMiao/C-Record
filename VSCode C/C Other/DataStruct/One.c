/*
双链表问题
设计判断带头结点的循环双链表L是否对称相等
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
    if(L->next == L && L->prior == L)   //判断链表是否为空
        return false;
    DulNode *p=L->prior; //p指向尾结点
    DulNode *n=L->next; //q指向首结点
    while (p != n || n->next != p)  //分别判断奇和偶
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
