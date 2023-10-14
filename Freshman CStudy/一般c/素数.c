#include<stdio.h>
int main()
/*{int n,i;
scanf("%d",&n);
for(i=2;i>=(n-1);i++)
{if(n%i==0)
printf("n为素数");
else continue;}
printf("n不是素数"); 
return 0; 
}
*/
{
	int x;
	scanf("%d",&x);
	int i;
	int isprime=1;
	for(i=2;i<x;i++)
		if(x/i==0){
			isprime=0;
			break;
		}if(isprime==0){
			printf("不是素数\n"); 
		}else 
			printf("是素数\n") ;
		return 0; 
}
	
	
	
	
	
