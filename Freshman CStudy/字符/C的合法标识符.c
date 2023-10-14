#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int i;
	int t,k;
	char ch[51],hh;
	while(~scanf("%d", &n))
	{
	//	getchar();
	while(n--)
	{
		
		scanf("%[^\n]",ch);
//		printf("%s",ch);
		t=strlen(ch);
	//		k=1;
		if(ch[0]==95||((ch[0]>='a'&&ch[0]<='z')||(ch[0]>='A'&&ch[0]<='Z')))
		{	
			 k=1;
			for(i = 1;i < t;i++)
                {
                    hh = ch[i];
                    if(((hh >= 'a') && (hh <= 'z')) || ((hh >= 'A') && (hh <= 'Z')) || ((hh >= '0') && (hh <= '9')) || (hh == '_'))
                    {
 
                    }
                    else
                        k = 0;
                }
		}
		else
			k=0;	
		
			
			
			
		if(k)
			printf("yes\n");
		else 
			printf("no\n");
	}
	
	}
	
	return 0;
}
