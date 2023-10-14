#include <stdio.h>  
int main()  
{  
    void sort(int x[],int n);  //声明 
    int i,a[10];  
    int *p=a;  			//重 重重重重重重重重重重
    printf("input 10 numbers:\n");  
    for(i=0;i<10;i++)  
    {  
        scanf("%d",&a[i]);//scanf("%d",p++);  可替代，等价 
    }  
    sort(p,10);  			//调用 p为数组a的地址 
    printf("the sorted numbers:\n");  
    for(p=a;p<a+10;p++)  
    {  
        printf("%d ",*p);  
    }  
    printf("\n");  
    return 0;  
}  
void sort(int x[],int n)  		//函数  x[]  数组a的地址 
{  
    int i,j,k,t;  
    for(i=0;i<n-1;i++)//选择排序   
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
      
 
		
