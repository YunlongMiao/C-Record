#include <iostream>
using namespace std;
int main()
{    char a[]="���ִ���ͦ����";
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

��������������������������������
��Ȩ����������ΪCSDN�����������ݡ���ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/hgdfguj/article/details/83821267


#include<stdio.h>
int main()
{    int i,j;
    char a[3];  										//�����ֽڱ�ʾһ�����֣�a[0]Ϊ��1���ֽڣ�a[1]Ϊ��2���ֽ�    
	a[2]='\0'; 											 //a[2]�̶�Ϊ'\0'����Ϊ����һ�����ֵ��ַ����Ľ���    
	freopen("chineseChar.txt","w",stdout);   			//������ض����ļ������ڲ鿴���    
	for(i=1;i<=94;i++)    								//���Ŵ�1��94    
	{   
		printf("=====�� %d ��======\n",i);
	        
		a[0] = i + 0xA0;   							//����1���ֽڱ�Ϊ������        
		
	for(j=1;j<=94;j++) 								//λ�Ŵ�1��94        
	{            
		a[1] = j + 0xA0; 							//����2���ֽڱ�Ϊ������           
		printf("%s\r",a);   						//���a�����������ֽڣ���i��jλ���ֵĻ�����            
			
		if(j%10==0)                
			printf("\n");  							//ÿ10����һ��        
	}        
			
			printf("\n");   
	}    
			  
	return 0;
}
��������������������������������
��Ȩ����������ΪCSDN�����������ݡ���ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/hgdfguj/article/details/83821267
