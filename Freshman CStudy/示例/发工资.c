/*#include<stdio.h>               //发工资）
int main(void){
	int n,m,t;                  //t记录张数
	int a[100];
	while(scanf("%d",&n) != EOF){
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			scanf("%d", &a[i]);
		t=0;
		for(int i=0;i<n;i++){
			m=a[i];
			if(a[i]>=100){
				t+=m/100;
				m=m%100;
			}
			if(m<100&&m>=50){
				t+=m/50;
				m=m%50;
			}
			if(m<50&&m>=10){
				t+=m/10;
				m=m%10;
			}
			if(m<10&&m>=5){
				t+=m/5;
				m=m%5;
			}
			if(m<5&&m>=2){
				t+=m/2;
				m=m%2;
			}
			if(m<2&&m>=1){
				t+=m/1;
			}
		}	
		printf("%d\n",t);
	}
}

*/

#include<stdio.h>
int main()
{	
	int n=0;
	int x=0;
	int w=0;
	int c=0;
	int i=0;
	int k=0;
	int a[100] = {0};
	while(~scanf("%d",&n))
	{
		if(n==0)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			x=a[i];
			if(x>=100)
		//	k+=x/100+x%100/50+x%50/10+x%10/5+x%5/2+x%2;
			k+=x/100;
			x=x%100;
			 if(x<100 && x>=50)
			{
			//	k+=x/50+x%50/10+x%10/5+x%5/2+x%2;
				k+=x/50;
				x=x%50;
			}
			 if(x<50 && x>=10)
			{
			//	k+=x/10+x%10/5+x%5/2+x%2;
				k+=x/10;
				x=x%10;
			}
			 if(x<10 && x>=5)
			{
				//k+=x/5+x%5/2+x%2;
				k+=x/5;
				x=x%5;
			}
			 if(x<5 &&x>=2)
			{
			//	k+=x/2+x%2;
				k+=x/2;
				x=x%2;
			}
			 if(x<2 && x>=1)
			 k+=x;
		}
		printf("%d",k);
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
