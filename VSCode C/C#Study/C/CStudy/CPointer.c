/*
指针：传递和偏移
*/

#include<stdio.h>


void  change(int* i);
void changex(char *a);


int main(){

    int i = 10;
    int *p;
    int a[5] = {1,2,3,4,5};
    char s[20] = "hello";

    p = a;
    change(&i);
    printf("%d\n",i);
    printf("%x\n",p);
    p = &a[4];
    printf("%x\n",p-1);
    printf("%d\n",*(p-1));

    // gets(s);
    puts(s);
    changex(s);
    puts(s);


    system("pause");

}



//传递
void  change(int* i){
    *i = 5;
}


//
void changex(char *a){


    *a = 'H';
    a[1] = 'E';
    *(a+2) ='L';
    
}