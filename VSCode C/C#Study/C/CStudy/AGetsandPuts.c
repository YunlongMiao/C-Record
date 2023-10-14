/*
gets():一次读一行
puts()
*/

#include<stdio.h>

int main(){

    char c[20];
    gets(c);
    puts(c);        //printf("%s\n",c); 只能放字符数组名

    system("pause");
    return 0;

}