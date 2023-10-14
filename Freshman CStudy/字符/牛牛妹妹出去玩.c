 #include<stdio.h>
 int main()
 {
 	char a[20],b[20];
 	printf("明天出去玩吗？");//定义字符组变量，虽然输入是一串字符，但判断时只判断第一个一个字符 
 	scanf("%s",a);
 	if(a[0]=='Y')
 	{
 		printf("下午两点？");
 		scanf("%s",b);
 	  if(b[0]=='Y')
      {
    	  printf("OK");
      }
      else
      printf("那就下午三点！");
	  
	}
	else
	printf("那么改天再约！");
 }
