#include    "stdio.h"
#include    "string.h"
#include     "stdlib.h"
#define PF printf		//������� 
#define SF scanf
#define N 20

FILE *fp;
static int n = 0, i, m;			//ѧ������ 

struct date {			//�ṹ�� 
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

	system("cls");  /*����*/

	PF("\n");
	PF("\n������Ҫ��ӵ�����:");
	SF("%s", stud[n].name);
	PF("\n������Ҫ��ӵ�ѧ��(12λ):");
	SF("%s", &stud[n].num);
	PF("\n������Ҫ��ӵ��Ա�(��/Ů):");
	SF("\n%s", &stud[n].sex);
	PF("\n������Ҫ��ӵİ༶:");
	SF("%s", &stud[n].clas);
	PF("\n������Ҫ��ӵĳ�����ݣ�");
	SF("%s", &stud[n].birth.year);
	PF("\n������Ҫ��ӵĳ����·ݣ�");
	SF("%s", &stud[n].birth.month);
	PF("\n������Ҫ��ӵĳ������ӣ�");
	SF("%s", &stud[n].birth.day);
	PF("\n������Ҫ��ӵ���ѧ���ڣ�");
	SF("%s", &stud[n].time);
	PF("\n������Ҫ��ӵ�רҵ��");
	SF("%s", &stud[n].specialit);
	PF("\n������Ҫ��ӵı�ע:");
	SF("%s", stud[n].remark);
	getchar();
	n++;
	PF("�Ƿ����(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y') {
		n++;
		goto front1;
	}        /*�������¼*/


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

	system("cls");  /*����*/

	PF("������Ҫɾ����ѧ��:\n");
	getchar();
	gets(s);
	for (i = 0; i < n; i++)
		if (strcmp(s, stud[i].num) == 0) {
			k = 1;
			break;
		}       /*���Ҽ�¼*/
	if (k == 1) {                              /*ɾ����¼*/
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

		PF("��ɾ��\n\n");
	} else {
		PF("�Ҳ���Ҫɾ���ļ�¼!\n");
		PF("���س�������:");
		getchar();
	}
	PF("�Ƿ����(Y/N)?:");
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
	system("cls");  /*����*/

	PF("\n������Ҫ��ѯ��ѧ��: ");
	getchar();
	gets(k);
	for (i = 0; i <= n; i++)
		if (strcmp(k, stud[i].num) == 0) {
			PF("\t\t������%-10s\n", stud[i].name);
			PF("\t\tѧ�ţ�%-10s\n", stud[i].num);
			PF("\t\t�Ա�%s\n", stud[i].sex);
			PF("\t\t�༶��%-12s\n", stud[i].clas);
			PF("\t\t�������ڣ�%-4s �� %-2s �� %-2s ��\n", stud[i].birth.year, stud[i].birth.month, stud[i].birth.day);
			PF("\t\t��ѧ���ڣ�%s\n", stud[i].time);
			PF("\t\tרҵ��%s\n", stud[i].specialit);
			PF("\t\t��ע��%s\n", stud[i].remark);

			s = 1;
		}
	if (s == 0)
		PF("���޴���!\n");
	getchar();
	PF("�Ƿ������ѯ(Y/N)?:");
	j = getchar();
	getchar();
	if (j == 'y' || j == 'Y')
		goto front3;

	getchar();
}

void arrange() {
	int k, i;
	struct classmate t;

	system("cls");  /*����*/

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
			PF("\t\t������%-10s\n", stud[i].name);
			PF("\t\tѧ�ţ�%-10s\n", stud[i].num);
			PF("\t\t�Ա�%s\n", stud[i].sex);
			PF("\t\t�༶��%-12s\n", stud[i].clas);
			PF("\t\t�������ڣ�%-4s �� %-2s �� %-2s ��\n", stud[i].birth.year, stud[i].birth.month, stud[i].birth.day);
			PF("\t\t��ѧ���ڣ�%s\n", stud[i].time);
			PF("\t\tרҵ��%s\n", stud[i].specialit);
			PF("\t\t��ע��%s\n\n", stud[i].remark);
		}
	PF("\t\t����س��������˵�");

	getchar();
	getchar();

}


