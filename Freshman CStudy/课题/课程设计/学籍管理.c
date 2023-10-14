#include    "stdio.h"
#include    "string.h"
#include     "stdlib.h"
#define PF printf		//输入输出 
#define SF scanf
#define N 20

FILE *fp;
static int n = 0, i, m;			//学籍管理 

struct date {			//结构体 
	char year[10];
	char month[10];
	char day[10];
};

struct classmate {
	char name[20];
	char num[20];
	char sex[10];
	char clas[40];
	struct date birth;
	char time[20];
	char specialit[20];
	char remark[40];

} stud[N] = {NULL};


void add() {
	char j;

front1:

	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;

	system("cls");  /*清屏*/

	PF("\n");
	PF("\n请输入要添加的姓名:");
	SF("%s", stud[n].name);
	PF("\n请输入要添加的学号(12位):");
	SF("%s", &stud[n].num);
	PF("\n请输入要添加的性别(男/女):");
	SF("\n%s", &stud[n].sex);
	PF("\n请输入要添加的班级:");
	SF("%s", &stud[n].clas);
	PF("\n请输入要添加的出生年份：");
	SF("%s", &stud[n].birth.year);
	PF("\n请输入要添加的出生月份：");
	SF("%s", &stud[n].birth.month);
	PF("\n请输入要添加的出生日子：");
	SF("%s", &stud[n].birth.day);
	PF("\n请输入要添加的入学日期：");
	SF("%s", &stud[n].time);
	PF("\n请输入要添加的专业：");
	SF("%s", &stud[n].specialit);
	PF("\n请输入要添加的备注:");
	SF("%s", stud[n].remark);
	getchar();
	n++;
	PF("是否继续(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y') {
		n++;
		goto front1;
	}        /*再输入记录*/


}

