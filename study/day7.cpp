#include <iostream>
#include <iomanip>
/*
* 这是我的第七个c++程序
* 知识点
* 1. 重载  
* 2. 自动类型转换 
* 3. void 函数
* 4. 传引用形参
* Data    2019.10.19   
* Author  StarHou
* E-mail  1029588176@qq.com
*/
/* 重载
// 一个函数名具有两个或更多的函数定义称为重载，重载时，函数必须使用不同数量的形参或者使用不同类型类型的形参。
*/
/* 自动类型转换
// 如果函数要求double 类型的参数，提供的是int 类型，C++会先把int转换为double
*/
/*
   void 函数 
   既可以包含return也可以不包含
*/
/*
   传引用形参
   要使形参成为传引用参数，需在其类型名称之后添加符号&。
   对应地，在函数调用的时候，传递的实参应该是变量，而不能是常量或其他表达式。
   void get_data(int& first_in,double& second_in);
*/
double ave(double n1,double n2);
double ave(double n1,double n2,double n3);
void   show_reults(double f_degrees, double c_degrees);
void   get_numbers(int& input1, int& input2);


int main()
{
    using namespace std; 
    int a,b;

    cout <<"The average of 2.0,2.5, and 3.0 is "
    <<setw(1)<<ave(2.0,2.5,3.0)<<endl;

    cout <<"The average of 4.5 and 5.5 is "//必须有空格setw(n)才起作用
    <<setw(1)<<ave(2.0,2.5)<<endl;

    show_reults(13.5,20.5);
    
    get_numbers(a, b);
    return 0;
}

double ave(double n1, double n2)
{
    return ((n1+n2)/2.0);
}

double ave(double n1, double n2,double n3)
{
    return ((n1+n2+n3)/2.0);
}

// setioflags(ios::fixed) 固定的浮点显示 
// setioflags(ios::scientific) 指数表示 
// setiosflags(ios::left) 左对齐 
// setiosflags(ios::right) 右对齐 
// setiosflags(ios::skipws 忽略前导空白 
// setiosflags(ios::uppercase) 16进制数大写输出 
// setiosflags(ios::lowercase) 16进制小写输出 
// setiosflags(ios::showpoint) 强制显示小数点 
// setiosflags(ios::showpos) 强制显示符号 
// setiosflags(ios::floatfield) 输出时按浮点格式，小数点后有6位数字

void show_reults(double f_degrees, double c_degrees)
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << f_degrees<<setw(2)
         << " degrees Fahrenheit is equivalent to\n"
         << c_degrees <<setw(2)<<" degrees Celsius.\n";
    // return;
}

void   get_numbers(int& input1, int& input2)
{
    using namespace std;
    cout <<"Enter two integers: ";
    cin >> input1
        >> input2;
    return;
}