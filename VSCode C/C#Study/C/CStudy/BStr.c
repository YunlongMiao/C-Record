/*
Str����ϵ��

strlen:ͳ���ַ�����ʵ�ʳ���
strcat(c,d):��d���Ƶ�c�Ľ�β
strcpy(e,c):��c�е����ݸ��Ƶ�e��
strcmp("he","ho"):�ַ�����Ƚ�
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