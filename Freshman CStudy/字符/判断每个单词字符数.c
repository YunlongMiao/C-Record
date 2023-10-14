#include<stdio.h>
#include<string.h>
int main()
{
	
	char word[300] ,words[1000];
	while(1000)
	{
		if(word[0]==0)
		
		scanf("%s",word) ;
		if(word[0]==0)
		break;
		strcat(words,word);
	 } 
	// words=strcat(words,word);
	printf("%s",words);
}
