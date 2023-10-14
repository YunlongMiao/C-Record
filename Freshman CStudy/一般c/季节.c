#include<stdio.h>
int main()
{int i,n,x,type;
printf("请输入格式为xxxxyy的年月i\n");
scanf("%d",&i);
x=(i%100);
if((1<=x||x<=12)!=1)
printf("输入格式错误");
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
	printf("春季\n");
	break;
 case 2:
 	printf("夏季\n");
 	break;
 case 3:
 	printf("秋季\n");
 	break;
 case 4:
    printf("冬季\n");
	break;	
}return 0;
}

 
