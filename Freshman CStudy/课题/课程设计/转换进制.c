#include<stdio.h>
int main()
{
	int i,n,y,t;
//	float t;
	long int sum=0;
	int a[30]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
    int b[5000];
	scanf("%d", &n);
	for(i=0; ;i++){//通过b[i]储存转换后的各位二进制 
		
		b[i]=n%2;
		n=n/2;
		if(n==0){
			y=i;
			break;
		}
		
	}
	for(i=1,sum=b[0],t=10;i<=y ; i++, t*=10){//获得 

		sum+=b[i]*t;
		if(b[i]=0)
			break;
	}
	printf("%032ld",sum);
}
