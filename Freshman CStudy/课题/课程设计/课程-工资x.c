#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define Q 15               //����ַ������� 
#define N 500              //���Ա������ 


typedef struct workers{
	int workersID;            //ְ������
	char name[Q];             //ְ������
	double salary;       		//����
	char sex[Q];				//�Ա�
 	char age;					//����
 	char position[Q];			//��λ
	
}WORKERS;                     //ְ����Ϣ

												//ϵ������ 
void Menu(int *n);                               //���˵� �����û�����0ʱ������� 
void Payroll(WORKERS work[],int *p);             //�������ʱ� 
void Sort(WORKERS work[],int num ) ;             //�����ʴӸߵ�������
void Change(WORKERS work[],int num);             //�޸�ְ������Ϣ
int Find(WORKERS work[],int num);                //�����Ų�ѯְ��������Ϣ


	
int main()
{   
	WORKERS work[N];                             //����һ���ṹ���������洢Ա����Ϣ 
	char ch;                                     //chΪ����Ƿ񷵻����˵� 
	int n,num=0,ret;                             //nΪ������,numΪ������,ret�ж��� 
	while(1){
		system("cls");							//���� 
		Menu(&n);                                //���˵� 
		
		switch(n){
			case 0:
				system("cls");                   //�˳����� 
				printf("�˳��ɹ���\n");
				exit(0);//�˳� 
			case 1:
				Payroll(work,&num); 			 //�������ʱ�
				break;

			case 2:
				Sort(work,num);                  //�����ʴӸߵ�������
				Printworkroll(work,num);         //��ʾ������ϸ��
				printf("\n�Ƿ񷵻����˵���Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 3:
				Change(work,num);                //�޸�ְ���Ĺ�����Ϣ
				printf("\n�Ƿ񷵻����˵���Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 4:
				ret=Find(work,num);              //�����Ų�ѯְ��������Ϣ
				if(ret==0){
					printf("���޴��ˣ�");        //������ѯ������Ϣ 
				}
				printf("\n�Ƿ񷵻����˵���Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;

		}
	}
	return 0;
}


void Menu(int *n)                                 //���˵�   *nΪ���ز����� 
{
	int a;
	printf(" ������������ְ�����ʹ���ϵͳ������������\n");
	printf("|       1.����ְ����Ϣ��                 |\n");
	printf("|       2.Ա����Ϣ�����ʴӸߵ�������     |\n");
	printf("|       3.�޸�ְ����Ϣ               	 |\n");
	printf("|       4.��ѯְ����Ϣ              	 |\n");
	printf("|       0.�˳�ϵͳ                       |\n");
	printf(" ����������������������������������������\n");
	printf("��ʾ���������������ѡ���Ӧ�Ĳ�����\n");
	scanf("%d",&a);
	*n=a;				//��ַ 
	system("cls");
}


void Payroll(WORKERS work[],int *p)               //�������ʱ� 
{
	int num=*p;
	char ch;
	do{
		system("cls");
		printf("Ա����%d������Ϣ\n",num+1);
		printf("����:");
		scanf("%d",&work[num].workersID);
		printf("����:");
		scanf("%s",&work[num].name);
		printf("����:");
		scanf("%lf",&work[num].salary);
		printf("�Ա�:");
		scanf("%s",&work[num].sex);
		printf("����:");
		scanf("%d",&work[num].age);
		printf("��λ:");
		scanf("%s",&work[num].position);

		printf("�Ƿ����¼�룿Y or N\n"); 
		fflush(stdin);
		scanf("%c",&ch);
		num++;
	}while(ch=='Y');
	
	*p=num;      			//���������� 
	system("cls");
}


void Sort(WORKERS work[],int num)            //�����ʴӸߵ�������
{
	int i,j;
    WORKERS temp;
	for (i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)    
		{
			if (work[i].salary<work[j].salary)
			{
				temp=work[j];
                work[j]=work[i];
                work[i]=temp;
			} 
		}	
	}
} 


void Change(WORKERS work[],int num)               //�޸�ְ������Ϣ
{
	int n,sum,i;
	char ch;
	printf("�޸�ְ���Ĺ�����Ϣ\n\n");
	printf("��������Ĺ��ţ�");
	scanf("%d",&n);
	putchar('\n');
	for(i=0;i<num;i++)
	{
		if(work[i].workersID==n)
		{
			printf("����:%-10d\n",work[i].workersID);
			printf("����:%s\n",work[i].name); 
			printf("����:%6.2lf\n",work[i].salary); 
			printf("����:%6d\n",work[i].age); 
			printf("��λ:%s\n",work[i].position); 
		 
			printf("\n�Ƿ���Ҫ�޸���Ϣ��Y or N\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch=='Y'){
				printf("\n����:");
				scanf("%lf",&work[i].salary);
				printf("��λ:");
				scanf("%s",&work[i].position);
			
				system("cls");
				
				printf("Ա����Ϣ�޸ĳɹ���\n\n");
			
				
				break;	
			}
			else{
				break;
			}	
		}
	}
} 


int Find(WORKERS work[],int num)                  //�����Ų�ѯְ��������Ϣ
{
	int s,i,flag=0;
	printf("��ѯְ��������Ϣ\n\n");
	printf("���������Ĺ��ţ�");
	scanf("%d",&s);
	putchar('\n');
	for(i=0;i<num;i++)
	{
		if(work[i].workersID==s)                 //��ѯ����Ĺ��Ų�������Ϣ�� 
		{
			flag=1; 
			printf("����:%d\n",work[i].workersID);
			printf("����:%s\n",work[i].name); 
			printf("����:%.2lf\n",work[i].salary); 
			printf("�Ա�:%s\n",work[i].sex); 
			printf("���䣺%d\n",work[i].age); 
			printf("��λ:%s\n",work[i].position); 
			break;
		}
    }
    return flag;
}



void Printworkroll(WORKERS work[],int num)        //��ʾ������ϸ��
{
	int i;
	printf("����\t����\t����\t��λ\n");
	for( i=0;i<num;i++){
		printf("%d\t",work[i].workersID);
		printf("%s\t",work[i].name); 
		printf(" %.2lf\t",work[i].salary); 
		printf("  %s\n",work[i].position); 

	}
}


