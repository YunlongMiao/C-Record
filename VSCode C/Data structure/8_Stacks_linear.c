#include<stdio.h>
#include<malloc.h>
//线性堆栈
//运用堆栈实现后缀表达式的求值
//从左到右读入后缀表达式的各项（运算符或运算数）

#define MAXSIZE 100
typedef int ElentmentType;
typedef struct SNode *Stack;

struct SNode{
    int Top;
    ElentmentType Data[MAXSIZE];
};

void Push(Stack PtrS, ElentmentType item)   //入栈
{
    if(PtrS->Top == MAXSIZE-1){
        printf("栈堆满");
        return;
    }else{
        PtrS->Data[++(PtrS->Top)] = item;
        return;
    }
}

ElentmentType Pop(Stack PtrS)   //出栈
{
    if(PtrS->Top == -1){
        printf("栈空\n");
        return ERROR;       //ERROR是ElementType的特殊值，标志错误
    }else{
        return (PtrS->Data[(PtrS->Top)--]);
    }
}