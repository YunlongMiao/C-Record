#include<stdio.h>
int main()
{int i,n,fact;
fact=1;
n=1;
i=1;
scanf("%d",&n);
//for(fact=1;i<=n;i++)
// fact=i*fact;
for(i=n;n>1;n--)
fact *=n;


 printf("%d",fact);
 
}
