#include<stdio.h>
#include<stdlib.h>
#define N 100
int temp,tempx;

struct create
 {
 	int num;			//ְ����
 	char name[20];		//����
 	char sex[5];		//�Ա�
 	char age;			//����
 	char position[100];	//��λ
 	float  total;			//����
 	int  sales;			//���۶� 
 	int  time;			//Ա������ʱ�� 
 	int  htotal;		//Сʱ���� 
 }em[100]; 
 
 void start();
 void jiemian();
 int input();
 void calculate_total();
 void sta();
 
 
 
 
 
 
 
void start()
{
	printf("\n\n\n\n\n\n");

	printf("********************************************************************************");
	
	printf("*****************************��ӭʹ�ù��ʹ���ϵͳ*****************************");
	
	printf("*********************************************************************************\n\n\n\n\n");
	
	printf("\t\t\t\t     ����:������ \n");
	
	printf("\t\t\t\t        2021��12��\n\n\n\n");		/*	"/t"==tab		*/
	
	 
	
	printf("\t\t\t    ***�����������***\n");
 } 
 /* ְ���� ���� �Ա� ���� ��λ  ���� ����  
 ��˾��������Ա����������Ա������Ա�����۾���*/
 
 void jiemian()
{

system("cls");

printf("***�˵�***\n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  1  ����  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  2  ��ʾ  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  3  ����  \n\n");

//printf(">>>>>>>>>>>>>>>>>>>>>>>>>  4  ɾ��  \n\n");

//printf(">>>>>>>>>>>>>>>>>>>>>>>>>  5  ���  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  6  �޸�  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  7  ͳ��  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  8  �˳�  \n\n");

printf("˵����*���״�ʹ�� ��δ�������� ������������ \n      *��������ݽ��Զ����� \n      *�ٴ�ѡ�����빦��ʱԭ���ݽ�������\n\n");

}


















int input()   /*¼�뺯����  �Ը�ְ��������Ϣ����¼��*/

{

    int i,m;
    int sum;//�����ܶ� 
	//*temp=sum;
	sum=&temp;
  	system("cls");

  	printf("ְ������(1--100):\n");

    scanf("%d",&m);
    tempx=&m;

	for (i=0,sum=0;i<m;i++)
    {

		printf("������ְ����: \n");
		
		scanf("%d",&em[i].num);
		
		 
		
		printf("����������: \n ");
		
		scanf("%s",&em[i].name);
		
		getchar();
		
		 
		
		printf("�������Ա�: \n ");//ְ���� ���� �Ա� ���� ��λ  ����
		
		scanf("%s",&em[i].sex);
		
		  
		
		printf("����������:\n ");
		
		scanf("%c",&em[i].age);
		
		printf("�������λ: \n ");
		
		scanf("%s",&em[i].position);
		
		printf("�����Ϊ����Ա��������������۶������Ա������0");
		
		scanf("%d",em[i].sales);
		
		printf("������Ա������ʱ��");
	
   		scanf("%d",em[i].time);
   		
   		printf("�����Ϊ����Ա�����������Сʱ���ʡ�������Ա������0");
		
		scanf("%d",em[i].htotal);
		
		sum+=em[i].sales;

    }
	//	*temp=&sum;

    printf("\n�������!\n");

       save(m);// ����ְ������m

}














/*
�����̶���нΪ8000
����Ա������ʱ��*Сʱ����
����Ա�����۶�*4%
���۾���5000+���������ܶ�*0.5%
*/
void calculate_total(struct create *ps, int len)	//���㹤��
{
	int i,m;
	//m=input();			//�����ܶ�
	m=temp;
	for(i=0; i<m; i++)
	{
		if((ps+1)->position=="����") //��������Ա������Ա�����۾���
			em[i].total=8000;
			
		else if((ps+1)->position=="����Ա")
			em[i].total=em[i].time*em[i].htotal;
			
		else if((ps+1)->position=="����Ա")
			em[i].total=em[i].sales*0.04;
				
		else if((ps+1)->position=="���۾���")
			em[i].total=m*0.005+5000;
			
		else 
		printf("ְλ�������"); 
	}
 }













void xianshi()
{
/*ְ���� ���� �Ա� ���� ��λ  ���� ������ĳ���ž�����Ͻ���Ÿ�����Ա��ҵ��
���Լ��Ĺ��ʱ�.
 */

  int i,sum=0;

  int m=load();

  system("cls");

  printf("ְ����   ����   �Ա�  ����   ��λ    ���� \n");

  for(i=0;i<m;i++) /*mΪ���벿�ֵ�ְ������*/

  {
  	printf("\n  %-6d%-6s  %-8d  %-8d  %-8s  %-8d  ",em[i].num,em[i].name,em[i].sex,em[i].age,em[i].position,em[i].total);

   	sum+=em[i].total;//����Ա���ܹ���֮��

  }

   printf("\n\nְ��ƽ������Ϊ��%d \n",sum/m);

}


void xiugai(struct create *ps)	//�޸����� 
{
	int n,i;
	printf("��������Ҫ�޸ĵ�Ա��ְ����\n");
	scanf("%d\n",&n);
	for(i=0; i<tempx; i++)
	{
		
	}
	
}




void sta()//ͳ�ƺ���

{

  int i;

  int sum=0; 

  int a=0,b=0,c=0;

  int m=load();

system("cls");//��������

  for(i=0;i<m;i++) /*mΪ���벿�ֵ�ְ������*/

  {sum+=em[i].total;

   if((em[i].total)<=1500&&em[i].total>=1000) 

     {a++;}

   if(em[i].total>1500&&em[i].total<=2000) 

     {b++;}

   if(em[i].total>2000) 

     {c++;}

}

 

printf("\n\n�����ܶ�Ϊ��%d\n",sum);

printf("ƽ������Ϊ��%d\n",sum/m);

printf("\n�������ʡ�ְ���ʡ�����֮��\n");

printf("��1000-1500Բ��Ա��ռ��Ա���İٷ�֮%d\n",a*100/m); 

printf("��1500-2000Բ��Ա��ռ��Ա���İٷ�֮%d\n",b*100/m); 

printf("��2000Բ���ϵ�Ա��ռ��Ա���İٷ�֮%d\n",c*100/m);

printf("\n\n�����������");

getch();

menu();

}

 
 
 
 int main()
 {   

int n,button;

  char a; 

  start();

getch();

  menu();  

  do

  {

     printf("����ѡ��(1--8):\n");

     scanf("%d",&n);

     if(n>=1&&n<=7)

     {

     button=1;

     break;

     }

     else

     {

    button=0;

    printf("����������,������ѡ��!");

     }

  }

     while(button==0);

     while(button==1)

     { 

switch(n)

   {

        case 1: input();break;

        case 2: display();break;

        case 3: search();break; 

        case 4:del();break;

        case 5: add();break;

        case 6:modify();break;

        case 7:sta();break;

        case 8:exit(0);break;

        default :break;

   }

  

getchar();

   printf("\n");

   printf("�����������\n");

   getch();

      system("cls");  /*����*/

      menu(); /*���ò˵�����*/

      printf("����ѡ��(1--8):\n");

      scanf("%d",&n);

      printf("\n");

     }

}
