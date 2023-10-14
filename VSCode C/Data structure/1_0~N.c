#include<stdio.h>

//输入N，打印0~N
void printN0(int arr);
void printN1(int arr);

int main()
{
    int N=10;
    printN0(N);
    printf("\n");
    printN1(N);

    return 0;
}


void printN0(int arr)   //常规遍历  空间复杂度 S(N)=C
{
    for(int i=1; i<=arr; i++)
        printf("%d\n",i);
}

void printN1(int arr)     //递归  空间复杂度 S(N)=C*N
{
    // if(arr){
    //     printf("%d\n",arr);  //逆序
    //     printN1(arr-1);
    // }
        if(arr){
            printN1(arr-1);
            printf("%d\n",arr);    //顺序
    }
}

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     while(scanf("%d%d",&a,&b)!=EOF)
//         printf("%d\n",a+b);
// }