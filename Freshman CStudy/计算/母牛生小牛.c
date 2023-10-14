#include<stdio.h>
int number(int n,int f[])
{
    int i = 0;
    f[1] = 1;
    f[2] = 2;
    f[3] = 3;       //前三年只有一头牛生产
    for(i = 4;i <= n;i++)
    {
        f[i] = f[i-1] + f[i-3];  //从第四年开始，每年牛的数量为去年的牛加上新出生的小牛
    }
    return f[n];
}
int main()
{
    int n[55] = {0};
    int f[55] = {0};
    int i = 0;
    int k = 0;
    for(i = 0;i < 55;i++)
    {
        scanf("%d",&n[i]);
        if (n[i] == 0)
        {
            break;
        }                 //判断输入数据是否结束
        k++;              //k为数据的个数
    }
    for(i = 0;i < k;i++)
    {
        printf("%d\n",number(n[i],f)); //调用函数输出结果
    }
    return 0;
}
