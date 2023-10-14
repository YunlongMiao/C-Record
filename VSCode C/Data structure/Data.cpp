#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define MAX_SIZE 1000
typedef int Data;


//树的结构体
typedef struct Node
{
	struct Node* left;
	struct Node* right;
	Data val;
}*LNode, Node;

typedef LNode Status;
//栈的结构体
typedef struct Stack
{
	Status* base;
	Status* top;
	int stacksize;
}Stack;
//队列结构体
typedef struct Queue
{
	Status* base;
	int front;
	int rear;
}Queue;


void InitTree(LNode* tree);//非递归算法初始化树,先序遍历创建树
void PreOrderTraverse(LNode root);//非递归先序遍历
void InOrderTraverse(LNode root);//非递归中序遍历
void PostOrderTraverse(LNode root);//非递归后序遍历
void HierarchicalTraversal(LNode root);//二叉树层次遍历
int Depth(LNode root);//返回树的深度
void Degree(LNode root, int* z, int* o, int* t);//得到度分别为0,1,2的数量
void test();//菜单界面


//初始化栈
void InitStack(Stack* st)
{
	st->base = (Status*)malloc(MAX_SIZE * sizeof(Status));
	st->stacksize = MAX_SIZE;
	st->top = st->base;
}
//入栈
void Push(Stack* st, Status e)
{
	if (st->top - st->base != st->stacksize)
	{
		*st->top = e;
		st->top++;
	}
}
//出栈
void Pop(Stack* st)
{
	if (st->base != st->top)
	{
		st->top--;
	}
}
//返回栈顶元素
Status GetTop(Stack st)
{
	if (st.base != st.top)
		return *--st.top;
	return NULL;
}
//判断是否栈空
int StackEmpty(Stack st)
{
	if (st.base == st.top)
		return 1;
	return 0;
}
//初始化队列
void InitQueue(Queue* qu)
{
	qu->base = (Status*)malloc(MAX_SIZE * sizeof(Status));
	qu->front = 0;
	qu->rear = 0;
}//入队
void EnQueue(Queue* qu, Status e)
{
	if ((qu->rear + 1) % MAX_SIZE != qu->front)
	{
		qu->base[qu->rear] = e;
		qu->rear = (qu->rear + 1) % MAX_SIZE;
	}
}
//出队
void DeQueue(Queue* qu)
{
	if (qu->front != qu->rear)
	{
		qu->front = (qu->front + 1) % MAX_SIZE;
	}
}
//返回队首元素
Status GetHead(Queue qu)
{
	if (qu.front != qu.rear)
	{
		return qu.base[qu.front];
	}
	return NULL;
}
//判断队列是否为空
int QueueEmpty(Queue qu)
{
	if (qu.front != qu.rear)
		return 1;
	return 0;
}
//非递归算法初始化树,先序遍历创建树
void InitTree(LNode* tree)
{
	Data val;
	scanf("%d", &val);
	LNode root;
	if (val == -1)
	{
		root = NULL;
	}
	else
	{
		root = (LNode)malloc(sizeof(Node));
		root->val = val;
		InitTree(&root->left);
		InitTree(&root->right);
	}
	*tree = root;
}
//非递归先序遍历
void PreOrderTraverse(LNode root)
{
	Stack st;
	InitStack(&st);
	LNode top = root;
	while (!StackEmpty(st)||top)
	{
		while (top)
		{
			printf("%d ", top->val);
			Push(&st, top);
			top = top->left;
		}
		if (!StackEmpty(st))
		{
			top = GetTop(st);
			Pop(&st);
			top = top->right;
		}
	}
	printf("\n");
}
//非递归中序遍历
void InOrderTraverse(LNode root)
{
	Stack st;
	InitStack(&st);
	LNode top = root;
	while (!StackEmpty(st) || top)
	{
		while (top)
		{
			Push(&st, top);
			top = top->left;
		}
		if (!StackEmpty(st))
		{
			top = GetTop(st);
			Pop(&st);
			printf("%d ", top->val);
			top = top->right;
		}
	}
	printf("\n");
}
//非递归后序遍历
void PostOrderTraverse(LNode root)
{
	Stack st,st2;
	InitStack(&st);
	InitStack(&st2);
	LNode top = root;
	while (!StackEmpty(st) || top)
	{
		while (top)
		{
			Push(&st, top);
			Push(&st2, top);
			top = top->right;
		}
		if (!StackEmpty(st))
		{
			top = GetTop(st);
			Pop(&st);
			top = top->left;
		}
	}
	while (!StackEmpty(st2))
	{
		top = GetTop(st2);
		printf("%d ", top->val);
		Pop(&st2);
	}
	printf("\n");
}
//二叉树层次遍历
void HierarchicalTraversal(LNode root)
{
	LNode Head = root;
	Queue qu;
	InitQueue(&qu);
	EnQueue(&qu, Head);
	while (!QueueEmpty(qu) || Head)
	{
		if (Head)
		{
			printf("%d ", Head->val);
			EnQueue(&qu, Head->left);
			EnQueue(&qu, Head->right);
			
		}
		DeQueue(&qu);
		Head = GetHead(qu);
	}
	printf("\n");
}
//返回树的深度
int Depth(LNode root)
{
	if (root == NULL)
		return 0;
	else
	{
		int m = Depth(root->left) + 1;
		int n = Depth(root->right) + 1;
		return m > n ? m : n;
	}
}
//得到度分别为0,1,2的数量
void Degree(LNode root, int* z, int* o, int* t)
{
	if (root == NULL)
		return;
	else
	{
		if (root->left != NULL && root->right != NULL)
			(*t)++;
		else if (root->left == NULL && root->right == NULL)
			(*z)++;
		else
			(*o)++;
		Degree(root->left,z,o,t);
		Degree(root->right,z,o,t);
	}
}
void test()
{
	LNode root = NULL;
	while (1)
	{
		printf("1.创建二叉树\n");
		printf("2.先序遍历\n");
		printf("3.中序遍历\n");
		printf("4.后序遍历\n");
		printf("5.树的深度\n");
		printf("6.二叉树的层次遍历\n");
		printf("7.不同度的节点个数\n");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("输入数据：\n");
			InitTree(&root);
			break;
		case 2:
			printf("先序遍历为:\n");
			PreOrderTraverse(root);
			break;
		case 3:
			printf("中序遍历为:\n");
			InOrderTraverse(root);
			break;
		case 4:
			printf("后序遍历为:\n");
			PostOrderTraverse(root);
			break;
		case 5:
			printf("树的深度为:%d\n", Depth(root));
			break;
		case 6:
			printf("二叉树的层次遍历为:\n");
			HierarchicalTraversal(root);
			break;
		case 7:
			int z = 0, o = 0, t = 0;
			Degree(root, &z, &o, &t);
			printf("度为1的节点个数为:%d\n", o);
			printf("度为2的节点个数为:%d\n", t);
			printf("叶子节点个数为:%d\n", z);
		}
		system("pause");
		system("cls");
	}
}
int main()
{
	test();
	return 0;
}
/*
1 2 3 -1 -1 4 -1 -1 5 -1 -1
*/