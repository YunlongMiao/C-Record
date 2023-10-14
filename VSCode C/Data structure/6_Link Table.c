#include<stdio.h>
#include<malloc.h>
//链表


typedef int ElementType;
typedef struct LNode *List;

struct LNode{
    ElementType Data;   //数据域
    List Next;          //下一个数据地址
};
List PtrL;


List MakeEmpty();        //初始化（建立一个空的顺序表）
int Length(List PtrL);   //求表长    O(n)
List FindKth(int K,List PtrL);   //按序号查找
List Find(ElementType X,List PtrL);  //按值查找
List Insert(ElementType X,int i,List PtrL);  //插入操作实现
List Delete(int i,List PtrL);     //删除

int main()
{
    PtrL = MakeEmpty();
    printf("%d\n",PtrL);
    PtrL = Insert(50,1,PtrL);
    PtrL = Insert(40,1,PtrL);
    PtrL = Insert(30,1,PtrL);
    printf("第二个结点值为%d\n",FindKth(2,PtrL)->Data);
//    printf("%d是否在链表中%d\n",30,Find(30,PtrL));    //存在返回指针
    printf("%d是否在链表中%d\n",60,Find(60,PtrL));
    printf("链表长%d\n",Length(PtrL));
}



List MakeEmpty()        //1.初始化（建立一个空的顺序表）
{
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL = NULL;
    return PtrL;
}


int Length(List PtrL)   //求表长    O(n)
{
    int i=0;
    List p = PtrL; //p指向表的第一个结点
    while(p)
    {
        p = p->Next;
        i++;           //当前p指向的是第i个结点
    }
    return i;
}


List FindKth(int K,List PtrL)   //按序号查找
{
    int i=1;
    List p = PtrL;
    while(p != NULL && i<K){
        p = p->Next;
        i++;
    }
    if(i==K)
        return p;
    else
        return NULL;
}

List Find(ElementType X,List PtrL)  //按值查找
{
    List p = PtrL;
    while(p != NULL && p->Data != X)
        p = p->Next;
    return p;
}

List Insert(ElementType X,int i,List PtrL)  //插入操作实现
{
    List p,s;
    if(i == 1){ //如果插入位置在表头
        s = (List)malloc(sizeof(struct LNode)); //申请、装填结点
        s->Data = X;
        s->Next = PtrL;
        return s;
    }

    p = FindKth(i-1,PtrL);
    if(p==NULL){
        printf("参数i错误\n");
        return NULL;
    }
    else{
        s = (List)malloc(sizeof(struct LNode));//申请、装填结点
        s->Data = X;
        s->Next = p->Next;  //新节点插入在第i-1个结点后面
        p->Next = s;
        return PtrL;
    }
}

List Delete(int i,List PtrL)     //删除
{
    List p,s;
    if(i==1){
        s = PtrL;
        if(PtrL != NULL)
            PtrL = PtrL->Next;
        else
            return NULL;    
        free(s);                //释放内存
        return PtrL;
    }
    p = FindKth(i-1,PtrL);      //查找第i-1个结点，返回指针
    if(p == NULL){
        printf("第%d个结点不存在\n",i-1);
        return NULL;
    }
    else if(p->Next == NULL){
        printf("第%d个结点不存在\n",i);
        return NULL;
    }
    else{
        s = p->Next;            //s指向第i个结点
        p->Next = s->Next;      //删除第i个结点
        free(s);                //释放
        return PtrL;
    }
}

