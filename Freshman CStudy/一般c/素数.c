#include<stdio.h>
int main()
/*{int n,i;
scanf("%d",&n);
for(i=2;i>=(n-1);i++)
{if(n%i==0)
printf("nΪ����");
else continue;}
printf("n��������"); 
return 0; 
}
*/
{
	int x;
	scanf("%d",&x);
	int i;
	int isprime=1;
	for(i=2;i<x;i++)
		if(x/i==0){
			isprime=0;
			break;
		}if(isprime==0){
			printf("��������\n"); 
		}else 
			printf("������\n") ;
		return 0; 
}
	
	
	
	
	
