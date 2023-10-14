#include<stdio.h>
#include<malloc.h>
//堆栈的链式存储
//运用堆栈实现后缀表达式的求值
//从左到右读入后缀表达式的各项（运算符或运算数）
#define MaxSize 100
typedef int ElementSize;
typedef struct SNode *Stack;

struct SNode{
    ElementSize Data;
    struct SNode *Next;
};


Stack CreateStack()//构建一个堆栈的头结点，并返回指针
{
    Stack S;
    S = (Stack)malloc(sizeof(struct SNode));
    S->Next = NULL;
    return S;
}


int IsEmpty(Stack S)//判断堆栈是否为空，若为空函数返回1，否则返回0
{
    return (S->Next == NULL);
}


void Push(ElementSize item, Stack S)//将元素item压入堆栈S
{
    struct SNode *TmpCell;
    TmpCell = (struct SNode*)malloc(sizeof(struct SNode));
    TmpCell->Data = item;
    TmpCell->Next = S->Next;
    S->Next = TmpCell->Next;
}

ElementSize Pop(Stack S)//删除并返回堆栈S栈顶元素
{
    struct SNode *FirstCell;
    ElementSize TopElem;
    if(Is(S)){
        printf("堆栈空");
        return NULL;
    }else{
        FirstCell = S->Next;
        S->Next = FirstCell->Next;
        TopElem = FirstCell->Data;
        free(FirstCell);
        return TopElem;
    }
}