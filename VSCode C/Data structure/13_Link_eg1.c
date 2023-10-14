#include<stdio.h>
#include<malloc.h>
#include<string.h>

//一元多项式的加和乘
//一种比较好的方法是动态数组
//VS code 无法运行，爆内存

typedef struct PolyNode *Polynomial;

struct PolyNode{
    int coef;           //系数
    int expon;          //指数
    Polynomial link;    //指针
};



void Attach(int c,int e,Polynomial *pRear);
Polynomial ReadPoly();//输入一个多项式
Polynomial PolyAdd(Polynomial P1,Polynomial P2);//多项式相加
Polynomial Mult(Polynomial P1,Polynomial P2);//多项式相乘
void PrintPoly(Polynomial P);//输出多项式

int com_pare(int i,int j){
    if(i>j)
        return 1;
    else if(i<j)
        return -1;
    else 
        return 0;
}
int main()
{
    Polynomial P1,P2,PP,PS;
    P1 = ReadPoly();
    P2 = ReadPoly();
    PP = PolyAdd(P1,P2);
    PrintPoly(PP);
    PS = Mult(P1,P2);
    PrintPoly(PS);

    return 0;
}


void Attach(int c,int e,Polynomial *pRear)
{
    Polynomial P;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->coef = c;        //对新结点赋值
    P->expon = e;
    P->link = NULL;
    (*pRear)->link = P;
    (*pRear) = P;       //更新*pRear的值
}


Polynomial ReadPoly()//输入两个多项式
{
    Polynomial P,t,rear;
    int c,e,N;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->link = NULL;
    rear = P;
    scanf("%d",&N);
    while(N--){
        scanf("%d%d",&c,&e);
        Attach(c,e,&rear);      //将当前项插入多项式尾部
    }
    t = P;
    P = P->link;
    free(t);
    return P;
}

Polynomial PolyAdd(Polynomial P1,Polynomial P2)//多项式相加
{
    Polynomial front,rear,temp;
    int sum;
    rear = (Polynomial)malloc(sizeof(struct PolyNode));
    front = rear;   //由front记录结果多项式链表头结点
    while(P1 && P2) //当两个多项式都有非零项待处理时
    {
        switch (com_pare(P1->expon,P2->expon))
        {
        case 1:
            Attach(P1->coef,P1->expon,&rear);
            P1 = P1->link;
            break;
        case -1:
            Attach(P2->coef,P2->expon,&rear);
            P2 = P2->link;
            break;
        case 0:
            sum = P1->coef + P2->coef;
            Attach(sum,P1->expon,&rear);
            P1 = P1->link;
            P2 = P2->link;
            break;                   
        }
        //将未处理完的另一个多项式的所有结点依次复制到结点多项式中
        for( ; P1; P1->link)
            Attach(P1->coef,P1->expon,&rear);
        for( ; P2; P2->link)
            Attach(P2->coef,P2->expon,&rear);
        rear->link = NULL;
        temp = front;
        front = front->link;    //令front指向结果多项式的第一个非零项
        free(temp);             //释放临时空表头结点
        return front;
    }
}

Polynomial Mult(Polynomial P1,Polynomial P2)//多项式相乘
{
    Polynomial P,rear,t1,t2,t;
    int c,e;
    if(!P1 || !P2)
        return NULL;
    t1 = P1;
    t2 = P2;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->link = NULL;
    rear = P;
    while(t2){      //用P1的第一项乘P2的所有项，得P
        Attach((t1->coef)*(t2->coef), (t1->expon)+(t2->expon),&rear);
        t2 = t2->link;
    }
    while(t1){
        t2 = P2;
        rear = P;
        while(t2){
            c = (t1->coef)*(t2->coef);
            e = (t1->expon)+(t2->expon);
            while((rear->link) && (rear->link->expon > e))  //如果结果多项式当前项的下一项指数<=插入项指数，结束循环
                rear = rear->link;
            if(rear->link && (rear->link->expon == e)){  //如果插入项指数与 结果多项式当前项的下一项 指数相等
                if(rear->link->coef+c)      //如果系数相加不为0
                    rear->link->coef += c;
                else{                       //如果系数相加为0
                    t = rear->link;
                    rear->link = t->link;   //为什么是rear->link，而不是rear
                    free(t);
                }
            }
            else{    //结果多项式当前项的下一项指数 小于 插入项指数
                t = (Polynomial)malloc(sizeof(struct PolyNode));
                t->coef = c;
                t->expon = e;
                t->link = rear->link;
                rear->link = t;
                rear = rear->link;
            }
        }
        t1 = t1->link;
    }
    t2 = P;
    P = P->link;
    free(t2);
    return P;
}


void PrintPoly(Polynomial P)//输出多项式
{
    int Tag=0;

    while(P){
        if(Tag)
            printf(" ");
        else
            Tag = 1;
        printf("%d %d\n",P->coef,P->expon);
        P = P->link;
    }
}