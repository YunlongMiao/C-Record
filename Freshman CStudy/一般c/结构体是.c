/*#include <stdio.h>

int main()
{
	struct a{
		int num;
		char name;
		float end;
	}a;
	a.num=6789;
	a.name ='小明';
	a.end = 59.5;
	printf("%d%c%f",a.num,a.name,a.end); 
}
*/
#include <stdio.h>
int main(){
    struct{
        char *name;  //姓名
        int num;  //学号
        int age;  //年龄
        char group;  //所在小组
        float score;  //成绩
    } stu1;

    //给结构体成员赋值
    stu1.name = "Tom";
    stu1.num = 12;
    stu1.age = 18;
    stu1.group = 'A';
    stu1.score = 136.5;

    //读取结构体成员的值
    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);

    return 0;
}
