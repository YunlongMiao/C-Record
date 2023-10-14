//（2） C语言AC代码 
#include<stdio.h>
#include<string.h> 
	int primer[350000];
 	int numbers[1000010];
    int ans[1000010];
    int N=1000000;
	 void primers() 
    { 
		int i,j,k; k=0;
		memset(numbers,0,sizeof(numbers)); 
		for(i=2;i<N;i++) 
		{ 
			if(numbers[i]==0) 
		      primer[k++]=i;
		    for(j=0;(j<k)&&(i*primer[j])<N;j++) 
		    {
		   		numbers[i*primer[j]]=1;
		   	    if(i%primer[j]==0) 
				   break;
		    } 
		} 
		
	} 
					
			int sums(int t) 
			{ 
				int a,sum=0;
				while(t) 
				{ 	
			 		a=t;
			  		t=t/10;
			  	  sum=sum+a;
				} 
				return sum; 
			} 
			
			void answers() 
			{ 
				int i;
				memset(ans,0,sizeof(ans));
				for(i=2;i<N;i++) 
				{ 
				  	if(numbers[i]==0&&(numbers[sums(i)]==0)) 
				  	ans[i]=ans[i-1]+1; 
				  	else 
					  ans[i]=ans[i-1];
			    } 
			}
 int main() 
{ 
	int t,s=1;
	 primers();
	 answers();
 	 scanf("%d",&t);
					    
	while(t--) 
	{ 
		int l,r; 
		scanf("%d%d",&l,&r);
		printf("Case #%d: %d\n",s++,ans[r]-ans[l-1]);
	} 
		 return 0;
}
	/*	思路；1筛素数法：①一个素数的倍数不是素数
						  ②一个数与它的素数的乘积必然不是素数，因为每个合数必然有一个最小素因子
						  ③一个数如果是素数的倍数，那么该数就不能与它之后的素数相乘 
			  2求素数的每位数字之和，用一个循环对其求余，循环相加即可 
			  3记录每个位置有几个美素数	*/
