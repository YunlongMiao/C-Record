#include<stdio.h>
int number(int n,int f[])
{
    int i = 0;
    f[1] = 1;
    f[2] = 2;
    f[3] = 3;       //ǰ����ֻ��һͷţ����
    for(i = 4;i <= n;i++)
    {
        f[i] = f[i-1] + f[i-3];  //�ӵ����꿪ʼ��ÿ��ţ������Ϊȥ���ţ�����³�����Сţ
    }
    return f[n];
}
int main()
{
    int n[55] = {0};
    int f[55] = {0};
    int i = 0;
    int k = 0;
    for(i = 0;i < 55;i++)
    {
        scanf("%d",&n[i]);
        if (n[i] == 0)
        {
            break;
        }                 //�ж����������Ƿ����
        k++;              //kΪ���ݵĸ���
    }
    for(i = 0;i < k;i++)
    {
        printf("%d\n",number(n[i],f)); //���ú���������
    }
    return 0;
}
