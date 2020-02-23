/*
* 知识点
  练习19,检查文件尾,double,int,char都适用
  int next;
  while(in_stream>>next)
  {
      code
  } 

  计算机硬件读取的始终是单个字符,一般输入数字10，计算机读取的始终是'1','0',
  然后自动转换成数字，若想获取单个字符，可以使用.get函数，其中换行符被识别为'\n'

  '\n'和"\n", 在cout语句中，产生同样的效果，但在热河情况下，两者都不能互换。
  '\n'是字符类型，可以储存到char类型的变量中；"\n"是字符串，碰巧只有一个字符，
  不能储存到char类型的变量中。
* Data    2019.10.20   
* Author  StarHou
* E-mail  1029588176@qq.com
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
int main(int argc, char const *argv[])
{
    /* code */
    using namespace std;
    ifstream ins;
    int count =0,next;

    ins.open("list.dat");
    if(ins.fail())
    {
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }

    while (ins>>next)
    {
        /* code */
        count++;
        cout<<next<<endl;
    }
    ins.close();
    cout<<count<<endl;

    char c1,c2,c3;
    cout<<"请输入三个字符\n";
    cin.get(c1);
    cin.get(c2);
    cin.get(c3);
    cout<<c1<<c2<<c3;
    return 0;
}
