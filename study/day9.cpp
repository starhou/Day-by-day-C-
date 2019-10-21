/*
* 这是我的九个c++程序

   溪水的树叶啊，不知道归宿是湖泊还是大海；流中的输出啊，不知道归宿是屏幕还是文件
                                                                    ——某计算机系卫生间的墙上(1995) 
   
* 知识点
* 读写文件
* 
* ;分号是一个空语句
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
    char in_file_name[16],out_file_name[16];
    ifstream in_stream;
    ofstream out_stream;

    cout<<"I will sum three numbers taken from an input\n"
        <<"file and write the sum to output toan output file.\n";
    
    cout <<"Enter the input file name(maximum of 15 characters):\n";
    cin>>in_file_name;
    cout <<"Enter the output file name(maximum of 15 characters):\n";
    cin  >>out_file_name;
    cout <<" I will read numbers from the file"
         <<"place the sum in the file"
         <<out_file_name<<endl;

    


    in_stream.open(in_file_name);
    if(in_stream.fail())
    {
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }

    out_stream.open(out_file_name,ios::app);
    if (out_stream.fail())
    {
        cout <<"Output file opening failed."<<endl;
        exit(1);
    }
    

    int first,second,third;
    in_stream>>first>>second>>third;
    out_stream<<"The sum of the first"<<endl
              <<"numbers in "<<in_file_name<<endl
              <<"is "<<setw(1)<<(first+second+third)<<endl;

    in_stream.close();
    out_stream.close();

    cout<<"End of Program";
    return 0;
}

