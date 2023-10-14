
/*小D最近在学水仙花数，但他想了想，觉得水仙花数 
“花仙水数”为它的各个数位的二进制进行反转后的十进制数的三次方之和为这个数本身 
区间［l，r]中有多少个花仙水数?
输入：2个整数Ir (1<=<=r<10000，代表区间[l ,r] 
输出：一个整数，代表区间内“花仙水数”的个数
解释：比如数字68：6的二进制数为110，反转后为
为0001，代表1；43+13！=68，所以68不是“花仙水数 */

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
