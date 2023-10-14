#include<stdio.h>
int main()
{
  
	int k,num;
	int on,tw,th;
	while(scanf("%d",&num)!=EOF){
	on=num%10;
	tw=(num/10)%10;
	th=num/100;
	if(on*on*on+tw*tw*tw+th*th*th==num)
	printf("%d",num);
	else
		printf("%d %d %d",on,tw,th);
}
}
