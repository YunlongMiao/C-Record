#include <stdio.h>

int main(){
	
	int t,num;
	char s[50];
	// int JudgeNum[300]={0};
	int temp,judge,sum=0;
	int i;
	
	scanf("%d",&t);
    temp = t;
    while(temp){
    	sum = 0;
		int JudgeNum[300] = {0};
        scanf("%d %s",&num,&s);
		while(num){
			judge = s[num-1]-64;
			if(JudgeNum[judge]==1)
				sum+=1;
			else{
				sum+=2;
				JudgeNum[judge] = 1;
			}
			num--;
		}
		printf("%d\n",sum);
        temp--;
    }
    
	return 0;
}

//int Judge(char s){
//	return s-64;
//}
 
