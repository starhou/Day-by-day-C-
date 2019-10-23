/*
* 这是我的十一个c++程序  
* 知识点
* 判断是否到文件尾部
#include <cctype>
toupper  转为大写
tolower  转为小写
islower  是否是小写
isupper  是否是大写
isalpha  是否是字母
isdigit  是否是数字
isspace  是否有空格或者换行符

* Data    2019.10.20   
* Author  StarHou
* E-mail  1029588176@qq.com
*/

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
void add_plus_plus(ifstream& in_stream, ofstream& out_stream);
void test_input(ifstream& in_stream);
int main()
{
    /* code */

    ifstream fin;
    ofstream fout;

    test_input(fin);
    cout<<"begin editing files.\n";
    fin.open("cad.dat");
    if(fin.fail())
    {
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }

    fout.open("cplusad.dat");
    if(fout.fail())
    {
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    add_plus_plus(fin,fout);
    fin.close();
    fout.close();
    cout <<"End of editing files.\n";
    return 0;
}

void add_plus_plus(ifstream& in_stream, ofstream& out_stream)
{
    char next;
    in_stream.get(next);
    while (!in_stream.eof())
    {
        /* code */
        if (next=='C')
        {
            /* code */
            out_stream<<"C++";
        }else
        {
            /* code */
            out_stream<<next;
        }
        in_stream.get(next);      
    }
}

void test_input(ifstream& in_stream)
{
    cout <<"Enter a line of input:\n";
    char next;
    bool  lable = true;
    cin.get(next);

    while (!in_stream.eof()&&(next!='\n'))
    {
        /* code */
        if (lable)
        {
            cin.putback(next);
            lable = false;
        }       
        cin.get(next);
        if (!isdigit(next))
        {
           cout<<next;
        }
        
        
    } 
    cout <<"\n"<<"ENF OF OUTPUT\n";
    
}