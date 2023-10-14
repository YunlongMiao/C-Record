#include<stdio.h>
int main()
{
	const int number =10;
	int x;
	int count[number];
	int i;
	int c;
	for(i=0;i<number;i++){
		count[i]=0;
	} //定义countx=0 
//	scanf("%d",&x);
	while(x!=1){
		if(x>=0&&x<=9){
			count[x]++;
		}
	for(c=0;c<number;c++){
		printf("%d出现的个数有%d\n",x,count[x]);
			
	}
	return 0;
		
	}
	
	
}
