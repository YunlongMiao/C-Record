/*
Str函数系列

strlen:统计字符数组实际长度
strcat(c,d):把d复制到c的结尾
strcpy(e,c):把c中的内容复制到e中
strcmp("he","ho"):字符逐个比较
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char c[100];
    char d[100] = "world";
    char e[100];
    int len;
    gets(c);
    puts(c);

    len = strlen(c);
    printf("len=%d\n",len);


    strcat(c,d);
    puts(c);


    strcpy(e,c);
    puts(e);


    printf("c?d=%d\n",strcmp(c,"ho"));

    system("pause");
    return 0;

}