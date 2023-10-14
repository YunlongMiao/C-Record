 //
//  main.c
//  杭州电子科技大学
//
//  Created by yonuyeung on 2021/10/12.
//
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        int a[105]={0};
        int min=11,j=0,tem,i;       //j用来记录最小数的位置,tem用来保存数字
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<min)
            {
                min=a[i];
                j=i;
            }
        }
 
        tem=a[1];
        a[1]=a[j];
        a[j]=tem;
        for(i=1;i<=n;i++)
        {
            printf("%d",a[i]);
            if(i!=n) 
			printf(" ");
        }
        printf("\n");
    }
    return 0;
}
