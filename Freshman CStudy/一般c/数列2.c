#include <stdio.h>
int main()
 {  int i,k;
    int f[45]={1,1}; 
    scanf("%d\n",&k);
	scanf("%d\n",&i) ;                             
     for(i=2;i<46;i++)
         f[i]=f[i-2]+f[i-1]; 
    
     printf("%d",f[k-1]);                          
  
    return 0;
}

