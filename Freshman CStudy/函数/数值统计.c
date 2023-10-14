#include<stdio.h>
#define ORDER 101
float s,num[ORDER];
int n,a,b,c,i,temp;
int main()
{
	//float s,num[ORDER];
//	int judge(float s);
//	int n,a,b,c,i,temp;
	while(scanf("%d",&n)!=EOF&&n){
		for(i=0; i<n; i++){
			scanf("%f",&num[i]);
		}
		for(i=0; i<n; i++){
		//	judge(num[i]);
			if(num[i]==0)
				b++;
			else if(num[i]>0)
				c++;
			else 
				a++;
		}
	printf("%d %d %d\n",a,b,c);	
		a=0;b=0;c=0;
	}
 }
 
 

