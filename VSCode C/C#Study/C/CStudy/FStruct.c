#include<stdio.h>
#include<stdlib.h>

struct student{
    int num;
    char name[20];
    char sex[10];
    int age;
};

int main(){

    struct student s = {.num = 2021, .name = "Ê®¶à¸ö", .sex = "man", .age = 152};
    struct student str[3];

    printf("%d\n",sizeof(s));

    scanf("%d%s%s%d", &s.num, &s.name, &s.sex, &s.age);
    printf("%d %s %s %d\n", s.num, s.name, s.sex, s.age);

    scanf("%d%s%s%d", &str[0].num, &str[0].name,&str[0].sex, &str[0].age);
    printf("%d %s %s %d\n", str[0].num, str[0].name, str[0].sex, str[0].age);
    

    system("pause");
}