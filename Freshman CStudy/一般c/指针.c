#include<stdio.h>
int main()
{	
	double wages[3]={1000.0,2000.0,3000.0};
	short stacks[3]={3,2,1};
	double *pw=wages;
	short *ps=&stacks[0];
	//short*ps=stacks;
	printf("pw=%#x,*pw=%lf\n",pw,*pw);
	pw+=1;
	printf("pwָ���һ��\n");
	printf("pw=%#x,*pw=%lf\n\n",pw,*pw);
	
	printf("ps=%#x,*ps=%lf\n",ps,*ps);
	ps+=1;
	printf("psָ���һ��\n");
	printf("ps=%#x,*ps=%lf\n\n",ps,*ps);
	
	printf("��������ʽ���\n");
	printf("stacks[0]=%d,stacks[1]=%d\n",stacks[0],stacks[1]);
	
	printf("һֱ����ʽ���:\n");
	printf("*stacks=%d,*(stacks+1)=%d,*(stacks+1)=%d\n",*stacks,*(stacks ));
	
	//
	printf("wages����Ĵ�С��%d\n",sizeof(wages));
	printf("pwָ��Ĵ�С��%d",sizeof(pw));
	return 0;
	
	
 } 
