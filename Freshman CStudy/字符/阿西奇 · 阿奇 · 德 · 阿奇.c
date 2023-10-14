#include<stdio.h>
#include<string.h>
int main()
{
	char word[3];
	int t,i,k,f;
	k=0;
	while(~scanf("%s", &word))
	{	
		k++;
		t=strlen(word);
		f=k%3;
		if(f==0)
		{
			for(i=t-1;i>=0; i--)
			{
				printf("%c", word[i]);
				if(i!=0)
				printf(" ");
			}
//			printf("\n");
		}
		else if(f==1)
			{
				printf("%c",word[2]);
				printf(" ");
				printf("%c",word[0]);
				printf(" ");
				printf("%c",word[1]);
				
			}
		else if(f==2)
			{
				printf("%c",word[0]);
				printf(" ");
				printf("%c",word[2]);
				printf(" ");
				printf("%c",word[1]);
				
			}
			printf("\n");
	} 
 } 
