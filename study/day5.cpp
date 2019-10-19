#include <iostream>
#include <windows.h>

using namespace std;
/*
* 这是我的第五个c++程序 
* Data    2019.10.15   
* Author  StarHou
* E-mail  1029588176@qq.com
*/

/*
*  8位一个字节，多个字节储存数据称为一个内存位置   
*  内存的第一个字节为内存位置的地址
*  需要8位才能对一个字符（一个英文字母或其他键盘符号）进行编码
*  三种错误：语法错误，警告，逻辑错误
*/
int main()
{ 
   double a = 10.0,b,c;
   cout<<"\t你是不是傻不是\n";
   cout<<"你\a是\a不是傻不是\n";
   // 控制小数点后位数
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout <<"亲输入一个数字\n"<<"在输入一个数字\n";
   cin>> b>>c;
   
   cout<<a<<endl;
   return 0;
}
