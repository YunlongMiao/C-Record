/*** 
 * @Author: 苗云龙
 * @Date: 2023-04-23 21:31:18
 * @LastEditors: YunLongMiao 3082425826@qq.com
 * @LastEditTime: 2023-04-27 23:10:53
 * @Description: 
 * @FilePath: \c++\a_exam.cpp
 * @  风起云涌
 */
#include<iostream>      //预编译指令，引入头文件iostream
#include <cstdlib>		//EXIT_SUCCESS
#include<stdlib.h>
#include<string.h>
//using namespace std;  //使用标准命名空间

int main(void){

	void text();
	
    std::cout << "Hello world" << "\n";
    std::cout << "你好，我不太好" << '\n'; 
	int a = 1;
	
	#if 0
		enum color{
			red,
			blue = 5,
			green
		} c;
		std::cout << blue << '\n';
	#endif

	#if 1
		const int i = 2;
		int& r = const_cast<int&>(i);		// 常量转换，将const int转换为int

		float f = static_cast<float>(r);		//静态将int类型转换为float类型
		// std::cout << typeof(i) << typeof(r) << typeof(f) <<'\n';
		std::cout << i << '\n' << r << '\n' << f <<'\n';		//异常输出
		std::cout << i << r << '\n' << f <<'\n';
		#endif
    
    
    return EXIT_SUCCESS;

}


	void text(){
		int a = 20;
		std::cout << "局部变量输出a18:" << a << "\n";
		std::cout << "全局变量输出a20:" << a << "\n";
	}
