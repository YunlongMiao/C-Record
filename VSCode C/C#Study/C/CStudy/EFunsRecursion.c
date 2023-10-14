#include<stdio.h>


int Recursion_1(int n);

int main(){

    int n = 0;

    scanf("%d",&n);
    n = Recursion_1(n);
    printf("%d\n",n);

    system("pause");

}

int Recursion_1(int n){

    if(n == 1)
        return 1;

    return n * Recursion_1(n - 1);
}