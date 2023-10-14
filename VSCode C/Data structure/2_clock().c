#include<stdio.h>
#include<time.h>

// clock():捕捉从程序开始运行到clock()被调用时所耗费的时间。这个
// 时间单位是clock tick,即“时钟打点”。
// 常数CLK_TCK:机器时钟每秒所走的时钟打点数。

clock_t start,stop;
//clock_t是clock()函数返回的变量类型
double duration;
//记录被测函数运行时间/s

int main()
{
    //不在测试范围内的准备工作写在clock()函数被调用之前
    start = clock();    //开始计时
//    MyFunction();      //需要计算运行时间的函数
    stop = clock();     //结束计时
    duration = ((double)(stop - start)) / CLK_TCK;

    //其他不在测试范围内的工作写在clock()函数调用之后
    return 0;

}