#include<stdio.h>

int m;

int main()
{
	int n,i,t=0,sum=0,s,q,f,g=0;
	int a[10]={0,1,2,4,8,16,32,64,128,256};
//	int b[10]={1,10,100,1000,10000,100000,1000000};
//	double sum=0, s;
	scanf("%d", &n);//342315
	for(i=1; ;i++){
		s=n%10;
	     n=n/10;
			if(s%2==0)
     		 t=0;
 			else
			 	 t=1;
 			if(i%2==0)
     		 m= 0;
 			else 
			 	m=1;
		if(t==m){
			g=a[i];
			sum+=a[i];
		}
			
		
		if(n==0)
			break;
	//	n/=10;
	}
	printf("%d",sum);
}
