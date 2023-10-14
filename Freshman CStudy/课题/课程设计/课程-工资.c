#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <windows.h>


#define Q 15               //����ַ������� 
#define N 500              //���Ա������ 


typedef struct workers{
	int workersID;            //ְ������
	char name[Q];             //ְ������
	double basicsalary;       //��������
	double allowance;         //����
	double taxsalary;         //��˰
	double truesalary;        //ʵ������
}WORKERS;                     //ְ����Ϣ


void Menu(int *n);                               //���˵� 
void Payroll(WORKERS work[],int *p);             //�������ʱ� 
void Taxsalary(WORKERS work[],int num);          //����ְ����˰��ʵ������
void Sort(WORKERS work[],int num ) ;             //�����ʴӸߵ�������
void Change(WORKERS work[],int num);             //�޸�ְ���Ĺ�����Ϣ
int Find(WORKERS work[],int num);                //�����Ų�ѯְ��������Ϣ
void Analyse(WORKERS work[],int num);            //ְ������ͳ�Ʒ��� 
void Printworkroll(WORKERS work[],int num);      //��ʾ������ϸ��
void Writefile(WORKERS work[],int num);          //������ݲ�д�� data.txt �ļ� 

	
int main()
{   
	WORKERS work[N];                             //����һ���ṹ���������洢Ա����Ϣ 
	char ch;                                     //chΪ����Ƿ񷵻����˵� 
	int n,num=0,ret;                             //nΪ������,numΪ������,ret�ж��� 
	while(1){
		system("cls");
		Menu(&n);                                //���˵� 
		
		switch(n){
			case 0:
				system("cls");                   //�˳����� 
				printf("�˳��ɹ���\n");
				exit(0);
			case 1:
				Payroll(work,&num); 			 //�������ʱ�
				break;
			case 2:
				Taxsalary(work,num);             //ְ����˰��ʵ������
				Writefile(work,num);             //������ݲ�д�� data.txt �ļ� 
				printf("������ɣ������������txt�ļ���\n");
				Sleep(2000);
				system("cls");
				break;
			case 3:
				Sort(work,num);                  //�����ʴӸߵ�������
				Printworkroll(work,num);         //��ʾ������ϸ��
				printf("\n�Ƿ񷵻����˵���Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 4:
				Change(work,num);                //�޸�ְ���Ĺ�����Ϣ
				printf("\n�Ƿ񷵻����˵���Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 5:
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
			case 6:
				Analyse(work,num);               //ְ������ͳ�Ʒ���
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
	printf("|       1.����ְ�����ʱ�                 |\n");
	printf("|       2.ְ����˰��ʵ������             |\n");
	printf("|       3.ʵ�����ʴӸߵ�������           |\n");
	printf("|       4.�޸�ְ��������Ϣ               |\n");
	printf("|       5.��ѯְ��������Ϣ               |\n");
	printf("|       6.ְ������ͳ�Ʒ���               |\n");
	printf("|       0.�˳�ϵͳ                       |\n");
	printf(" ����������������������������������������\n");
	printf("��ʾ���������������ѡ���Ӧ�Ĳ�����\n");
	scanf("%d",&a);
	*n=a;
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
		printf("��������:");
		scanf("%lf",&work[num].basicsalary);
		printf("����:");
		scanf("%lf",&work[num].allowance);
		printf("�Ƿ����¼�룿Y or N\n"); 
		fflush(stdin);
		scanf("%c",&ch);
		num++;
	}while(ch=='Y');
	
	*p=num;      //���������� 
	system("cls");
}


void Taxsalary(WORKERS work[],int num)            //ְ����˰��ʵ������
{
	
	int i;
	double money;
	for(i=0;i<num;i++)
	{
		money=work[i].basicsalary+work[i].allowance;
		if( money<3000)
		{
	  		work[i].taxsalary=0;
	 		work[i].truesalary= money-work[i].taxsalary;
   		}
		else if((money<4000)&&(money>=3000))
		{
			work[i].taxsalary=(money-3000)*0.05;
			work[i].truesalary= money-work[i].taxsalary; 
		}
		else
		{ 
			work[i].taxsalary=(money-3000)*0.05+(money-4000)*0.1;
			work[i].truesalary= money-work[i].taxsalary; 
		} 
	}
}


void Sort(WORKERS work[],int num)                 //�����ʴӸߵ�������
{
	int i,j;
    WORKERS temp;
	for (i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)    
		{
			if (work[i].truesalary<work[j].truesalary)
			{
				temp=work[j];
                work[j]=work[i];
                work[i]=temp;
			} 
		}	
	}
} 


void Change(WORKERS work[],int num)               //�޸�ְ���Ĺ�����Ϣ
{
	int n,sum,i;
	char ch;
	printf("�޸�ְ���Ĺ�����Ϣ\n\n");
	printf("��������Ĺ��ţ�");
	scanf("%d",&n);
	putchar('\n');
	for(i=0;i<num;i++){
		if(work[i].workersID==n){
			printf("����:%-10d\n",work[i].workersID);
			printf("����:%s\n",work[i].name); 
			printf("��������:%6.2lf\n",work[i].basicsalary); 
			printf("����:%6.2lf\n",work[i].allowance); 
			printf("��˰:%6.2lf\n",work[i].taxsalary); 
			printf("ʵ������:%6.2lf\n",work[i].truesalary); 
			printf("\n�Ƿ���Ҫ�޸���Ϣ��Y or N\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch=='Y'){
				printf("\n��������:");
				scanf("%lf",&work[i].basicsalary);
				printf("����:");
				scanf("%lf",&work[i].allowance);
				sum=work[i].basicsalary+work[i].allowance;
				if(sum<=3000){  
					work[i].taxsalary=0;
					work[i].truesalary=sum;
				}
				else if((sum<=4000)&&(sum>3000)){
					work[i].taxsalary=(sum-3000)*0.05;
	    			work[i].truesalary=3000+((sum-3000)*0.95);
				}
	   			else{
	    			work[i].taxsalary=50+(sum-4000)*0.10;
	    			work[i].truesalary=3950+((sum-4000)*0.9);
				}
				system("cls");
				
				printf("Ա����Ϣ�޸ĳɹ���\n\n");
				printf("��˰:%6.2lf\n",work[i].taxsalary); 
				printf("ʵ������:%6.2lf\n",work[i].truesalary); 
				
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
			printf("��������:%.2lf\n",work[i].basicsalary); 
			printf("����:%.2lf\n",work[i].allowance); 
			printf("��˰:%.2lf\n",work[i].taxsalary); 
			printf("ʵ������:%.2lf\n",work[i].truesalary); 
			break;
		}
    }
    return flag;
}


void Analyse(WORKERS work[],int num)              //ְ������ͳ�Ʒ���
{
	int i,s=0,m=0,l=0;      //s��ʾ����С��3000��������m��ʾ������3000��4000��������l��ʾ���ʴ���4000�������� 
	double x,y,z;
	for(i=0;i<num;i++)
	{
		if(work[i].truesalary<3000)	
		{
			s++;
		}	
		else if((work[i].truesalary<=4000)&&(work[i].truesalary>=3000))
		{
			m++;
		}		
		else
		{
			l++;
		}
	}
    x=(double)s/num*100;
	y=(double)m/num*100;
	z=(double)l/num*100;
	printf("ʵ������\n");
	printf("��3000Ԫ���£�        ����:%d\t����:%.2lf%%\n",s,x);      		
	printf("��3000����4000���£�  ����:%d\t����:%.2lf%%\n",m,y); 	
	printf("��4000���ϣ�          ����:%d\t����:%.2lf%%\n",l,z); 	
	
}


void Printworkroll(WORKERS work[],int num)        //��ʾ������ϸ��
{
	int i;
	printf("����\t����\t��������\t����\t��˰\tʵ������\n");
	for( i=0;i<num;i++){
		printf("%d\t",work[i].workersID);
		printf("%s\t",work[i].name); 
		printf("   %.2lf\t",work[i].basicsalary); 
		printf("%.2lf\t",work[i].allowance); 
		printf("%.2lf\t",work[i].taxsalary); 
		printf("%.2lf\n",work[i].truesalary); 
	}
}


void Writefile(WORKERS work[],int num)            //������ݲ�д�� data.txt �ļ�
{ 
	int i,j;
	WORKERS temp;
	for( i=0;i<num-1;i++)
	{
		for( j=i+1;j<num;j++)
		{
			if(work[i].workersID>work[j].workersID)
			{
			    temp=work[i];
			    work[i]=work[j];
			    work[j]=temp;
			}
		}
	}
	
	FILE *fp;
	if((fp=fopen("data.txt","w"))==0){
		printf("����\n");
		exit(0);
	}
	fprintf(fp,"ְ�����ʹ���ϵͳ\n�ɹ�¼��%d��\n������£�\n\n",num);
	fprintf(fp,"����\t����\t��������\t����\t��˰\tʵ������\n");
	for( i=0;i<num;i++){
		fprintf(fp,"%-10d\t",work[i].workersID);
		fprintf(fp,"%s\t",work[i].name); 
		fprintf(fp,"%.2lf\t",work[i].basicsalary); 
		fprintf(fp,"%.2lf\t",work[i].allowance); 
		fprintf(fp,"%.2lf\t",work[i].taxsalary); 
		fprintf(fp,"%.2lf\n",work[i].truesalary); 
	}
	fclose(fp);
}

