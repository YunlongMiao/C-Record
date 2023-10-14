#include<stdio.h>
#define N 100
int main()
{
	int n;
	int i,j,t,temp;
	char wor[N],wro[N];
	while(~scanf("%d",&n))
    {
        while(n--)
        {
         //   scanf("%*c%[^\n]",str);
         scanf("%s",wor);
         	for(i=strlen(wor),t=0; i>0; i--,t++)
         	{
         		wro[i]=wor[t];
		 	}
		 	temp=1;
		 	for(i=0; i<strlen(wor); i++)
		 	{
		 		if(wor[i]!=wro[i])
		 		{
		 			temp=0;
		 			break;
				 }
		 		
			 }
			 if(temp==0)
			 	printf("no\n");
			 else	
			 	printf("yes\n");
		
		}
	}
			 
}
