
#include<stdio.h>
#include<stdlib.h>
#include<time.h>   
int main()
{
    size_t i = 0;

    i = rand() % 5;
	
    switch (rand() % 5)
    {
    case 1:
        printf("�����ˣ���پͳԣ�����\n");
        break;
    
    case 2:
        printf("�����ˣ���پͳԣ�������\n");
        break;

    case 3:
        printf("�����ˣ���پͳԣ���Ѽ\n");
        break;

    case 4:
        printf("�����ˣ���پͳԣ��׷�\n");
        break;
    
    default:
        printf("�����ˣ���پͳԣ�ʳ��\n");
        break;
    }
    printf("sfwf");
	system("pause");
	return 0;
}