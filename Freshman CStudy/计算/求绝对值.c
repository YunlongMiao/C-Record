#include<stdio.h>
//#include<math.h>
int main(){
	float n,i;
	while(~scanf("%f",&n)){
	//	i=abs(n);
		if(n<0){
			n=-n;
		}
		printf("%.2f\n", n);
	}
} 
