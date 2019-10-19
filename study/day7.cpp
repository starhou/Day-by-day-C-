#include <iostream>
#include <iomanip>
/*
* 这是我的第七个c++程序
* Fibonacci数列 
* Data    2019.10.19   
* Author  StarHou
* E-mail  1029588176@qq.com
*/
// 重载
// 一个函数名具有两个或更多的函数定义称为重载，重载时，函数必须使用不同数量的形参或者使用不同类型类型的形参。

double ave(double n1,double n2);
double ave(double n1,double n2,double n3);

int main()
{
    using namespace std; 
    
    cout <<"The average of 2.0,2.5, and 3.0 is "
    <<setw(1)<<ave(2.0,2.5,3.0)<<endl;

    cout <<"The average of 4.5 and 5.5 is "//必须有空格setw(n)才起作用
    <<setw(1)<<ave(2.0,2.5)<<endl;

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