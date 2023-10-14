#include<stdio.h>
#include<malloc.h>
//线性表 顺序

#define MAXSIZE 100
typedef int ElementType;  // ElementType 可定义为任意类型
typedef struct LNode* List;

// typedef struct PolyNode *Polynomial;
// coef expon link
// 系数 指数  指针域

// struct PolyNode{
//     int coef;
//     int expon;
//     Polynomial link;
// };

struct LNode{
    ElementType Data[MAXSIZE];  //数据位
    int Last;                   //长度位
};
List PtrL;
// struct LNode L;
// List PtrL;
//访问下标为i的元素：L.Data[i] 或者 PtrL->Data[i];
//线性表的长度：L.Last+1 或 PtrL->Last+1


//1.初始化（建立一个空的顺序表）
List MakeEmpty();
//2.查找
int Find(ElementType X,List PtrL);
//3.插入
void Insert(ElementType X,int i,List PtrL);
//4.删除
void Deldte(int i,List PtrL);



int main()
{
    int s;
    PtrL = MakeEmpty();
//    PtrL->Data[7]={0,2,4,6,8,10,12};
    Insert(50,0,PtrL);
    Insert(40,0,PtrL);
    Insert(30,1,PtrL);
    s = Find(30,PtrL);
    printf("%d\n",PtrL->Last+1);
    printf("%d\n",s);
}

//1.初始化（建立一个空的顺序表）
List MakeEmpty()
{
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL->Last = -1;
    return PtrL;
}

//2.查找
int Find(ElementType X,List PtrL)
{
    int i=0;
    while(i <= PtrL->Last && PtrL->Data[i] != X)
        i++;
    if(i > PtrL->Last)   //如果没找到，返回-1
        return -1;
    else
        return i;       //找到，返回i
}

//3.插入
void Insert(ElementType X,int i,List PtrL)
{
    int j;
    if(PtrL->Last == MAXSIZE-1){   //表空间已满，无法插入
        printf("表满");
        return;
    }

    if(i<0 || i > PtrL->Last+1){    //判断插入位置是否合法
        printf("插入位置不合法");
        return;
    }

    for(j = PtrL->Last; j >= i-1; j--)      
        PtrL->Data[j+1] = PtrL->Data[j];    //将ai~an倒序向后移动
    PtrL->Data[i] = X;                    //新元素插入
    PtrL->Last++;                           //Last仍指向最后元素
}

//4.删除
void Deldte(int i,List PtrL)
{
    int j;
    if(i < 1 || i > PtrL->Last+1){          //判断插入位置是否合法
        printf("插入位置不合法");
        return;
    }
    for(j = i-1; j < PtrL->Last; j++)       
        PtrL->Data[j] = PtrL->Data[j+1];    //将ai~an顺序向前移动
    PtrL->Last--;                           //Last仍指向最后元素
    return;
}