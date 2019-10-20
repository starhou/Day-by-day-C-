/*
* 这是我的九个c++程序

   溪水的树叶啊，不知道归宿是湖泊还是大海；流中的输出啊，不知道归宿是屏幕还是文件
                                                                    某计算机系卫生间的墙上(1995) 
   
* 知识点
* 读写文件
* 
* 程序使用的每个输入输出都有两个名称。外部文件名是文件的真实名称，
* 但它只在open中调用一次，之后将流的名称作为文件名使用。
* 
* "输入文件流"， ifstream
* "输出文件流"， ofstream
* 
 #include <fstream>
 using namespace std;
 ifstream in_stream;
 ofstream out_stream;

*
* Data    2019.10.20   
* Author  StarHou
* E-mail  1029588176@qq.com
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

int main()
{
    /* code */
    using namespace std;
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("infile.dat");
    if(in_stream.fail())
    {
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }

    out_stream.open("outfile.dat");
    if (out_stream.fail())
    {
        cout <<"Output file opening failed."<<endl;
        exit(1);
    }

    int first,second,third;
    in_stream>>first>>second>>third;
    out_stream<<"The sum of the first"<<endl
              <<"numbers in infile.dat"<<endl
              <<"is "<<setw(1)<<(first+second+third)<<endl;

    in_stream.close();
    out_stream.close();
    return 0;
}
