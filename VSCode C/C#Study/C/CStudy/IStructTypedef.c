#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int num;
    char name[20];
    char sex[10];
}stu,*pstu;

int main(){

    stu s = {2021, "ʮ���", "man"};
    stu str[3] = {2021, "ʮ���", "man",2022, "ʮ���", "man",2023, "ʮ���", "man"};

    pstu p;

    p = &s;

    printf("%d %s %s\n", (*p).num, (*p).name, (*p).sex);

    printf("%d %s %s\n", p->num, p->name,p->sex);


    p = str;
    p = p+1;

    printf("%d %s %s\n", p->num, p->name,p->sex);
    

    system("pause");
}