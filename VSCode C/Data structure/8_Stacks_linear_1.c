#include<stdio.h>
#include<malloc.h>
//堆栈的顺序存储实现

//请用一个数组实现两个堆栈，要求最大地利用数组空间，使数组只要有空间入栈操作就可以成功

//【分析】 一种比较聪明的方法是使这两个栈分别从数组的两头开始向中间生长，
//         当两个栈的栈顶指针相遇时，表示两个栈都满了

#define MaxSize 100
typedef int ElementType;

struct DStack{
    ElementType Data[MaxSize];
    int Top1;   //堆栈1的栈顶指针
    int Top2;   //堆栈2的栈顶指针
}S;

// S.Top1 = -1;
// S.Top2 = MaxSize;

S CreateStack();    //初始化
void Push(struct DStack *PtrS,ElementType item,int Tag); //入栈 Tag=1,左；其他，右 
ElementType Pop(struct DStack *PtrS,int Tag);   //出栈

int main()
{
    S=CreateStack();

}

S CreateStack()
{
    S = (struct DStack)malloc(sizeof(struct DStack));
    S.Top1 = -1;
    S.Top2 = MaxSize;
    return S;
}

void Push(struct DStack *PtrS,ElementType item,int Tag) //Tag=1,左；其他，右
{
    if(PtrS->Top2 - PtrS->Top1 == 1){    //栈堆满
        printf("栈堆满");
        return;
    }
    if(Tag==1)
        PtrS->Data[++(PtrS->Top1)] == item;
    else 
        PtrS->Data[--(PtrS->Top2)] == item;
}

ElementType Pop(struct DStack *PtrS,int Tag)
{
    if(Tag==1){
        if(PtrS->Top1==-1){
            printf("堆栈1为空");
            return NULL;
        }else return PtrS->Data[(PtrS->Top1)--];
    }
    else{
        if(PtrS->Top2==MaxSize){
            printf("堆栈2为空");
            return NULL;
        }else return PtrS->Data[(PtrS->Top2)++];
    }

}