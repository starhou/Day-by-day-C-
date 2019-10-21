/*
* 这是我的十一个c++程序

   
* 知识点
* 检查输入
.get 从输入流读取一个字符
.put 获取一个char类型的参数，输出到输出流
.putback 将一个字符当会输入流中

*从文件读取时候, new_line(fin);
*从键盘读取时候，new_line(cin); 由于重载，等效于 new_line()   

默认实参    
（1）在函数声明或定义时，直接对参数赋值。这就是默认参数；
（2）在函数调用时，省略部分或全部参数。这时可以用默认参数来代替。
（3）默认参数只可在函数声明中设定一次。只有在没有函数声明时，才可以在函数定义中设定
（4）默认参数调用时，则遵循参数调用顺序，自左到右逐个调用。
（5）默认值可以是全局变量、全局常量，甚至是一个函数。但不可以是局部变量。
 如果使用带默认参数的构造函数时就不需要不带参数的构造函数了（使用带默认参数的构造函数就相当于上面两个构造函数都写）
* 例如  new_line 添加cin后,会报错

* Data    2019.10.20   
* Author  StarHou
* E-mail  1029588176@qq.com
*/

#include <iostream>
using namespace std;

void new_line();
//丢弃当前输入行上剩余的所有输入，包括'\n',适合键盘输入
void new_line(istream& in_stream);

void get_int(int& number);

void default_ags(int arg1,int arg2,int arg3=5,int arg4=6);

int main()
{
    /* code */
    // int n;
    default_ags(6,3,-5,8);
    // get_int(n);
    
    // cout <<"Final value read in = "<<n<<endl
    //      <<"End of demonstration.\n";
    return 0;
}

void new_line()
{
    char symbol;
    do
    {
        /* code */
        cin.get(symbol);
    } while (symbol!='\n');    
}

void new_line(istream& in_stream)
{
    char symbol;
    do
    {
        /* code */
        in_stream.get(symbol);
    } while (symbol != '\n');
    
}

void get_int(int& number)
{
    char ans;
    do
    {
        /* code */
        cout <<"Enter input number: ";
        cin >> number;
        cout <<"You entered "<<number<<" Is that correct?(yes/no): ";
        cin>>ans;
        new_line(cin);
    } while ((ans!='Y')&&(ans!='y'));
    
}

void default_ags(int arg1, int arg2,int arg3,int arg4)
{
    cout<<arg1<<' '<<arg2<<' '<<arg3<<' '<<arg4<<endl;
    return;
}