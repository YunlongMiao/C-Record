#include<stdio.h>
int main(){
	int judge(int m);
	int m,n,t;
	unsigned int x,y;
	while(~scanf("%d %d", &m,&n)){
		
		for(x=0,y=0; m<=n; m++){
			t=judge(m);
			if(t==0)
				x+=m*m;
			else
				y+=m*m*m;
		}
	printf("%u %u\n",x,y);
	}
}
int judge(int m){

  	int i;
	
	if(m%2==0)
		i=0;
		
	else
		i=1;
	return i;
}
