//��2�� C����AC���� 
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
	/*	˼·��1ɸ����������һ�������ı�����������
						  ��һ���������������ĳ˻���Ȼ������������Ϊÿ��������Ȼ��һ����С������
						  ��һ��������������ı�������ô�����Ͳ�������֮���������� 
			  2��������ÿλ����֮�ͣ���һ��ѭ���������࣬ѭ����Ӽ��� 
			  3��¼ÿ��λ���м���������	*/
