#include<stdio.h>
#include<stdlib.h>
#define N 100
int temp,tempx;

struct create
 {
 	int num;			//职工号
 	char name[20];		//姓名
 	char sex[5];		//性别
 	char age;			//年龄
 	char position[100];	//岗位
 	float  total;			//工资
 	int  sales;			//销售额 
 	int  time;			//员工工作时间 
 	int  htotal;		//小时工资 
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
	
	printf("*****************************欢迎使用工资管理系统*****************************");
	
	printf("*********************************************************************************\n\n\n\n\n");
	
	printf("\t\t\t\t     制作:苗云龙 \n");
	
	printf("\t\t\t\t        2021年12月\n\n\n\n");		/*	"/t"==tab		*/
	
	 
	
	printf("\t\t\t    ***按任意键进入***\n");
 } 
 /* 职工号 姓名 性别 年龄 岗位  工资 排名  
 公司有四类人员（经理、技术员、销售员、销售经理）*/
 
 void jiemian()
{

system("cls");

printf("***菜单***\n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  1  输入  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  2  显示  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  3  查找  \n\n");

//printf(">>>>>>>>>>>>>>>>>>>>>>>>>  4  删除  \n\n");

//printf(">>>>>>>>>>>>>>>>>>>>>>>>>  5  添加  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  6  修改  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  7  统计  \n\n");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>  8  退出  \n\n");

printf("说明：*如首次使用 尚未输入数据 请先输入数据 \n      *输入的数据将自动保存 \n      *再次选择输入功能时原数据将被覆盖\n\n");

}


















int input()   /*录入函数，  对各职工基本信息进行录入*/

{

    int i,m;
    int sum;//销售总额 
	//*temp=sum;
	sum=&temp;
  	system("cls");

  	printf("职工人数(1--100):\n");

    scanf("%d",&m);
    tempx=&m;

	for (i=0,sum=0;i<m;i++)
    {

		printf("请输入职工号: \n");
		
		scanf("%d",&em[i].num);
		
		 
		
		printf("请输入姓名: \n ");
		
		scanf("%s",&em[i].name);
		
		getchar();
		
		 
		
		printf("请输入性别: \n ");//职工号 姓名 性别 年龄 岗位  工资
		
		scanf("%s",&em[i].sex);
		
		  
		
		printf("请输入年龄:\n ");
		
		scanf("%c",&em[i].age);
		
		printf("请输入岗位: \n ");
		
		scanf("%s",&em[i].position);
		
		printf("如果你为销售员，请输入你的销售额。其他人员请输入0");
		
		scanf("%d",em[i].sales);
		
		printf("请输入员工工作时间");
	
   		scanf("%d",em[i].time);
   		
   		printf("如果你为技术员，请输入你的小时工资。其他人员请输入0");
		
		scanf("%d",em[i].htotal);
		
		sum+=em[i].sales;

    }
	//	*temp=&sum;

    printf("\n创建完毕!\n");

       save(m);// 保存职工人数m

}














/*
经理：固定月薪为8000
技术员：工作时间*小时工资
销售员：销售额*4%
销售经理：5000+部门销售总额*0.5%
*/
void calculate_total(struct create *ps, int len)	//计算工资
{
	int i,m;
	//m=input();			//销售总额
	m=temp;
	for(i=0; i<m; i++)
	{
		if((ps+1)->position=="经理") //经理、技术员、销售员、销售经理
			em[i].total=8000;
			
		else if((ps+1)->position=="技术员")
			em[i].total=em[i].time*em[i].htotal;
			
		else if((ps+1)->position=="销售员")
			em[i].total=em[i].sales*0.04;
				
		else if((ps+1)->position=="销售经理")
			em[i].total=m*0.005+5000;
			
		else 
		printf("职位输入错误"); 
	}
 }













void xianshi()
{
/*职工号 姓名 性别 年龄 岗位  工资 排名及某部门经理所辖部门各销售员的业绩
及自己的工资表.
 */

  int i,sum=0;

  int m=load();

  system("cls");

  printf("职工号   姓名   性别  年龄   岗位    工资 \n");

  for(i=0;i<m;i++) /*m为输入部分的职工人数*/

  {
  	printf("\n  %-6d%-6s  %-8d  %-8d  %-8s  %-8d  ",em[i].num,em[i].name,em[i].sex,em[i].age,em[i].position,em[i].total);

   	sum+=em[i].total;//计算员工总工资之和

  }

   printf("\n\n职工平均工资为：%d \n",sum/m);

}


void xiugai(struct create *ps)	//修改数据 
{
	int n,i;
	printf("请输入所要修改的员工职工号\n");
	scanf("%d\n",&n);
	for(i=0; i<tempx; i++)
	{
		
	}
	
}




void sta()//统计函数

{

  int i;

  int sum=0; 

  int a=0,b=0,c=0;

  int m=load();

system("cls");//清屏函数

  for(i=0;i<m;i++) /*m为输入部分的职工人数*/

  {sum+=em[i].total;

   if((em[i].total)<=1500&&em[i].total>=1000) 

     {a++;}

   if(em[i].total>1500&&em[i].total<=2000) 

     {b++;}

   if(em[i].total>2000) 

     {c++;}

}

 

printf("\n\n工资总额为：%d\n",sum);

printf("平均工资为：%d\n",sum/m);

printf("\n基本工资、职务工资、津贴之和\n");

printf("在1000-1500圆的员工占总员工的百分之%d\n",a*100/m); 

printf("在1500-2000圆的员工占总员工的百分之%d\n",b*100/m); 

printf("在2000圆以上的员工占总员工的百分之%d\n",c*100/m);

printf("\n\n按任意键继续");

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

     printf("功能选择(1--8):\n");

     scanf("%d",&n);

     if(n>=1&&n<=7)

     {

     button=1;

     break;

     }

     else

     {

    button=0;

    printf("您输入有误,请重新选择!");

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

   printf("按任意键继续\n");

   getch();

      system("cls");  /*清屏*/

      menu(); /*调用菜单函数*/

      printf("功能选择(1--8):\n");

      scanf("%d",&n);

      printf("\n");

     }

}