void del() {
	int  k = 0;
	char j, s[20];
front2:
	;

	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;

	system("cls");  /*清屏*/

	PF("请输入要删除的学号:\n");
	getchar();
	gets(s);
	for (i = 0; i < n; i++)
		if (strcmp(s, stud[i].num) == 0) {
			k = 1;
			break;
		}       /*查找记录*/
	if (k == 1) {                              /*删除记录*/
		if (n == 1) {
			*stud[0].name = '\0';
			*stud[0].num = '\0';
			*stud[0].sex = '\0';
			*stud[0].clas = '\0';
			*stud[0].birth.year = '\0';
			*stud[0].birth.month = '\0';
			*stud[0].birth.day = '\0';
			*stud[0].time = '\0';
			*stud[0].specialit = '\0';
			*stud[0].remark = '\0';
		} else {
			for (k = i; k < n - 1; k++) {
				stud[k] = stud[k + 1];
			}
			*stud[n - 1].name = '\0';
			*stud[n - 1].num = '\0';
			*stud[n - 1].sex = '\0';
			*stud[n - 1].clas = '\0';
			*stud[n - 1].birth.year = '\0';
			*stud[n - 1].birth.month = '\0';
			*stud[n - 1].birth.day = '\0';
			*stud[n - 1].time = '\0';
			*stud[n - 1].specialit = '\0';
			*stud[n - 1].remark = '\0';
		}

		PF("已删除\n\n");
	} else {
		PF("找不到要删除的记录!\n");
		PF("按回车键返回:");
		getchar();
	}
	PF("是否继续(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y')
		goto front2;

}

void find() {
	int  i, s = 0;
	char j, k[20];
	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;
front3:
	s = 0;
	system("cls");  /*清屏*/

	PF("\n请输入要查询的学号: ");
	getchar();
	gets(k);
	for (i = 0; i <= n; i++)
		if (strcmp(k, stud[i].num) == 0) {
			PF("\t\t姓名：%-10s\n", stud[i].name);
			PF("\t\t学号：%-10s\n", stud[i].num);
			PF("\t\t性别：%s\n", stud[i].sex);
			PF("\t\t班级：%-12s\n", stud[i].clas);
			PF("\t\t出生日期：%-4s 年 %-2s 月 %-2s 日\n", stud[i].birth.year, stud[i].birth.month, stud[i].birth.day);
			PF("\t\t入学日期：%s\n", stud[i].time);
			PF("\t\t专业：%s\n", stud[i].specialit);
			PF("\t\t备注：%s\n", stud[i].remark);

			s = 1;
		}
	if (s == 0)
		PF("查无此人!\n");
	getchar();
	PF("是否继续查询(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y')
		goto front3;

	getchar();
}

void arrange() {
	int k, i;
	struct classmate t;

	system("cls");  /*清屏*/

	FILE *fp;
	int s;
	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;

	for (k = 0; k < n - 1; k++)
		for (i = 0; i < n - k - 1; i++)
			if (strcmp(stud[i].num, stud[i + 1].num) > 0) {
				t = stud[i];
				stud[i] = stud[i + 1];
				stud[i + 1] = t;
			} else
				continue;

	for (i = 0; i <= n - 1; i++)
		if (stud[k].num != 0) {
			PF("\t\t姓名：%-10s\n", stud[i].name);
			PF("\t\t学号：%-10s\n", stud[i].num);
			PF("\t\t性别：%s\n", stud[i].sex);
			PF("\t\t班级：%-12s\n", stud[i].clas);
			PF("\t\t出生日期：%-4s 年 %-2s 月 %-2s 日\n", stud[i].birth.year, stud[i].birth.month, stud[i].birth.day);
			PF("\t\t入学日期：%s\n", stud[i].time);
			PF("\t\t专业：%s\n", stud[i].specialit);
			PF("\t\t备注：%s\n\n", stud[i].remark);
		}
	PF("\t\t输入回车返回主菜单");

	getchar();
	getchar();

}


void change() {
	int  k = 0;
	char j, s[20];
front5:
	system("cls");  /*清屏*/
	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;
	PF("\n请输入要修改记录的学号:");
	getchar();
	gets(s);
	for (i = 0; i < n; i++)
		if (strcmp(s, stud[i].num) == 0) {
			k = 1;
			break;
		}      /*查找*/
	if (k == 1) {                                /*修改*/
		PF("\n");
		PF("\n请输入修改后的姓名:");
		SF("%s", stud[i].name);
		PF("\n请输入修改后的学号:");
		SF("%s", &stud[i].num);
		PF("\n请输入修改后的性别:");
		SF("\n%s", &stud[i].sex);
		PF("\n请输入修改后的班级:");
		SF("%s", &stud[i].clas);
		PF("\n请输入修改后的出生年:");
		SF("%s", &stud[i].birth.year);
		PF("\n请输入修改后的出生月:");
		SF("%s", &stud[i].birth.month);
		PF("\n请输入修改后的出生日:");
		SF("%s", &stud[i].birth.day);
		PF("\n请输入修改后的入学日期：");
		SF("%s", &stud[n].time);
		PF("\n请输入修改后的专业：");
		SF("%s", &stud[n].specialit);
		PF("\n请输入修改后的备注:");
		SF("%s", stud[i].remark);
		PF("修改成功\n");
		getchar();
	}
	if (k == 0) {
		PF("找不到要修改的记录!\n");
		PF("按回车键返回:");
		getchar();
	}
	getchar();
	PF("是否继续(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y')
		goto front5;
}

void show() {
	int s;
	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;

	for (s = 0; s < n; s++) {
		PF("\t\t姓名：%-10s\n", stud[s].name);
		PF("\t\t学号：%-10s\n", stud[s].num);
		PF("\t\t性别：%s\n", stud[s].sex);
		PF("\t\t班级：%-12s\n", stud[s].clas);
		PF("\t\t出生日期：%-4s 年 %-2s 月 %-2s 日\n", stud[s].birth.year, stud[s].birth.month, stud[s].birth.day);
		PF("\t\t入学日期：%s\n", stud[s].time);
		PF("\t\t专业：%s\n", stud[s].specialit);
		PF("\t\t备注：%s\n\n", stud[s].remark);
	}
	PF("\t\t按回车键返回主菜单");
	getchar();
	getchar();
}

void insert() {
front9:
	;
	char j;

	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;

	system("cls");  /*清屏*/

	PF("\n");
	PF("\n请输入要插入的姓名:");
	SF("%s", stud[n].name);
	PF("\n请输入要插入的学号(12位):");
	SF("%s", &stud[n].num);
	PF("\n请输入要插入的性别(男/女):");
	SF("\n%s", &stud[n].sex);
	PF("\n请输入要插入的班级:");
	SF("%s", &stud[n].clas);
	PF("\n请输入要插入的出生年份：");
	SF("%s", &stud[n].birth.year);
	PF("\n请输入要插入的出生月份：");
	SF("%s", &stud[n].birth.month);
	PF("\n请输入要插入的出生日子：");
	SF("%s", &stud[n].birth.day);
	PF("\n请输入要插入的入学日期：");
	SF("%s", &stud[n].time);
	PF("\n请输入要插入的专业：");
	SF("%s", &stud[n].specialit);
	PF("\n请输入要插入的备注:");
	SF("%s", stud[n].remark);
	getchar();
	arrange();
front10:
	;
	PF("是否继续(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y') {
		n++;
		goto front9;
	}
}

void main() {
	char j;
	PF("\n           * * * * * * * * * * * * * * * * * * * * * * * * * * *");
	PF("\n           *              欢迎使用学生学籍管理系统             *");
	PF("\n           *                  制作人：胡彬                     *");
	PF("\n           *                   2020年1月                       *");
	PF("\n           *               按回车键进入主菜单:                 *");
	PF("\n           * * * * * * * * * * * * * * * * * * * * * * * * * * *");

	if (( fp = fopen("student.txt", "r")) == NULL) { //载入已保存的学籍信息
		PF("\n           数据加载失败！");
	} else {

		fread(stud, sizeof(struct classmate), N, fp);
		fclose(fp);
		PF("\n           数据加载成功");
	}

	getchar();
loop:
	system("cls");
	PF("\n");
	PF("\t\t   ************\n");
	PF("\t\t   *  主菜单  *\n");
	PF("\t\t   ************\n");
	PF("\t\t1.学生学籍信息录入\n\n");
	PF("\t\t2.学生学籍信息删除\n\n");
	PF("\t\t3.学生学籍信息查询\n\n");
	PF("\t\t4.学生学籍信息排序\n\n");
	PF("\t\t5.学生学籍信息修改\n\n");
	PF("\t\t6.学生学籍信息保存\n\n");
	PF("\t\t7.退出系统\n\n");
	PF("\t\t8.学生学籍信息显示\n\n");
	PF("\t\t9.学生学籍信息插入\n\n");
	PF("\t\t请选择[1/2/3/4/5/6/7/8]: ");
	j = getchar();
	if (j == '\n')
		goto loop;    /*返回主菜单*/


	switch (j) {
		case '1':
			add();
			goto loop;    /*返回主菜单*/
		case '2':
			del();
			goto loop;
		case '3':
			find();
			goto loop;
		case '4':
			arrange();
			goto loop;
		case '5':
			change();
			goto loop;
		case '6':   {
			FILE *fp;
			fp = fopen("student.txt", "w");
			fwrite(stud, n * sizeof(struct classmate), 1, fp);
			fclose(fp);
			goto loop;
		}
		case '7':
			exit(0);
		case '8':
			show();
			goto loop;
		case '9':
			insert();
			goto loop;
		default:
			goto loop;
	}
}
