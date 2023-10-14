#include <stdio.h>  
int main()  
{  
    void sort(int x[],int n);  
    int i,a[10];  
    int *p=a;  
    printf("input 10 numbers:\n");  
    for(i=0;i<10;i++)  
    {  
        scanf("%d",&a[i]);//scanf("%d",p++);  
    }  
    sort(p,10);  
    printf("the sorted numbers:\n");  
    for(p=a;p<a+10;p++)  
    {  
        printf("%d ",*p);  
    }  
    printf("\n");  
    return 0;  
}  
void sort(int x[],int n)  
{  
    int i,j,k,t;  
    for(i=0;i<n-1;i++)//Ñ¡ÔñÅÅĞò   
    {  
        k=i;  
        for(j=i+1;j<n;j++)  
          
            if(x[j]>x[k])  k=j;  
            if(k!=i)  
            {  
                t=x[i];  
                x[i]=x[k];  
                x[k]=t;  
            }  
          
    }  
}  
      
 
		
