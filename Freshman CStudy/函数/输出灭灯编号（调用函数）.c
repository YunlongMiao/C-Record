 #include<stdio.h>
 void light (int m);
  /*int i=0,k=0,n,m;
 	int a[5000]={0};
 //	scanf("%d%d",&n,&m);*/
 int main()
 
 {
 	int i=0,k=0,n,m;
 	int a[5000]={0};
 	scanf("%d%d",&n,&m);
 	for(i=0;i<n;i++)//灯灭为1，灯亮为-1 
 	{
 		a[i]=1;
	}
 	for(i=2;i<=m;i++)
 	{
 		light(i);
	}
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]==1)
	 	{
	 		k=i+1;
			printf("%d",k);
		    if(i!=n)
	 	    printf("\b");
	    }
    }
}
 void light (int m)
 {
 	int i=0,k=0;
 	for(i=1;i<=n;i++)//第n个人对编号为n*i的灯，灯亮使其为-1，灭为1
 	{
 		k=i*m-1;
 		if(k<=n)
 		{
 			if(a[k]==1)
 			a[k]=-1;
 			else if(a[k]==-1)
 			a[k]=1;
 			if(k>n)
 			break;
		}
		
	}
 }
