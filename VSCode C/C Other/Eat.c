
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
        printf("决定了，这顿就吃：面条\n");
        break;
    
    case 2:
        printf("决定了，这顿就吃：麻辣烫\n");
        break;

    case 3:
        printf("决定了，这顿就吃：烤鸭\n");
        break;

    case 4:
        printf("决定了，这顿就吃：米饭\n");
        break;
    
    default:
        printf("决定了，这顿就吃：食堂\n");
        break;
    }
    printf("sfwf");
	system("pause");
	return 0;
}