void change() {
	int  k = 0;
	char j, s[20];
front5:
	system("cls");  /*����*/
	for (m = 0;; m++)
		if (*stud[m].num == '\0')
			break;
	n = m;
	PF("\n������Ҫ�޸ļ�¼��ѧ��:");
	getchar();
	gets(s);
	for (i = 0; i < n; i++)
		if (strcmp(s, stud[i].num) == 0) {
			k = 1;
			break;
		}      /*����*/
	if (k == 1) {                                /*�޸�*/
		PF("\n");
		PF("\n�������޸ĺ������:");
		SF("%s", stud[i].name);
		PF("\n�������޸ĺ��ѧ��:");
		SF("%s", &stud[i].num);
		PF("\n�������޸ĺ���Ա�:");
		SF("\n%s", &stud[i].sex);
		PF("\n�������޸ĺ�İ༶:");
		SF("%s", &stud[i].clas);
		PF("\n�������޸ĺ�ĳ�����:");
		SF("%s", &stud[i].birth.year);
		PF("\n�������޸ĺ�ĳ�����:");
		SF("%s", &stud[i].birth.month);
		PF("\n�������޸ĺ�ĳ�����:");
		SF("%s", &stud[i].birth.day);
		PF("\n�������޸ĺ����ѧ���ڣ�");
		SF("%s", &stud[n].time);
		PF("\n�������޸ĺ��רҵ��");
		SF("%s", &stud[n].specialit);
		PF("\n�������޸ĺ�ı�ע:");
		SF("%s", stud[i].remark);
		PF("�޸ĳɹ�\n");
		getchar();
	}
	if (k == 0) {
		PF("�Ҳ���Ҫ�޸ĵļ�¼!\n");
		PF("���س�������:");
		getchar();
	}
	getchar();
	PF("�Ƿ����(Y/N)?:");
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
		PF("\t\t������%-10s\n", stud[s].name);
		PF("\t\tѧ�ţ�%-10s\n", stud[s].num);
		PF("\t\t�Ա�%s\n", stud[s].sex);
		PF("\t\t�༶��%-12s\n", stud[s].clas);
		PF("\t\t�������ڣ�%-4s �� %-2s �� %-2s ��\n", stud[s].birth.year, stud[s].birth.month, stud[s].birth.day);
		PF("\t\t��ѧ���ڣ�%s\n", stud[s].time);
		PF("\t\tרҵ��%s\n", stud[s].specialit);
		PF("\t\t��ע��%s\n\n", stud[s].remark);
	}
	PF("\t\t���س����������˵�");
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

	system("cls");  /*����*/

	PF("\n");
	PF("\n������Ҫ���������:");
	SF("%s", stud[n].name);
	PF("\n������Ҫ�����ѧ��(12λ):");
	SF("%s", &stud[n].num);
	PF("\n������Ҫ������Ա�(��/Ů):");
	SF("\n%s", &stud[n].sex);
	PF("\n������Ҫ����İ༶:");
	SF("%s", &stud[n].clas);
	PF("\n������Ҫ����ĳ�����ݣ�");
	SF("%s", &stud[n].birth.year);
	PF("\n������Ҫ����ĳ����·ݣ�");
	SF("%s", &stud[n].birth.month);
	PF("\n������Ҫ����ĳ������ӣ�");
	SF("%s", &stud[n].birth.day);
	PF("\n������Ҫ�������ѧ���ڣ�");
	SF("%s", &stud[n].time);
	PF("\n������Ҫ�����רҵ��");
	SF("%s", &stud[n].specialit);
	PF("\n������Ҫ����ı�ע:");
	SF("%s", stud[n].remark);
	getchar();
	arrange();
front10:
	;
	PF("�Ƿ����(Y/N)?:");
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
	PF("\n           *              ��ӭʹ��ѧ��ѧ������ϵͳ             *");
	PF("\n           *                  �����ˣ�����                     *");
	PF("\n           *                   2020��1��                       *");
	PF("\n           *               ���س����������˵�:                 *");
	PF("\n           * * * * * * * * * * * * * * * * * * * * * * * * * * *");

	if (( fp = fopen("student.txt", "r")) == NULL) { //�����ѱ����ѧ����Ϣ
		PF("\n           ���ݼ���ʧ�ܣ�");
	} else {

		fread(stud, sizeof(struct classmate), N, fp);
		fclose(fp);
		PF("\n           ���ݼ��سɹ�");
	}

	getchar();
loop:
	system("cls");
	PF("\n");
	PF("\t\t   ************\n");
	PF("\t\t   *  ���˵�  *\n");
	PF("\t\t   ************\n");
	PF("\t\t1.ѧ��ѧ����Ϣ¼��\n\n");
	PF("\t\t2.ѧ��ѧ����Ϣɾ��\n\n");
	PF("\t\t3.ѧ��ѧ����Ϣ��ѯ\n\n");
	PF("\t\t4.ѧ��ѧ����Ϣ����\n\n");
	PF("\t\t5.ѧ��ѧ����Ϣ�޸�\n\n");
	PF("\t\t6.ѧ��ѧ����Ϣ����\n\n");
	PF("\t\t7.�˳�ϵͳ\n\n");
	PF("\t\t8.ѧ��ѧ����Ϣ��ʾ\n\n");
	PF("\t\t9.ѧ��ѧ����Ϣ����\n\n");
	PF("\t\t��ѡ��[1/2/3/4/5/6/7/8]: ");
	j = getchar();
	if (j == '\n')
		goto loop;    /*�������˵�*/


	switch (j) {
		case '1':
			add();
			goto loop;    /*�������˵�*/
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
