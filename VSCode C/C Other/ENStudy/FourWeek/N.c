#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n;
    long MAX;
    int a[50000];
    int MAXP = 0;
    int i = 0,j = 0;

    scanf("%d",&t);

    while(t--){

        scanf("%ld",&MAX);
        
        for(i=0; i<MAX; i++)
            scanf("%d",&a[i]);
        scanf("%d",&n);

        for(i=0; i<MAX; i++)
            for(j=0; j<n; j++)
            {

            }


    }

    system("pause");
}


// #include<stdio.h>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// int sum[50050],a[50050];
// int dp[50050][4];///ǰi�ڳ�����j����ͷ��   
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         memset(sum,0,sizeof(sum));
//         memset(a,0,sizeof(a));
//         memset(dp,0,sizeof(dp));
//         int n,m;
//         scanf("%d",&n);
//         for(int i=1;i<=n;i++)
//         {
//             scanf("%d",&a[i]);
//             sum[i]=sum[i-1]+a[i];///ǰi�ڳ�������
//         }
//         scanf("%d",&m);
//         for(int i=m;i<=n;i++)    
//         {
//             for(int j=3;j>=1;j--)
//             {///ÿ��״̬��������ȡ�� ȡ���߲�ȡ �Ե�i�ڳ���Ϊ�׵�m�ڳ���
//                 dp[i][j]=max(dp[i-1][j],dp[i-m][j-1]+(sum[i]-sum[i-m]));
//             }///��ѡ    ѡ
//         }
//         printf("%d\n",dp[n][3]);
//     }
//     return 0;
// }