#include<stdio.h>
int main()
{
    int a,e,i,o,u;
    int j,n;
    char str[100];
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%*c%[^\n]",str);
            a = 0;
            e = 0;
            i = 0;
            o = 0;
            u = 0;
            for(j = 0;j < strlen(str);j++){
                switch(str[j]){
                case 'a':a++;break;
                case 'e':e++;break;
                case 'i':i++;break;
                case 'o':o++;break;
                case 'u':u++;break;
                }
            }
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
            if(n != 0)
                putchar('\n');
        }
    }
    return 0;
}
