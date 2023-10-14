#include<stdio.h>
int main()
{
    int n,m,o,x,t,temp,f,h;
      while(scanf("%d%d",&n,&m)!=EOF&&n||m) //分别输入个数n和插入的数m 
    {
  	//	scanf("%d%d",&n,&m);
        int a[101]={0};
        for(o=0;o<n;o++)   //对有序数列进行输入 
        {
        	scanf("%d",&x);
			a[o]=x;
		}
		for(t=0;t<n;t++)	//判断m所在位置 
		{
			if(a[t]<m || m<a[t+1])
			temp=t;
		}
	//	a[temp+1]=m;
		for(h=n;h>=temp+1;h--)	//对m之后的所有数列所占数组位置后退一个 
		{
			a[h+1]=a[h];	
		}
		a[temp+1]=m;
		for(f=0;f<=n;f++)		//对m插入之后的数组 进行输出 
		{
		    printf("%d",a[f]);
		    printf(" ");
		}
    }
    
}
    
