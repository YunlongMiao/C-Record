#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag;
    int length;
    char str[100];
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%*c%[^\n]",str);
            length = strlen(str);
            flag = 1;
            for(i = 0;i < length / 2;i++){
                if(str[i] != str[length - i - 1])
                    flag = 0;
            }
            if(flag)
                puts("yes");
            else
                puts("no");
        }
    }
    return 0;
}
