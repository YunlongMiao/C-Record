#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    char a,b,c;
    int temp;

    scanf("%d",&t);

    while(t--){

        scanf("\n%c%c%c",&a,&b,&c);
        temp = a-c;
        if(temp == 1)
            printf("NO\n");
        else
            printf("YES\n");

    }

    system("pause");
}
