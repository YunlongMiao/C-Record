#include<stdio.h>
int main()
{
    int n,m,o,x,t,temp,f,h;
      while(scanf("%d%d",&n,&m)!=EOF&&n||m) //�ֱ��������n�Ͳ������m 
    {
  	//	scanf("%d%d",&n,&m);
        int a[101]={0};
        for(o=0;o<n;o++)   //���������н������� 
        {
        	scanf("%d",&x);
			a[o]=x;
		}
		for(t=0;t<n;t++)	//�ж�m����λ�� 
		{
			if(a[t]<m || m<a[t+1])
			temp=t;
		}
	//	a[temp+1]=m;
		for(h=n;h>=temp+1;h--)	//��m֮�������������ռ����λ�ú���һ�� 
		{
			a[h+1]=a[h];	
		}
		a[temp+1]=m;
		for(f=0;f<=n;f++)		//��m����֮������� ������� 
		{
		    printf("%d",a[f]);
		    printf(" ");
		}
    }
    
}
    
