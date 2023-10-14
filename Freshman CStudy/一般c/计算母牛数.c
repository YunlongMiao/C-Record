/*#include<stdio.h>
int main()
{
//	if(n<=3)
//	i=n;
//	else
	//n年，四年生一牛
//	 n;n-3;n-4;n-4*i
//	 i=n/4
//	 n*n-
	int a,b,c,d,i,n,sum=0;
//	while(1)
	{
		scanf("%d",&n);
		if(n>=4)
		{
			sum=n+(n-2)*(n-3)/2;	
		}
		else
		sum=n;
		printf("%d",sum);
		printf("\n");
		
		if(n==0)
		break;
}
	
}
*/
#include<stdio.h>
int main()
{

	int i,n[55],sum=0,x=0,z=0,y=0,m[55];
	
	for(z=0;z<55;z++)
	{
		scanf("%d",&n[z]);
	    printf("%d",n[z]);
	    if(n==0)
		break;
    
		for(y=0;y<n[z]; y++)
		{
		
		
		if(n[x]>5)
		{
			sum=6;
			sum+=n+(n-3)*(n-4)/2;
			
		//	sum=sum+(2*n-9)*(n-4)/2;
		}
		else if(n[x]==5)
		  sum=6;
		else if(n[x]<5)
		sum=n;
	    }
		m[z]=sum;	
   	}
    int o=0;
    for(o=0;o<55;o++)
    {
    //	printf("%d",m[0]);
   // 	printf("\n");
	}
    
	
	
    
    
	
}

