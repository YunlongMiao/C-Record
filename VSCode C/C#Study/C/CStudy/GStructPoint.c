#include<stdio.h>
#include<stdlib.h>

struct student{
    int num;
    char name[20];
    char sex[10];
};

int main(){

    // struct student s = {.num = 2021, .name = "ʮ���", .sex = "man", .age = 152};
    struct student s = {2021, "ʮ���", "man"};
    struct student str[3] = {2021, "ʮ���", "man",2022, "ʮ���", "man",2023, "ʮ���", "man"};

    struct student *p;

    p = &s;

    printf("%d %s %s\n", (*p).num, (*p).name, (*p).sex);

    printf("%d %s %s\n", p->num, p->name,p->sex);


    p = str;
    p = p+1;

    printf("%d %s %s\n", p->num, p->name,p->sex);
    

    system("pause");
}