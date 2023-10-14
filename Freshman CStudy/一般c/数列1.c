/*#include<stdio.h>
int main()
{
	int b,k,i=46;
   	int a[i];
	a[0]=1;
	a[1]=1;
	scanf("%d",&k);
	if(k<=2)
	{ b=1;
	 printf("%d",b);	
	}
	{i=2;
	  
	  for(i=2;i<k-1;i++)
	     { 
		  a[i]==a[i-1]+a[i-2];
	     }
	     printf("%d",a[i]);
    }
} 
*/
/*#include <stdio.h>
int main()
 {  int i,k;  
    int f[46]={1,1};
	scanf("%d",&k) ;
	if(k>2)                               
      {
	    for(i=2;i<=k-1;i++)
         f[i]=f[i-2]+f[i-1]; 
      }
      printf("%d",f[i]);
	 
}*/
	 
	 
/*#include <stdio.h>
int main()
 {  int i,k;  int f[45]={1,1};  scanf("%d",&k);                              
     for(i=2;i<20;i++)
         f[i]=f[i-2]+f[i-1]; 
    // for(i=0;i<45;i++)
    //{
//	  if(i%5==0) printf("\n"); 
         printf("%d",f[k-1]);                          
  // }
  //  printf("\n");
    return 0;
}*/
	 
#include <stdio.h>

int main() {
	int ch[47];
	int i = 2;
	ch[0] = 1;
	ch[1] = 1;
	for (; i <= 45; i++)
		ch[i] = ch[i - 2] + ch[i - 1];

	int k = 0;
	scanf("%d", &k);
	printf("%d", ch[k]);
	return 0;
}
