 #include<stdio.h>
 int main()
 {
 	char a[20],b[20];
 	printf("�����ȥ����");//�����ַ����������Ȼ������һ���ַ������ж�ʱֻ�жϵ�һ��һ���ַ� 
 	scanf("%s",a);
 	if(a[0]=='Y')
 	{
 		printf("�������㣿");
 		scanf("%s",b);
 	  if(b[0]=='Y')
      {
    	  printf("OK");
      }
      else
      printf("�Ǿ��������㣡");
	  
	}
	else
	printf("��ô������Լ��");
 }
