#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[200];
	int i,count=0;
	while(fflush(stdin),gets(a))
	{
		for(i=0; i<200; i++)
		{
			if(a[0]=='\0') break;
			if(a[i]!=' ' && (a[i+1]==' '|| a[i+1]=='\0') )
			{
				count++;
			}
			if(a[i+1]=='\0') break;
		}
		printf("%d\n",count);
		count=0;
	}

	system("pause");
}
