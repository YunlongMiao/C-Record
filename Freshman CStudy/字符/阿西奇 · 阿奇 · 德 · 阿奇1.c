#include<stdio.h>
#include<string.h>
int main()
{
	char word[3];
	int t,i,j,f,h;
	while(~scanf("%s", &word))
	{
//		t=strlen;
		for(i=0; i<3; i++)
		{
			for(j=1+i; j<3; j++)
			{
				if(word[i]>word[j])
				{
					h=word[i];
					word[i]=word[j];
					word[j]=h;
				}
			}
		}
		for(i=0; i<3; i++)
		{
			printf("%c",word[i]);
			if(i!=2)
			printf(" ");
		}
		printf("\n");
	}
}
