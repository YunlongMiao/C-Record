#include <stdio.h>

int main() 
{

	struct student {
		float num;
		char name[10000];
		char sex[17000];
		char sp[18000];
	};
	struct student stu1;
	stu1={}
//	scanf("%f%c%c%c", &stu1.num, &stu1.name, &stu1.sex, &stu1.sp);
  //  stu1.name='С����'; 
	printf("ѧ�ţ�%f���֣�%c�Ա�%c��ַ��%c", &stu1.num, &stu1.name, &stu1.sex, &stu1.sp);
	return 0;
}
