#include<stdio.h>
int main()
{int x,y,i,z;
	i=0;
	x=0;
	y=0;
	z=0;
   while(i!=-1){
   	scanf("%d",&i);
   	z++;
   	if(z%2==0)
   	x++;
   	else y++;
   }
   printf("%d %d",y,x);
   return 0;
}
