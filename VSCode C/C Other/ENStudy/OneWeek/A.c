#include<stdio.h>

#define MAX 1100


int main(){

    int t = 0,temp = 0;
    int k[MAX];
    int mm[100];
    int i = 0,judge = -1,num = 0;

	while(MAX-num)
		for(i=1; ; i++)
			if( i % 3 != 0 && i % 10 != 3)
				k[num++] = i;
		
    scanf("%d",&t);
    temp = t;
    while(temp){
        judge = scanf("%d",&mm[t-temp]);

        if(judge>0)
            temp--;
    }

    for(i=0; i<t; i++)
        printf("%d\n",k[ mm[i] ]);

//    getchar();
    return 0;
}
 















//#include <stdio.h>
 
 
//int main()
//{
//	int t;
//	int k, j = 0, i = 0;
//
//	scanf("%d", &t);
//	while (t--)
//	{
//		scanf("%d", &k);
//		for (i = 1; j<k; i++)
//		{
//			if ( (i % 3 != 0) && (i % 10 != 3) )
//			{
//				j++;
//			}
//		}
//		printf("%d\n", i - 1);
//	}
//	return 0;
//}













//#include <stdio.h>
// 
// 
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int k, j = 0, i = 0;
//		scanf("%d", &k);
//		for (i = 1; j<k; i++)
//		{
//			if (i % 3 != 0 && i % 10 != 3)
//			{
//				j++;
//			}
//		}
//		printf("%d\n", i - 1);
//	}
//	return 0;
//}
