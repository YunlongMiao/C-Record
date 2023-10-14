#include <stdio.h>

int main(){
    int m,n;
    int p,q;
    int sum1 = 0,sum2 = 0;
    while(scanf("%d %d %d %d",&m,&n,&p,&q) != EOF )
    {    
        sum1 = 2*m*n;
        sum2 = p*q;
        if(sum1 >= sum2){
            printf("%d\n",sum1-sum2);
        }else
            printf("IMPOSSIBLE\n");
    }
}