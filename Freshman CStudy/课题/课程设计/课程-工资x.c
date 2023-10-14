#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define Q 15               //最大字符串长度 
#define N 500              //最大员工数量 


typedef struct workers{
	int workersID;            //职工工号
	char name[Q];             //职工姓名
	double salary;       		//工资
	char sex[Q];				//性别
 	char age;					//年龄
 	char position[Q];			//岗位
	
}WORKERS;                     //职工信息

												//系列声明 
void Menu(int *n);                               //主菜单 ，当用户输入0时程序结束 
void Payroll(WORKERS work[],int *p);             //建立工资表 
void Sort(WORKERS work[],int num ) ;             //将工资从高到低排序
void Change(WORKERS work[],int num);             //修改职工的信息
int Find(WORKERS work[],int num);                //按工号查询职工工资信息


	
int main()
{   
	WORKERS work[N];                             //定义一个结构体数组来存储员工信息 
	char ch;                                     //ch为检测是否返回主菜单 
	int n,num=0,ret;                             //n为操作数,num为总人数,ret判断数 
	while(1){
		system("cls");							//清屏 
		Menu(&n);                                //主菜单 
		
		switch(n){
			case 0:
				system("cls");                   //退出程序 
				printf("退出成功！\n");
				exit(0);//退出 
			case 1:
				Payroll(work,&num); 			 //建立工资表
				break;

			case 2:
				Sort(work,num);                  //将工资从高到低排序
				Printworkroll(work,num);         //显示工资明细表
				printf("\n是否返回主菜单？Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 3:
				Change(work,num);                //修改职工的工资信息
				printf("\n是否返回主菜单？Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 4:
				ret=Find(work,num);              //按工号查询职工工资信息
				if(ret==0){
					printf("查无此人！");        //反馈查询不到信息 
				}
				printf("\n是否返回主菜单？Y or N\n");
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


void Menu(int *n)                                 //主菜单   *n为返回操作数 
{
	int a;
	printf(" ——————职工工资管理系统——————\n");
	printf("|       1.建立职工信息表                 |\n");
	printf("|       2.员工信息按工资从高到低排序     |\n");
	printf("|       3.修改职工信息               	 |\n");
	printf("|       4.查询职工信息              	 |\n");
	printf("|       0.退出系统                       |\n");
	printf(" ————————————————————\n");
	printf("提示：请输入数字序号选择对应的操作！\n");
	scanf("%d",&a);
	*n=a;				//地址 
	system("cls");
}


void Payroll(WORKERS work[],int *p)               //建立工资表 
{
	int num=*p;
	char ch;
	do{
		system("cls");
		printf("员工（%d）的信息\n",num+1);
		printf("工号:");
		scanf("%d",&work[num].workersID);
		printf("姓名:");
		scanf("%s",&work[num].name);
		printf("工资:");
		scanf("%lf",&work[num].salary);
		printf("性别:");
		scanf("%s",&work[num].sex);
		printf("年龄:");
		scanf("%d",&work[num].age);
		printf("岗位:");
		scanf("%s",&work[num].position);

		printf("是否继续录入？Y or N\n"); 
		fflush(stdin);
		scanf("%c",&ch);
		num++;
	}while(ch=='Y');
	
	*p=num;      			//返回总人数 
	system("cls");
}


void Sort(WORKERS work[],int num)            //将工资从高到低排序
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


void Change(WORKERS work[],int num)               //修改职工的信息
{
	int n,sum,i;
	char ch;
	printf("修改职工的工资信息\n\n");
	printf("请输入你的工号：");
	scanf("%d",&n);
	putchar('\n');
	for(i=0;i<num;i++)
	{
		if(work[i].workersID==n)
		{
			printf("工号:%-10d\n",work[i].workersID);
			printf("姓名:%s\n",work[i].name); 
			printf("工资:%6.2lf\n",work[i].salary); 
			printf("年龄:%6d\n",work[i].age); 
			printf("岗位:%s\n",work[i].position); 
		 
			printf("\n是否需要修改信息？Y or N\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch=='Y'){
				printf("\n工资:");
				scanf("%lf",&work[i].salary);
				printf("岗位:");
				scanf("%s",&work[i].position);
			
				system("cls");
				
				printf("员工信息修改成功！\n\n");
			
				
				break;	
			}
			else{
				break;
			}	
		}
	}
} 


int Find(WORKERS work[],int num)                  //按工号查询职工工资信息
{
	int s,i,flag=0;
	printf("查询职工工资信息\n\n");
	printf("请输入您的工号：");
	scanf("%d",&s);
	putchar('\n');
	for(i=0;i<num;i++)
	{
		if(work[i].workersID==s)                 //查询输入的工号并调用信息； 
		{
			flag=1; 
			printf("工号:%d\n",work[i].workersID);
			printf("姓名:%s\n",work[i].name); 
			printf("工资:%.2lf\n",work[i].salary); 
			printf("性别:%s\n",work[i].sex); 
			printf("年龄：%d\n",work[i].age); 
			printf("岗位:%s\n",work[i].position); 
			break;
		}
    }
    return flag;
}



void Printworkroll(WORKERS work[],int num)        //显示工资明细表
{
	int i;
	printf("工号\t姓名\t工资\t岗位\n");
	for( i=0;i<num;i++){
		printf("%d\t",work[i].workersID);
		printf("%s\t",work[i].name); 
		printf(" %.2lf\t",work[i].salary); 
		printf("  %s\n",work[i].position); 

	}
}


