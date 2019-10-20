#include <iostream>
#include <iomanip>
/*
* 这是我的第八个c++程序
* 知识点
* 什么时候用传值，什么时候用传引用参数
* 如果希望函数更改变量的值，与那个变量对应的形参必须是传引用参数，
* 而且必须用符号&来标记，在其他所有情况下，都可以使用传值参数。
* 
* 传引用参数和全局变量的差别？
*
* Data    2019.10.19   
* Author  StarHou
* E-mail  1029588176@qq.com
*/

void do_stuff(int par1_value, int& par2_ref);

int main()
{
    using namespace std;
    int n1,n2;

    n1 = 1;
    n2 = 2;
    do_stuff(n1,n2);
    cout <<"n1 after function call = " << n1 << endl;
    cout <<"n2 after function call = " << n2 << endl;
    return 0;
}

void do_stuff(int par1_value, int& par2_ref)
{
    using namespace std;
    par1_value = 111;
    cout <<"par1_value in function call = "
         << par1_value << endl;
    par2_ref = 222;
    cout << "par2_ref in function call = "
         << par2_ref << endl;
}

