#include<stdio.h>
#include<string.h>
 int main()
 {
 	int n=0;
 	int i=0;
 	int k=0;
 	char a[1000],b[100];
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%s",a);
 	//	gets(a);
 	for(i=0;i<strlen(a);i++)
 	{
 		if(a[i]>='0' && a[i]<='9')
 		k++;
 		
    }
    printf("%d\n",k);
	 
	}
}
