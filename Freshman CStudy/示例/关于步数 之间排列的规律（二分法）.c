/*
СE�������������ҫ��������֪��������ҫ�Ǹ��ܿ�
0�����з�����������x���һ���СEҪ�ϵ�x������
��ǰ��λ����y�����ڽ��е�k�β��������������
1���ƶ���λ��y+k
2���ƶ���λ�� y-1
������ƶ�������ĸ������ϣ������ƶ�����x����
���룺һ��������������ʾ���˵�λ��(1<=x<=10000)
�����һ������������ʾ���ٲ�����
*/


#include<stdio.h>
int main()
{
	long long x;
	long long left = 1,right = 1e8, mid, k;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		left =1;right =1e8;
		scanf("%ld",&x);
		//���ַ�����k��ʹ������k(k+1)/2�պô��ڵ���x
	while(left<= right)
	{
		mid =(left +right) /2;
		if(mid*(mid +1) /2 <x)
		{
			left = mid+1;
		}
		else
		{
			 right = mid-1;
		}
    } 
    k = left;
    if(left *(left +1) /2 == x+1)                      
    {
    	k++;
	}
	printf("%ld\n",k);
	}
 } 
