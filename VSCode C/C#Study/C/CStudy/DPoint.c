/*
malloc��̬�ڴ����룬ջ�ͶѵĲ���

ջʹ�ú���Զ��ͷ�
*/
// (0|1)*01
// ((1|2|...|9)(0|1|2|...|9)*|e)(0|5)
// (0|1)*(011)(0|1)*

#include<stdio.h>
#include<stdlib.h>  //malloc
#include<string.h>

#define SIZE 100
char *print_stack();    //ջ
char *print_malloc();   //��

int main(){

    int size;
    char *p;    //void *����ָ�벻��ƫ�ƣ���˲��ᶨ��
    char *t;
    scanf("%d",&size);  //����Ҫ����Ŀռ��С

//��̬�ڴ�����
    p = (char *)malloc(size);

    strcpy(p,"malloc success");
    puts(p);

    free(p);
    printf("free success\n");

//ջ�ռ䣺���ͷ�
    t = print_stack();
    puts(t);            //���룬�Ѿ��ͷ�
//�ѿռ䣺һֱ����
    t = print_malloc();
    puts(t);            //������ʾ


    system("pause");

}


//ջ
char *print_stack(){

    char c[100] = "I am print_stack func!";
    char *p;
    p = c;
    puts(p);

    return p;
}


//��
char *print_malloc(){

    char *p = (char*)malloc(SIZE);
    strcpy(p,"I am print_stack func!");
    puts(p);

    return p;
}