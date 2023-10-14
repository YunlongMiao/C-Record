#include <iostream>
using namespace std;
int main()
{    char a[]="汉字处理挺好玩";
    cout<<a<<endl;
	    a[1]='a';
		    cout<<a<<endl; 
			   a[2]='b';
			       cout<<a<<endl;
				       char b[10];
					       b[8]='\0';
						       cout<<b<<endl;
							       return 0;}
1

————————————————
版权声明：本文为CSDN博主「养生馆」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/hgdfguj/article/details/83821267


#include<stdio.h>
int main()
{    int i,j;
    char a[3];  										//用两字节表示一个汉字，a[0]为第1个字节，a[1]为第2个字节    
	a[2]='\0'; 											 //a[2]固定为'\0'，作为保存一个汉字的字符串的结束    
	freopen("chineseChar.txt","w",stdout);   			//将输出重定向到文件，便于查看结果    
	for(i=1;i<=94;i++)    								//区号从1到94    
	{   
		printf("=====第 %d 区======\n",i);
	        
		a[0] = i + 0xA0;   							//将第1个字节变为机内码        
		
	for(j=1;j<=94;j++) 								//位号从1到94        
	{            
		a[1] = j + 0xA0; 							//将第2个字节变为机内码           
		printf("%s\r",a);   						//输出a，里面有两字节，是i区j位汉字的机内码            
			
		if(j%10==0)                
			printf("\n");  							//每10个换一行        
	}        
			
			printf("\n");   
	}    
			  
	return 0;
}
————————————————
版权声明：本文为CSDN博主「养生馆」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/hgdfguj/article/details/83821267
