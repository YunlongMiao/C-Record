#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,k,j;
    char s[1000];
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        j = 0;
        gets(s);
        for (k = 0; k < strlen(s); k++)
        {
            if (s[k] >= '0' && s[k] <= '9')
                j++;
        }
        printf("%d\n", j);
    }
    return 0;
}
