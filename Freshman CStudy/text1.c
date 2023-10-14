#include<stdio.h>
#include <string.h>
//Õ‚–«º¶Õ√Õ¨¡˝ 
/*
int sum(x,y,H,F);
int main()
{
	long long int t=0;
	long long int x,y,H,F;
    long long int m,n;
    
    scanf("%lld", &t);
    while (t--)
    {
    	scanf("%lld%lld%lld%lld", &x,&y,&H,&F);
    	m=(F-H*y)/(x-y);
    	n=H-m;
    	printf("%lld %lld\n",m,n);
	}

	int sum(x,y,H,F)//º¶Ω≈£¨Õ√Ω≈£¨Õ∑£¨Ω≈ 
	{
		int m;//º¶ 
		int i,j;
		m*x+n*y=F;
		m+n=H;
		m*x+(H-m)*y=F
		m*x+H*y-m*y=F
		m*(x-y)+H*y=F

		m=(F-H*y)/(x-y);
		return m; 
	}

}
*/

// ‰≥ˆ≈–∂œΩ·π˚ 
/*
int main()
{
	char ss[10];
	scanf("%s",&ss);
//AC WA RE TLE PE MLE CE
	if(strcmpi(ss,"AC")==0)
		printf("Accepted");
		
	else if(strcmpi(ss,"WA")==0)
		printf("Wrong Answer");
		
	else if(strcmpi(ss,"RE")==0)
		printf("Runtime Error");
		
	else if(strcmpi(ss,"TLE")==0)
		printf("Time Limit Exceeded");
		
	else if(strcmpi(ss,"PE")==0)
		printf("Presentation Error");
		
	else if(strcmpi(ss,"MLE")==0)
		printf("Memory Limit Exceeded");	
	else if(strcmpi(ss,"CE")==0)
		printf("Compile Error");
		
//	printf("%s",ss);
 } 


*/









/*
int main()
{
    int t=0, n=0, s=0;
    int i = 0;
    int num[65535] = {};
    int fin[65535] = {};
    int sum = 0, m=0,f = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &s);
            num[i] = s;
        }

        for (i = 0; i < n - 1; i++)
        {
            for (f = 1,m=0; f < n; f++)
            {
                if (num[i] >= 0)
                    if (num[i] == num[f])
                    {
                        num[f] = -1;
                        m++;
                    }

            }
            if (m >= 3)
                fin[3 - t] = m;
            else
                fin[3 - t] = -1;
        }
    }
    for (i = 0; i < t; i++)
        printf("%d\n", fin[i]);
}
*/

/*
int main()
{
    int n;
    int i = 0;
    int num[10000];
    int fin[10000];

    int sss(int s)
    {
        if (s <= 1399)
            return 4;
        else if (1400 <= s <= 1599)
            return 3;
        else if (1600 <= s <= 1899)
            return 2;
        else
            return 1;
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        fin[i] = sss(num[i]);
    }
    for (i = 0; i < n; i++)
        printf("Division %d\n", fin[i]);
        
}
*/
