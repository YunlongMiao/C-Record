#include<stdio.h>
int main()
{int i,n,x,type;
printf("�������ʽΪxxxxyy������i\n");
scanf("%d",&i);
x=(i%100);
if((1<=x||x<=12)!=1)
printf("�����ʽ����");
 else if(x>=3||x<=5){
	type=1;
}else if(x>=6||x<=8){
	type=2;
}else if(x>=9||x<=11){
	type=3;
}else if((x=1)||(x=2)||(x=12)){
	type=4;
}switch(type)
{case 1:
	printf("����\n");
	break;
 case 2:
 	printf("�ļ�\n");
 	break;
 case 3:
 	printf("�＾\n");
 	break;
 case 4:
    printf("����\n");
	break;	
}return 0;
}

 
