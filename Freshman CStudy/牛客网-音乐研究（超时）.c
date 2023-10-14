/*
#include<stdio.h>

int main()
{
    int m,n;
    int num1[1001],num2[1001];
    int i,f,j;
    int min=1000000,temp;
    
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&num1[i]);
    
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&num2[i]);
    
    for(i=0; i<n; i+=m)
        for(j=0; j<m; j++)
            for(f=i; f<f+m; f++)
            {
                temp=num1[j]-num2[f];
                temp=temp*temp;
                if(temp<min)
                    min=temp;
            }
    printf("%d",min);
}
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int m,n;
    int num1[1001],num2[1001];
    int i,f,j;
    long long int ans=10000000000,sum;
    int temp;
        
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&num1[i]);
    
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&num2[i]);

    for(i=1;i<=m-n+1;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=sum+(num1[j]-num2[i+j-1])*(num1[j]-num2[i+j-1]);
        }
        if(sum<ans)
            ans=sum;
        
    }
    printf("%d",ans);
}
