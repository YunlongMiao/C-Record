#include<stdio.h>
#include<string.h>
int main()
{
										//	char a[]="I love the world,how are you?";
	int i,chars,n,zi,kong,word;
	char words[5000];
	gets(words);
										//	printf("%d", strlen(a));
	n=strlen(words);
	for(i=0,word=0,kong=0,chars=0;i<n; i++)
	{
		if(words[i]>=65&&words[i]<=90||words[i]>=97&&words[i]<=122)
			word++;
		else if(words[i]==32)
			kong++;
		else
			chars++;
	}
	printf("×ÖÄ¸=%d,\n¿Õ¸ñ=%d,\nÆäËû·ûºÅ=%d,\n", word, kong, chars);
		 
} 
/* kong=0;
	if(a==" ")
	   word=0;
	else if(word==0)
		{
			word=1;
			kong++;
		}
	a[]=strlwr(a);
	*/
