// #include<iostream>
#include<stdio.h>
#include<stdlib.h>

void modify_num(int &b);
void modify_num2(int *&p, int *q);


int main(){

    int a = 101;
    int *p = NULL;
    int *q = &a;
    // scanf("%d",&a);
    modify_num(a);
    modify_num2(p,q);
    printf("%d\n",a);
    printf("%d\n",*p);


    system("pause");
}


void modify_num(int &b)//�β���д&����Ϊ����
{

    b = b + 1;
}

void modify_num2(int *&p, int *q)//�β���д&����Ϊ����
{

    p = q;
}
