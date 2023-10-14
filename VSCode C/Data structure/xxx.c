/*-----------------------------------------------------------
  Name: 二叉树的遍历
  Copyleft: huaying1988.com
  Author: huaying1988.com
  Date: 03-07-08 11:33
  Description: 
【问题描述】
设计一个程序演示在二叉树上进行三种遍历的过程。
【基本要求】
（1）从键盘上输入二叉树的每一个结点，演示二叉树T的建立过程。
（2）演示各种遍历的遍历过程。
-----------------------------------------------------------*/
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//Status 是函数的类型，其值是函数结果状态代码
typedef int Status;
typedef int ElemType;//定义元素类型 
//-----------------—栈的顺序存储结构 定义 开始—————-----------------------
typedef long SElemType;
#define STACK_INIT_SIZE 100//存储空间初始分配量
#define STACKINCREMENT 100//存储空间分配增量
typedef struct{ 
    SElemType * base;//在栈构造之前和销毁之后，base的值为NULL
    SElemType *top;//栈顶指针
    int stacksize;//当前已分配的存储空间，以元素为单位
}SqStack;
//-------------------------------栈的顺序存储结构 定义 结束---------------------
//------------------—栈的顺序存储结构 基本操作的实现   开始--------------------
Status InitStack(SqStack &S){
//构造一个空栈S
    S.base=(SElemType *)malloc(STACK_INIT_SIZE *sizeof(SElemType));
    if(!S.base)exit(OVERFLOW);//存储分配失败
    S.top=S.base;
    S.stacksize=STACK_INIT_SIZE;
    return OK;
}//InitStack
Status ClearStack(SqStack &S)//把S置为空栈
{
    if(S.top=S.base)
        return OK;
    else
        return ERROR;
}//ClearStack
Status StackEmpty(SqStack S)
{//若栈S为空栈，则返回TRUE,否则返回FALSE
    if(S.top==S.base)
        return TRUE;
    else 
        return FALSE;
}//StackEmpty
int StackLenth(SqStack &S)
{//返回S的元素个数，即栈的长度
    return S.top-S.base;
}//StackLenth
Status StackTraverse(SqStack &S,Status(*visit)(SElemType &e))
{//从栈底到栈顶依次对栈中每一个元素调用函数visit(),一旦visit()失败，则返回ERROR
    SElemType *p;
    for(p=S.base;p!=S.top;p++)
    {
        if(!visit( (*p) ))return ERROR;
    }//for
    return OK;
}//StackTraverse
Status GetTop(SqStack S,SElemType &e){
    //若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
    if(S.top==S.base)return ERROR;
    e=*(S.top-1);
    return OK;
}//GetTop
Status Push(SqStack &S,SElemType e){
    //插入元素e为新的栈顶元素
    if(S.top-S.base>=S.stacksize){
    //栈满，追加存储空间
        S.base=(SElemType *)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(SElemType));
        if(!S.base)exit(OVERFLOW);//存储分配失败
        S.top=S.base+S.stacksize;
        S.stacksize+=STACKINCREMENT;
    }//if
    *S.top++ =e;
    return OK;
}//Push
Status Pop(SqStack &S,SElemType &e)
{//若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR
    if(S.top==S.base)
        return ERROR;
    e=* --S.top;
    return OK;
}//Pop
void DestroyStack(SqStack &S)//销毁栈S
{
    if(!S.base)free(S.base);
    S.base=NULL;
    S.top=NULL;
    S.stacksize=0;
}//DestroyStack
Status PutElem(SElemType &e)//输出元素e
{
    if(putchar(e))
        return OK;
    else 
        return ERROR;
}//PutElem
void PrintStack(SqStack & S)
{//从栈底依次显示栈中的所有元素，不对栈作任何修改
    StackTraverse(S,PutElem);
    putch('\n');
}//PrintStack
//--------------栈的顺序存储结构 基本操作的实现   结束--------------------------
//------------------循环队列--队列的顺序存储结构  定义 开始---------------------
#define MAXQSIZE 16384//队列的最大容量 
typedef struct{
    ElemType * data;//初始化的动态分配存储空间 
    int front;//头指针，若队列不空，指向队列头元素 
    int rear;//尾指针，若队列不空，指向队列尾元素 
}Queue;
//------------------循环队列--队列的顺序存储结构  定义 开始---------------------
//--------------循环队列--队列的顺序存储结构  基本操作 开始---------------------
Status InitQueue(Queue &Q)
{//构造一个空队列q 
    Q.data=(ElemType *)malloc(MAXQSIZE*sizeof(ElemType));
    if(!Q.data)exit(OVERFLOW);//存储分配失败 
    Q.front=0;
    Q.rear=0;
    return OK;
}//InitQueue
Status DestroyQueue(Queue &Q)
{//销毁队列
    if(Q.data)free(Q.data);        
}
int QueueLenth(Queue Q)
{//返回Q的元素个数，即队列长度
    return (Q.rear-Q.front+MAXQSIZE)%MAXQSIZE; 
}//QueueLenth
Status EnQueue(Queue &Q,ElemType e)
{//插入元素e为Q的新的队尾元素
    if((Q.rear+1)%MAXQSIZE==Q.front)return ERROR;//队列满
    Q.data[Q.rear]=e;
    Q.rear=(Q.rear+1)%MAXQSIZE;
    return OK; 
}//EnQueue
Status DeQueue(Queue &Q,ElemType &e)
{//若队列不空，则删除Q的队头元素，用e返回其值，并返回OK;
//否则返回ERROR
    if(Q.front==Q.rear)return ERROR;//队空 
    e=Q.data[Q.front];
    Q.front=(Q.front+1)%MAXQSIZE;
    return OK;
}
Status emptyQueue(Queue &Q)
{//返回队列是否为空 
    if(Q.front==Q.rear)return TRUE;//队空 
    else return FALSE;
}
Status fullQueue(Queue &Q)
{//返回队列是否已满
     if((Q.rear+1)%MAXQSIZE==Q.front)return TRUE;//队列满
     else return FALSE;
}
//------------------循环队列--队列的顺序存储结构  基本操作 结束-----------------
//--------------------二叉树的二叉链表存储表示 开始-----------------------------
typedef struct BiTNode{
    ElemType data;//数据元素
    struct BiTNode *lchild,*rchild;//左右孩子指针
}BiTNode,*BiTree;
//--------------------二叉树的二叉链表存储表示 结束-----------------------------
//------------------------二叉树基本操作实现   开始-----------------------------
#define MAXLAYER 15//最大层次
int lmark[MAXLAYER];//此层是否结束的标志，用于二叉树的输出 
Status output(ElemType &e)
{//输出二叉树结点，用做遍历函数 
    putch(e);
    return OK;    
}//output
Status CreateBiTree(BiTree &T,int n)
{//按先序输入二叉树中节点的值，空格字符表示空树，构造二叉链表表示的二叉树T,首次调用n为0
    int i;
    char a;
    if(n>=MAXLAYER)a=' ';
    else a=getch();
    while(!(a>=32&&a<=126))a=getch();
    if(a!=' '){
        putch(a);
        printf("\n");
        T=(BiTree)malloc(sizeof(BiTNode));
        T->data=a;
        for(i=0;i<n;i++){
            if(lmark[i]==0)printf("│  ");
            else printf("    ");
        }//for
        printf("├─");
        lmark[i]=0;
        CreateBiTree(T->lchild,n+1);
        for(i=0;i<n;i++){
            if(lmark[i]==0)printf("│  ");
            else printf("    ");
        }//for
        printf("└─");
        lmark[i]=1;
        CreateBiTree(T->rchild,n+1);
    }//if
    else{
        printf("无\n");
        T=NULL;
    }//else
    return OK;
}//CreateBiTree
void DestroyTree(BiTree &T)
{//销毁二叉树
    if(T){
        if(T->lchild)DestroyTree(T->lchild);
        if(T->rchild)DestroyTree(T->rchild);
        free(T);
    }
}//DestroyTree
Status PreOrderTraverse(BiTree T,Status(*visit)(ElemType &e))
{//采用二叉链表存储结构，vist是对节点操作的应用函数
//先序遍历二叉树T，对每个节点调用函数Visit一次且仅一次
//一旦visit()失败，则操作失败    
//递归算法 
    if(T){
        if(visit(T->data))
            if(PreOrderTraverse(T->lchild,visit))
                if(PreOrderTraverse(T->rchild,visit))
                    return OK;
        return ERROR;
    }//if
    else return OK;
}//PreOrderTraverse
Status InOrderTraverse(BiTree T,Status(*visit)(ElemType &e))
{//采用二叉链表存储结构，vist是对节点操作的应用函数
//中序遍历二叉树T，对每个节点调用函数Visit一次且仅一次
//一旦visit()失败，则操作失败    
//递归算法 
    if(T){
        if(InOrderTraverse(T->lchild,visit))
            if(visit(T->data))
                if(InOrderTraverse(T->rchild,visit))
                    return OK;
        return ERROR;
    }//if
    else return OK;
}//InOrderTraverse
Status PostOrderTraverse(BiTree T,Status(*visit)(ElemType &e))
{//采用二叉链表存储结构，vist是对节点操作的应用函数
//后序遍历二叉树T，对每个节点调用函数Visit一次且仅一次
//一旦visit()失败，则操作失败    
//递归算法 
    if(T){
        if(PostOrderTraverse(T->lchild,visit))
            if(PostOrderTraverse(T->rchild,visit))
                if(visit(T->data))
                    return OK;
        return ERROR;
    }//if
    else return OK;
}//InOrderTraverse
Status LevelOrderTraverse(BiTree T,Status(*visit)(ElemType &e))
{//采用二叉链表存储结构，vist是对节点操作的应用函数
//层次遍历二叉树T，对每个节点调用函数Visit一次且仅一次
//一旦visit()失败，则操作失败
    Queue q;
    BiTree b;
    InitQueue(q);
    if(T)EnQueue(q,(long)T);
    while(!emptyQueue(q)){
    //    printf("1\n");
        if(DeQueue(q,(int &)b)){
                if(visit(b->data)){
                    if(b->lchild)EnQueue(q,(long)b->lchild);
                    if(b->rchild)EnQueue(q,(long)b->rchild);
                }//if(visit)
            }//if(DeQueue)
        }//while
    DestroyQueue(q);
    return OK;
}//LevelOrderTraverse
Status preOrderTraverse(BiTree T,Status(* visit)(ElemType &e))
{//采用二叉链表存储结构,visit是对数据元素操作的应用函数
//先序遍历二叉树T的非递归算法，对每个数据元素调用函数visit
//递归算法 
    SqStack S;InitStack(S);BiTree p=T;
    while(p||!StackEmpty(S)){
        if(p){ 
            if(!visit(p->data))
                    return ERROR;
            Push(S,(SElemType)p);
            p=p->lchild;
        }//if(p)根指针进栈，遍历左子树 
        else{//根指针退栈，访问根节点，遍历右子树 
            Pop(S,(SElemType &)p);    
            p=p->rchild;            
        }//else
    }//while
    return OK;
}//preOrderTraverse
Status inOrderTraverse(BiTree T,Status(* visit)(ElemType &e))
{//采用二叉链表存储结构,visit是对数据元素操作的应用函数
//中序遍历二叉树T的非递归算法，对每个数据元素调用函数visit
//非递归算法 
    SqStack S;InitStack(S);BiTree p=T;
    while(p||!StackEmpty(S)){
        if(p){Push(S,(SElemType)p);p=p->lchild;}//根指针进栈，遍历左子树 
        else{//根指针退栈，访问根节点，遍历右子树 
            Pop(S,(SElemType &)p);
            if(!visit(p->data))return ERROR;
            p=p->rchild;
        }//else
    }//while
    return OK;
}//inOrderTraverse
Status postOrderTraverse(BiTree T,Status(* visit)(ElemType &e))
{//采用二叉链表存储结构,visit是对数据元素操作的应用函数
//后序遍历二叉树T的非递归算法，对每个数据元素调用函数visit
//非递归算法 
    SqStack S;InitStack(S);BiTree p=T,pre=NULL;
    while(p||!StackEmpty(S)){
        while(p){//根指针进栈，遍历左子树         
            Push(S,(SElemType)p);
            p=p->lchild;
        }//while
        GetTop(S,(SElemType&)p);            
        //如果p没有右孩子或者其右孩子刚刚被访问过
        if(p->rchild==NULL||p->rchild==pre)
        {
            if(!visit(p->data))return ERROR;
            Pop(S,(SElemType &)p);
            pre=p;
            p=NULL;
        }//if
        else p=p->rchild;
    }//while
    return OK; 
}//postOrderTraverse
void printBiTree(BiTree T,int n)
{//将二叉树以树的结构输出,首次调用n为0
//模式1，实线为左子树，虚线为右子树 
    int i;
    if(T){
        printf("%c\n",T->data);
        if(T->lchild){
            for(i=0;i<n;i++){
                if(lmark[i]==0)printf("┆  ");
                else printf("   ");
            }//for
            if(T->rchild){
                printf("├─");
                lmark[n]=0;
            }//if(T->rchild)
            else{
                printf("└─");
                lmark[n]=1;
            }//else
            printBiTree(T->lchild,n+1);
        }//if(T->lchild)
        if(T->rchild){
            for(i=0;i<n;i++){
                if(lmark[i]==0)printf("┆  ");
                else printf("   ");
            }//for
            printf("└┄");
            lmark[n]=1;
            printBiTree(T->rchild,n+1);
        }//if(T->rchild)
    }
}//printBiTree
void printBiTree2(BiTree T,int n)
{//将二叉树以树的结构输出,首次调用n为0
//模式2，先左子树后右子树，没有显示空 
    int i;
    if(n>MAXLAYER)return;
    if(T)
    {
        printf("%c\n",T->data);
        if(T->rchild||T->lchild){
            for(i=0;i<n;i++){
                if(lmark[i]==0)printf("│  ");
                else printf("   ");
            }//for    
            printf("├─");
            lmark[n]=0;
            printBiTree2(T->lchild,n+1);
            //目的是为左右子树清晰 
            for(i=0;i<n;i++){
                if(lmark[i]==0)printf("│  ");
                else printf("   ");
            }//for
            printf("└┄");
            lmark[n]=1;
            printBiTree2(T->rchild,n+1);
        }//if
        lmark[n]=1;
    }//if(T)
    else printf("空\n");
}//printBiTree2
//------------------—栈的顺序存储结构 基本操作的实现   结束--------------------
//------------------------------命令及界面 函数 定义 开始-----------------------
char *precmd="HhCcOoTtUuVvWwLlXxYyZzAaRrEe\033";
int isCmd(char cmd)
{//判断是否为命令
    int i;
    for(i=0;precmd[i]!='\0';i++)
    {
        if(precmd[i]==cmd)return 1;
    }
    return 0;
}
void Pause()
{//按任意键继续
    printf("\n按任意键继续……\n");
    getch();
}//Pause
void Goodbye(BiTree &t)
{//显示结束画面，并结束程序
    DestroyTree(t);//用完销毁 
    system("cls");
    printf("\n\n\n\n\t\t\tGoodbye\n\n");
    printf("\t\t\t\t******CopyLeft#WrittenBy井长江******\n\n");
    Pause();//按任意键继续
    exit(0);
}//Goodbye
void Help()
{//命令帮助 
    printf("命令说明：\n\
    h/H(help)----------命令帮助\n\
    c/C(create)--------建立/重建二叉树\n\
    o/O(output)--------以模式一输出二叉树(实线为左子树，虚线为右子树)\n\
    t/T(type)----------以模式二输出二叉树(先左子树后右子树，没有显示空)\n\
    u/U----------------先序遍历二叉树(递归算法)\n\
    v/V----------------中序遍历二叉树(递归算法)\n\
    w/W----------------后序遍历二叉树(递归算法)\n\
    r/R(result)--------输出二叉树同时显示四种遍历结果\n\
    x/X----------------先序遍历二叉树(非递归算法)\n\
    y/Y----------------中序遍历二叉树(非递归算法)\n\
    z/Z----------------后序遍历二叉树(非递归算法)\n\
    l/L(level)---------层次遍历二叉树\n\
    a/A(all)-----------输出二叉树同时显示四种遍历结果\n\
    e/E(exit)----------退出\n");    
}//Help
void OpenScreen()
{//开始画面
    system("color f0");
    system("title 二叉树遍历演示程序 WrittenBy 井长江");
    printf("\n\n\n\t\t\t二叉树遍历演示程序\n");
    printf("\t\t\t信息学院 信管07-2\n");
    printf("\t\t\thuaying1988.com学号:0701051307\n");
    printf("\n\t说明：\n\
    演示二叉树的先序，中序，后序，层次的递归与非递归遍历\n");    
    printf("\t\t\t\t******CopyLeft#WrittenBy井长江******\n\n");
    Pause();
    system("cls");
    Help();
}//OpenScreen
void CMDtran(char c,BiTree &t)
{//解释命令并执行 
    putch('\n');
    //char o;
    switch(c)
    {
        case 'H'://pass through
        case 'h'://命令帮助 
            Help();
            break;
           case 'C'://pass through
        case 'c'://建立重建二叉树
            if(t){
                printf("二叉树已存在，是否重建？(y/*)\n");
                //do{o=getch()}while(o!='y'||o!='n');                        
                if(getch()=='y')
                {
                    DestroyTree(t);    
                    printf("构建一棵二叉树（请依提示依次输入节点）：\n");
                    CreateBiTree(t,0);    
                }//if(getch)
                else{
                    printf("用户撤销重建\n");    
                }//else        
            }//if(t) 
            else{
                printf("构建一棵二叉树（请依提示依次输入节点）：\n");
                CreateBiTree(t,0);
            }//else 
            break;
        case 'o'://pass through
        case 'O'://以模式一输出二叉树(实线为左子树，虚线为右子树)
            printf("以模式1输出二叉树，实线为左子树，虚线为右子树:\n");
            printBiTree(t,0);
            break;
        case 't'://pass through
        case 'T'://以模式二输出二叉树(先左子树后右子树，没有显示空)
            printf("以模式2输出二叉树，先左子树后右子树，没有显示空:\n");
            printBiTree2(t,0);
            break;
        case 'u'://pass through
        case 'U'://先序遍历二叉树(递归算法)
            printf("先序遍历二叉树(递归)：\n");
            PreOrderTraverse(t,output);
            putch('\n');
            break;
        case 'v'://pass through
        case 'V'://中序遍历二叉树(递归算法)
            printf("中序遍历二叉树(递归)：\n");
            InOrderTraverse(t,output);
            putch('\n');
            break;
        case 'W'://pass through
        case 'w'://后序遍历二叉树(递归算法)
            printf("后续遍历二叉树(递归)：\n");
            PostOrderTraverse(t,output);
            putch('\n');
            break;
        case 'l'://pass through
        case 'L'://层次遍历二叉树
            printf("层次遍历二叉树：\n");
            LevelOrderTraverse(t,output);
            putch('\n');
            break;
        case 'x'://pass through
        case 'X'://先序遍历二叉树(非递归算法)
            printf("先序遍历二叉树(非递归)：\n");
            preOrderTraverse(t,output);
            putch('\n');
            break;
        case 'Y'://pass through
        case 'y'://中序遍历二叉树(非递归算法)
            printf("中序遍历二叉树(非递归)：\n");
            inOrderTraverse(t,output);
            putch('\n');
            break;
        case 'z'://pass through
        case 'Z'://后序遍历二叉树(非递归算法)
            printf("后续遍历二叉树(非递归)：\n");
            postOrderTraverse(t,output);
            putch('\n');
            break;
        case 'a'://pass through
        case 'A'://输出二叉树同时显示四种遍历结果
            printf("输出二叉树：\n");
            printBiTree2(t,0);
            printf("层次遍历二叉树：\n");
            LevelOrderTraverse(t,output);
            putch('\n');
            printf("先序遍历二叉树(非递归)：\n");
            preOrderTraverse(t,output);
            putch('\n');
            printf("中序遍历二叉树(非递归)：\n");
            inOrderTraverse(t,output);
            putch('\n');
            printf("后续遍历二叉树(非递归)：\n");
            postOrderTraverse(t,output);
            putch('\n');
            break;
        case 'r'://pass through
        case 'R'://输出二叉树同时显示四种遍历结果
            printf("输出二叉树：\n");
            printBiTree(t,0);
            printf("层次遍历二叉树：\n");
            LevelOrderTraverse(t,output);
            putch('\n');
            printf("先序遍历二叉树(递归)：\n");
            PreOrderTraverse(t,output);
            putch('\n');
            printf("中序遍历二叉树(递归)：\n");
            InOrderTraverse(t,output);
            putch('\n');
            printf("后续遍历二叉树(递归)：\n");
            PostOrderTraverse(t,output);
            putch('\n');
            break;
        case  27://pass through
        case 'e'://pass through
        case 'E'://退出 
            Goodbye(t);
            break;
        default://其他输入 
            printf("不能识别的命令\n");
    }//switchn cmd;    
}//CMDtran
char inCMD()
{//命令输入函数 
    char cmd;
    printf("h-help,e-exit|cmd>");
    do{cmd=getch();}while(!isCmd(cmd));
    putch(cmd);
    return cmd;
} 
//-----------------------------命令及界面 函数 定义 结束-----------------------
//----------------------------主函数 开始---------------------------------------
int main(){
    BiTree t=NULL;
    char cmd;
//    printf("%d\n",'-');
    OpenScreen();
    do{
        printf("\n");
        cmd=inCMD();
        CMDtran(cmd,t);
    }while(1);
//    Goodbye(t);
}//main
//----------------------------主函数 结束---------------------------------------