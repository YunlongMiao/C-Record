//����10-7 ������a�е�n���������෴˳����

#include<stdio.h>         
/*
void inv(int x[],int n)  //д��һ:�β�x�������� 
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
void inv(int *x,int n)   //д�������β�xΪָ����� / *x==����a����ôxָ��a�ĵ�ַ 
{
	int *p,*i,*j,tmp,m=(n-1)/2;
	i=x;		//a�ĵ�ַ�ļӼ� 
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

	
