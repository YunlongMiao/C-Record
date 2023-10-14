#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag;
    char str[50],ch;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            getchar();
            scanf("%[^\n]",str);
            flag = 1;
            ch = str[0];
            if((ch == '_') || ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
            {
                for(i = 1;i < strlen(str);i++)
                {
                    ch = str[i];
                    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) || ((ch >= '0') && (ch <= '9')) || (ch == '_'))
                    {
 
                    }
                    else
                        flag = 0;
                }
            }
            else
                flag = 0;
            if(flag)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
