#include <stdio.h>
void sxh (int a,int b)
{
        int x,i,qw,bw,gw;
        int count=0;
        for (i=a;i<=b;i++)
        {
                x=i;
                gw=x%10;
                bw=x/10%10;
                qw=x/100;
                if (qw*qw*qw+bw*bw*bw+gw*gw*gw==i)
                {
                        if (!count)
                        {
                        printf("%d",i);
                        count++;
                        }
                        else printf(" %d",i);
                }
        }
        if(!count)
            printf("no");
          printf("\n");  /*************这里没注意到*/


}

int main()
{
        int x,y;
        while (scanf("%d%d",&x,&y)!=EOF)
                sxh(x,y);
                return 0;
}

