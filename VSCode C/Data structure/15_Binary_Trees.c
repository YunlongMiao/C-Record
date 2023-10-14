#include<stdio.h>
#include<malloc.h>

typedef int ElementType;
typedef struct TreeNode *BinTree;
typedef BinTree Position;

struct TreeNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};


//先序遍历--根 左 右
void PreOrderTraversal(BinTree BT)
{
    if(BT){
        printf("%d\n",BT->Data);
        PreOrderTraversal(BT->Left);
        PreOrderTraversal(BT->Right);
    }
}

//中序遍历--左 根 右
void InOrderTraversal(BinTree BT)
{
    if(BT){
        PreOrderTraversal(BT->Left);
        printf("%d\n",BT->Data);
        PreOrderTraversal(BT->Right);
    }
}

//后序遍历--左 右 根
void PostOrderTraversal(BinTree BT)
{
    if(BT){
        PreOrderTraversal(BT->Left);
        PreOrderTraversal(BT->Right);
        printf("%d\n",BT->Data);
    }
}


//非递归先序遍历--根 左 右
void PreOrderTraversal(BinTree BT)
{
    BinTree T = BT;
    Stack S = CreatStack(MaxSize);  //创建并初始化堆栈S
    while(T || !IsEmpty(S)){
        while(T){                   //一直向左并将沿途结点压入堆栈
            Push(S,T);      //一
            printf("%5d\n",T->Data);//(访问)打印结点
            T = T->Left;
        }
        if(!IsEmpty(S)){
            T = Pop(S);     //二    //结点弹出堆栈
            T = T->Right;           //转向右子树
        }
    }
}

//非递归中序遍历--左 根 右
void InOrderTraversal(BinTree BT)
{
    BinTree T = BT;
    Stack S = CreatStack(MaxSize);  //创建并初始化堆栈S
    while(T || !IsEmpty(S)){
        while(T){                   //一直向左并将沿途结点压入堆栈
            Push(S,T);      //一
            T = T->Left;
        }
        if(!IsEmpty(S)){
            T = Pop(S);     //二    //结点弹出堆栈
            printf("%5d\n",T->Data);//(访问)打印结点
            T = T->Right;           //转向右子树
        }
    }
}

//非递归后序遍历--左 右 根
void PostOrderTraversal(BinTree BT)
{
    
}


//层序遍历
void LevelOrderTraversal(BinTree BT)
{
    Queue Q;
    BinTree T;
    if( !BT )                   //若为空树直接返回
        return;
    Q = CreatQueue(MazSize);    //创建并初始化队列Q；
    AddQ( Q,BT );
    while( !IsEmpty (S) ){ 
        T = DeleteQ( Q );
        printf("%d\n",T->Data); //访问并取出队列结点
        if( T->Left )
            AddQ( Q, T->Left );
        if( T->Right )
            AddQ( Q, T->Right );
    }

}
