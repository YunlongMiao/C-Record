#include <stdio.h>

int t;
int a,b,c;

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b == c)
            printf("+\n");
        else
            printf("-\n");
    }
}