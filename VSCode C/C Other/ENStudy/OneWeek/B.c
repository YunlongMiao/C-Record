#include<stdio.h>

int main(){
	
	int t;
	char s[10];
	int temp,judge,i;
	
	scanf("%d",&t);
    temp = t;
    while(temp){
        scanf("%s",&s);
		if( (s[0]=='y'||s[0]=='Y') && (s[1]=='e'||s[1]=='E') && (s[2]=='s'||s[2]=='S') )
			printf("YES\n");
		else
			printf("NO\n");
        temp--;
    }
    system("pause");
	return 0;
}

//÷‹
