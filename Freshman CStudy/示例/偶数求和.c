#include<stdio.h>

int main()
{
    int n,m,i,j,k,ave,num,sum,tem;
    while(~scanf("%d%d",&n,&m))
    {
        i = n / m;
        j = n % m;
        num = 2;
        while(i--)
        {
            k = m;
            sum = 0;
            while(k--)
            {
                sum += num;
                num += 2;
            }
            ave = sum / m;
            printf("%d",ave);
            if(j == 0 && i == 0)
                printf("\n");
            else
                printf(" ");
        }
        if(j != 0)
        {
            k = j;
            sum = 0;
            while(k--)
            {
                sum += num;
                num += 2;
            }
            ave = sum / j;
            printf("%d\n",ave);
        }

    }
    return 0;
}
 
