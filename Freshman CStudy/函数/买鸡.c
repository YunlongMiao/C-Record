/*百钱买百鸡问题：公鸡五文钱一只，母鸡三文钱一只，小鸡三只一文钱，用 100 文钱买 100 只鸡，公鸡、母鸡、小鸡各买多少只？

本程序要求解的问题是：给定一个正整数 nn，用 nn 文钱买 nn 只鸡，问公鸡、母鸡、小鸡各买多少只？
*/
#include<stdio.h>
int main()
{
	int n,i,j,t,k,sum,x,s,w;
//	s;//总计数 
	sum=0;//钱数 
	x=0;//解数目 
	scanf("%d", &n);
//	s=n;

		for(i=0; i<=n;i++){							/*公鸡*/

			for(j=0,s=n,w=n; j<=n;j++){					/*母鸡*/
				
				w=w-3*j+5*i;							//剩余钱数 
				 s=s-(i+j);							//剩余数目 
				 if(s%3==0&&s==3*w){
				// 	printf("%d\n%d\n", i,j);
				 	x++;
				 }
				  
			}
		}
		if(x==0)
		printf("No Answer.");
		else 	
			printf("%d", x+2);
}
