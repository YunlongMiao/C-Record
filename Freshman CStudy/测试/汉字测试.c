#include<stdio.h>
 
int main()
{
    int n,sum;
    char ch;
    while(~scanf("%d",&n))
    {
        getchar();
        while(n--){
            sum = 0;
//            while((ch = getchar()) != '\n'){
                if(ch < 0)
                    sum++;
  //          }
            printf("%d\n",sum/2);
        }
    }
    return 0;
}
