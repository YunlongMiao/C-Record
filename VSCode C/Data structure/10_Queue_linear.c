#include<stdio.h>
//#include<malloc.h>
//队列及顺序存储实现
//队列
//顺环队列(%)
#define MaxSize 100
typedef int ElementType;
typedef struct QNode *Queue;
struct QNode{
    ElementType Data[MaxSize];
    int front;
    int rear;
};

void AddQ(Queue PtrQ,ElementType item)//入队列
{
    if((PtrQ->rear+1) % MaxSize ==PtrQ->front){
        printf("队列满");
        return;
    }
    PtrQ->rear = (PtrQ->rear+1)%MaxSize;    //(MaxSize+1)%MaxSize=1 环形
    PtrQ->Data[PtrQ->rear] = item;
}


ElementType DeleteQ(Queue PtrQ)//出队列
{
    if(PtrQ->front==PtrQ->rear){
        printf("队列空")
        return ERROR;
    }else{
        PtrQ->front = (PtrQ->front+1)%MaxSize;
        return PtrQ->Data[PtrQ->front];
    }
}