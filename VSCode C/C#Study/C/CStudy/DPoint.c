/*
malloc动态内存申请，栈和堆的差异

栈使用后会自动释放
*/
// (0|1)*01
// ((1|2|...|9)(0|1|2|...|9)*|e)(0|5)
// (0|1)*(011)(0|1)*

#include<stdio.h>
#include<stdlib.h>  //malloc
#include<string.h>

#define SIZE 100
char *print_stack();    //栈
char *print_malloc();   //堆

int main(){

    int size;
    char *p;    //void *类型指针不能偏移，因此不会定义
    char *t;
    scanf("%d",&size);  //输入要申请的空间大小

//动态内存申请
    p = (char *)malloc(size);

    strcpy(p,"malloc success");
    puts(p);

    free(p);
    printf("free success\n");

//栈空间：会释放
    t = print_stack();
    puts(t);            //乱码，已经释放
//堆空间：一直存在
    t = print_malloc();
    puts(t);            //正常显示


    system("pause");

}


//栈
char *print_stack(){

    char c[100] = "I am print_stack func!";
    char *p;
    p = c;
    puts(p);

    return p;
}


//堆
char *print_malloc(){

    char *p = (char*)malloc(SIZE);
    strcpy(p,"I am print_stack func!");
    puts(p);

    return p;
}