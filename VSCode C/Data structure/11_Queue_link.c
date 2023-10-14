#include<stdio.h>
//队列的链式存储实现
//入队未完成
typedef int ElementType;
typedef struct QNode *Queue;
struct Node{
    ElementType Data;
    struct Node Next;
};
struct QNode{               //链队列结构
    struct Node *rear;      //指向队尾结点
    struct Node *front;     //指向队头结点
};



void AddQ(Queue PtrQ,ElementType item)
{
    struct Node RearCell;

}



ElementType DeleteQ(Queue PtrQ)
{
    struct Node *FrontCell;
    ElementType FrontTep;
    if(PtrQ->front==NULL){
        printf("队列为空");
        return ERROR;
    }
    FrontCell = PtrQ->front;
    if(PtrQ->front==PtrQ->rear)         //如果队列只有一个
        PtrQ->front=PtrQ->rear=NULL;    //删除后队列置为空
    else
    //    PtrQ->front=FrontCell->Next;
        PtrQ->front=PtrQ->front->Next;
    FrontTep = FrontCell->Data;
    free(FrontCell);
    return FrontTep;
    
}