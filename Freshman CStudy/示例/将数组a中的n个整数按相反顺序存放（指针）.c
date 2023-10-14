//例题10-7 将数组a中的n个整数按相反顺序存放

#include<stdio.h>         
/*
void inv(int x[],int n)  //写法一:形参x是数组名 
{
	int tmp,i,j,m=(n-1)/2;
	for(i=0;i<=m;i++)
	{
		j=n-1-i;		
		tmp=x[i];
		x[i]=x[j];
		x[j]=tmp;
	}	
} 
*/
void inv(int *x,int n)   //写法二：形参x为指针变量 / *x==数组a，那么x指向a的地址 
{
	int *p,*i,*j,tmp,m=(n-1)/2;
	i=x;		//a的地址的加减 
	j=x+n-1;
	p=x+m;
	for(;i<=p;i++,j--)
	{
		tmp=*i;
		*i=*j;
		*j=tmp;
	}
}
int main()
{
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	inv(a,10);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}

	
