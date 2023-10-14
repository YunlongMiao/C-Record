#include<stdio.h>
/*
给定N个整数的序列{A1，A2,……，An-1,An}
求f(i,j)=Max{0,A[i]+A[i+1]+……+A[j]}的最大值

求所有连续子列和中最大值
*/

int MaxSubseqSum1(int A[],int N);//T(N)=O(N^3)
int MaxSubseqSum2(int A[],int N);//算法优化 T(N)=O(N^3)
//算法3，待写
int MaxSubseqSum4(int A[],int N);//在线处理算法  T(N)=O(N)
int main()
{
    int arr[]={0,1,2,3,98,5,6,7,8,9};
    printf("%d\n",MaxSubseqSum1(arr,10));
    printf("%d\n",MaxSubseqSum2(arr,10));
    printf("%d\n",MaxSubseqSum4(arr,10));
}


int MaxSubseqSum1(int A[],int N)//T(N)=O(N^3)
{
    int ThisSum,MaxSum=0;
    int i,j,k;
    for(i = 0; i < N; i++){ //i是子列左端位置
        for(j = i; j < N; j++){ //j是子列右端位置
            ThisSum = 0;    //ThisSum是从A[i]到A[j]的子列和
            for(k = i; k <= j; k++)
                ThisSum += A[k];
                if(ThisSum > MaxSum)    //如果得到的这个子列和更大
                    MaxSum = ThisSum;   //则跟新结果           
        }//j循环结束
    }//i循环结束

    return MaxSum;
}

int MaxSubseqSum2(int A[],int N)//T(N)=O(N^3)
{
    int ThisSum,MaxSum=0;
    int i,j;
    for(i = 0; i < N; i++){ //i是子列左端位置
        ThisSum = 0;    //ThisSum是从A[i]到A[j]的子列和
        for(j = i; j < N; j++){ //j是子列右端位置
            ThisSum += A[j];
            //对于相同的i,不同的j,只要在j-1次循环的基础上累加1即可
            if(ThisSum > MaxSum)    //如果得到的这个子列和更大
                MaxSum = ThisSum;   //则跟新结果           
        }//j循环结束
    }//i循环结束

    return MaxSum;
}


int MaxSubseqSum4(int A[],int N)
{
    int ThisNum,MaxSum;
    int i;
    ThisNum = MaxSum = 0;
    for(i = 0; i < N; i++)
    {
        ThisNum += A[i];  //向右累加
        if(ThisNum > MaxSum)
            MaxSum = ThisNum;   //发现更大和则更新结果
        else if(ThisNum < 0)    //如果当前子列和为负
            ThisNum = 0;        //则不可能使后面的部分和增大，弃之
    }
    return MaxSum;
}
  