#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <windows.h>


#define Q 15               //最大字符串长度 
#define N 500              //最大员工数量 


typedef struct workers{
	int workersID;            //职工工号
	char name[Q];             //职工姓名
	double basicsalary;       //基本工资
	double allowance;         //津贴
	double taxsalary;         //扣税
	double truesalary;        //实发工资
}WORKERS;                     //职工信息


void Menu(int *n);                               //主菜单 
void Payroll(WORKERS work[],int *p);             //建立工资表 
void Taxsalary(WORKERS work[],int num);          //计算职工扣税和实发工资
void Sort(WORKERS work[],int num ) ;             //将工资从高到低排序
void Change(WORKERS work[],int num);             //修改职工的工资信息
int Find(WORKERS work[],int num);                //按工号查询职工工资信息
void Analyse(WORKERS work[],int num);            //职工工资统计分析 
void Printworkroll(WORKERS work[],int num);      //显示工资明细表
void Writefile(WORKERS work[],int num);          //输出数据并写入 data.txt 文件 

	
int main()
{   
	WORKERS work[N];                             //定义一个结构体数组来存储员工信息 
	char ch;                                     //ch为检测是否返回主菜单 
	int n,num=0,ret;                             //n为操作数,num为总人数,ret判断数 
	while(1){
		system("cls");
		Menu(&n);                                //主菜单 
		
		switch(n){
			case 0:
				system("cls");                   //退出程序 
				printf("退出成功！\n");
				exit(0);
			case 1:
				Payroll(work,&num); 			 //建立工资表
				break;
			case 2:
				Taxsalary(work,num);             //职工扣税和实发工资
				Writefile(work,num);             //输出数据并写入 data.txt 文件 
				printf("计算完成，并输出数据至txt文件！\n");
				Sleep(2000);
				system("cls");
				break;
			case 3:
				Sort(work,num);                  //将工资从高到低排序
				Printworkroll(work,num);         //显示工资明细表
				printf("\n是否返回主菜单？Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 4:
				Change(work,num);                //修改职工的工资信息
				printf("\n是否返回主菜单？Y or N\n");
				fflush(stdin);
				ch=getchar();
				if(ch=='N'){
					exit(0);
				}
				break;
			case 5:
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
			case 6:
				Analyse(work,num);               //职工工资统计分析
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
	printf("|       1.建立职工工资表                 |\n");
	printf("|       2.职工扣税和实发工资             |\n");
	printf("|       3.实发工资从高到低排序           |\n");
	printf("|       4.修改职工工资信息               |\n");
	printf("|       5.查询职工工资信息               |\n");
	printf("|       6.职工工资统计分析               |\n");
	printf("|       0.退出系统                       |\n");
	printf(" ————————————————————\n");
	printf("提示：请输入数字序号选择对应的操作！\n");
	scanf("%d",&a);
	*n=a;
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
		printf("基本工资:");
		scanf("%lf",&work[num].basicsalary);
		printf("津贴:");
		scanf("%lf",&work[num].allowance);
		printf("是否继续录入？Y or N\n"); 
		fflush(stdin);
		scanf("%c",&ch);
		num++;
	}while(ch=='Y');
	
	*p=num;      //返回总人数 
	system("cls");
}


void Taxsalary(WORKERS work[],int num)            //职工扣税和实发工资
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


void Sort(WORKERS work[],int num)                 //将工资从高到低排序
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


void Change(WORKERS work[],int num)               //修改职工的工资信息
{
	int n,sum,i;
	char ch;
	printf("修改职工的工资信息\n\n");
	printf("请输入你的工号：");
	scanf("%d",&n);
	putchar('\n');
	for(i=0;i<num;i++){
		if(work[i].workersID==n){
			printf("工号:%-10d\n",work[i].workersID);
			printf("姓名:%s\n",work[i].name); 
			printf("基本工资:%6.2lf\n",work[i].basicsalary); 
			printf("津贴:%6.2lf\n",work[i].allowance); 
			printf("扣税:%6.2lf\n",work[i].taxsalary); 
			printf("实发工资:%6.2lf\n",work[i].truesalary); 
			printf("\n是否需要修改信息？Y or N\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch=='Y'){
				printf("\n基本工资:");
				scanf("%lf",&work[i].basicsalary);
				printf("津贴:");
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
				
				printf("员工信息修改成功！\n\n");
				printf("扣税:%6.2lf\n",work[i].taxsalary); 
				printf("实发工资:%6.2lf\n",work[i].truesalary); 
				
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
			printf("基本工资:%.2lf\n",work[i].basicsalary); 
			printf("津贴:%.2lf\n",work[i].allowance); 
			printf("扣税:%.2lf\n",work[i].taxsalary); 
			printf("实发工资:%.2lf\n",work[i].truesalary); 
			break;
		}
    }
    return flag;
}


void Analyse(WORKERS work[],int num)              //职工工资统计分析
{
	int i,s=0,m=0,l=0;      //s表示工资小于3000的人数；m表示工资在3000到4000的人数；l表示工资大于4000的人数。 
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
	printf("实发工资\n");
	printf("（3000元以下）        人数:%d\t比例:%.2lf%%\n",s,x);      		
	printf("（3000以上4000以下）  人数:%d\t比例:%.2lf%%\n",m,y); 	
	printf("（4000以上）          人数:%d\t比例:%.2lf%%\n",l,z); 	
	
}


void Printworkroll(WORKERS work[],int num)        //显示工资明细表
{
	int i;
	printf("工号\t姓名\t基本工资\t津贴\t扣税\t实发工资\n");
	for( i=0;i<num;i++){
		printf("%d\t",work[i].workersID);
		printf("%s\t",work[i].name); 
		printf("   %.2lf\t",work[i].basicsalary); 
		printf("%.2lf\t",work[i].allowance); 
		printf("%.2lf\t",work[i].taxsalary); 
		printf("%.2lf\n",work[i].truesalary); 
	}
}


void Writefile(WORKERS work[],int num)            //输出数据并写入 data.txt 文件
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
		printf("错误！\n");
		exit(0);
	}
	fprintf(fp,"职工工资管理系统\n成功录入%d人\n详表如下：\n\n",num);
	fprintf(fp,"工号\t姓名\t基本工资\t津贴\t扣税\t实发工资\n");
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

