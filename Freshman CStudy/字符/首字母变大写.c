#include<stdio.h>
#include<string.h>
int main()
{
	char wor[100];
	int i,k;
	while(gets(wor)!=EOF)
	{
		k=strlen(wor);
		wor[0]=toupper(wor[0]);
		for(i=1; i<k; i++)
		{
			if(wor[i]==32)
			wor[i+1]=toupper(wor[i+1]);
		}
		printf("%s\n", wor);
	}
}
