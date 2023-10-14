#include<stdio.h>
#include<math.h>
#include<time.h>
#define N 10
//f(n)=a0+a1*x+a2*x^2+……+a(n-1)*x^(n-1)+an*x^n
//多项式求和


clock_t start,stop;
//clock_t是clock()函数返回的变量类型
double duration;
//记录被测函数运行时间/s

double f0(double arr[],double x, int n);
double f1(double arr[],double x, int n);
double timer0(double arr[]);
double timer1(double arr[]);
int main()
{
    double arr[N]={5,5,2,3,4,5,6,7,8,9};
    // f0(arr,2,(sizeof(arr)/4)-1);
    // f1(arr,2,(sizeof(arr)/4)-1);
    // f0(arr,2,N-1);
    // f1(arr,2,N-1);
    printf("%f\n",timer0(arr)/10000.0);
    printf("%f\n",timer1(arr)/10000.0); 
}

double f0(double arr[],double x, int n)//常规求值  时间复杂度T(n)=1+2+3+……+n=(n^2+n)/2=C1*n^2+C2*n
{
    double p=arr[0];
    for(int i=1; i<=n; i++)
        p+=(arr[i]*pow(x,i));
    printf("%f\n",p);
    return p;
}

double f1(double arr[],double x, int n)//张九韶算法  时间复杂度T(n)=n=C*n
{
    // double p=x*arr[n];
    // for(int i=n-1; i>=1; i--)
    //     p=x*(p+arr[i]);
    // printf("%f\n",p+arr[0]);
    // return p+arr[0];

    //优化
    double p=arr[n];
    for(int i=n; i>0; i--)
        p=arr[i-1]+x*p;

    printf("%f\n",p);
    return p;
}

double timer0(double arr[])
{
    start = clock();    //开始计时
    f0(arr,2,N-1);
    stop = clock();     //结束计时
    duration = ((double)(stop - start)*10000) / CLK_TCK;

    return duration;
}

double timer1(double arr[])
{
    start = clock();    //开始计时
    f1(arr,2,N-1);
    stop = clock();     //结束计时
    duration = ((double)(stop - start)*10000) / CLK_TCK;

    return duration;
}