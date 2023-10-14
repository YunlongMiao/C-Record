#include<stdio.h>

int main()
{
	int n,y,t=0,s,x,i;
	int a[50],b[50];
//		n=1,s=3;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		
			scanf("%d",&x);
			a[i]=x;
		for(i=0; i<n; i++){
				s=a[i];
			while(1){
	//			s=a[i];
				if(s%2!=0){
					s=s-1;
					t++;
				}
				else 
					s=s/2;
				if(s==1)
				break;
	
			}
		b[i]=t;
	}
//		printf("%d\n",t+1);
		
	}
	for(i=0; i<n; i++)
	printf("%d\n",t+1);
}
