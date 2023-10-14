#include<stdio.h>
#include<string.h>
int a,e,i,o,u;
char wor[100],ch;
int main()
{
	int n;
	int j;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%[^\n]",wor);
		getchar();
//		a=0;e=0;i=0;o=0;u=0;
		for(j=0,a=0,e=0,i=0,o=0,u=0; j<strlen(wor); j++)
		{
				if(tolower(wor[j])=='a')
					a++;
				else if(tolower(wor[j])=='e')
					e++;
				else if(tolower(wor[j])=='i')
					i++;
				else if(tolower(wor[j])=='o')
					o++;
				else if(tolower(wor[j])=='u')
					u++;
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
            if(n != 1)
                printf("\n");

		
		
	}
}


