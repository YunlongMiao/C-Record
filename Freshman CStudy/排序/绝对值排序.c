#include<stdio.h>
#include<math.h>
int main() 
{
    int i=0,j=0,t=0,u=0,k=0,y=0,m=0,n=0,c=0,f=0;
    while(scanf("%d",&n),n!=0) 
    {
    	int a[101]={0},b[101]={0};
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		//a[i]=c;
   							 //		printf("%d",a[i]);//1
    						//	f=a[i];
    //		if(a[i]<0)		//对得到的负数取倒数，同时负值赋给了b【i】 
    //		{
    //			b[i]=a[i];
    //			a[i]=-a[i];
    		//	a[i]=abs(a[i]);
	//		}
    							//	printf("%d",a[i]);	//2
		}
		for	(j=0;j<n-1;j++)//n=7					//排序 
		{
			for(t=1+j;t<n;t++)//n-j=7
			{
				if(abs(a[j])<abs(a[t]))
				{
					k=a[j];
					a[j]=a[t];
					a[t]=k;
				}
			}
									//	printf("%d",a[i]);	//	3
		}
		/*for(u=0;u<n;u++)
		{
			if(b[u]<0)
			{
				a[u]=b[u];
			}
	//		printf("%d",a[i]);	//4
		}*/
		for(y=0;y<n;y++)
		{
			printf("%d",a[y]);
			printf(" ");
		}
	
	}  printf("\n");
}
