
/*СD�����ѧˮ�ɻ��������������룬����ˮ�ɻ��� 
������ˮ����Ϊ���ĸ�����λ�Ķ����ƽ��з�ת���ʮ�����������η�֮��Ϊ��������� 
�����l��r]���ж��ٸ�����ˮ��?
���룺2������Ir (1<=<=r<10000����������[l ,r] 
�����һ�����������������ڡ�����ˮ�����ĸ���
���ͣ���������68��6�Ķ�������Ϊ110����ת��Ϊ
Ϊ0001������1��43+13��=68������68���ǡ�����ˮ�� */

#include<stdio.h>
int main()
{
	int count = 0;
	
	int min, max;
	scanf("%d%d",&min, &max);				
	
	int i;
	for(i= min; i<= max ; i++)
	{
		int temp = i,shuixian = 0;
		
		while(temp)
		{
			int num = temp %10, convert = 0 ;
			temp =temp /10;
			while(num)
			{
				convert = convert *2 + num % 2;
				num/=2;
				
			}
			shuixian += convert * convert * convert;
			
		}
		if(i== shuixian)
			count++;
	}
	printf("%d", count);
 } 
