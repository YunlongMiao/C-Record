/*
小E最近沉迷王者荣耀，众所周知，王者荣耀是个跑酷
0处，敌方在正整数点x处挂机，小E要赶到x点送他
当前的位置是y，正在进行第k次操作，你可以做出
1）移动到位置y+k
2）移动到位置 y-1
你可以移动到数轴的负半轴上，试求移动到点x的最
输入：一个正整数×，表示敌人的位置(1<=x<=10000)
输出：一个正整数，表示最少操作数
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
		//二分法查找k，使其满足k(k+1)/2刚好大于等于x
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
