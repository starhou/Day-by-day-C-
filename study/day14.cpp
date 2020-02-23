/*
* 这是我的十四个c++程序

   在我们得到这些事实之前就加以推测，那是最大的错误
                                                                    ——《福尔摩斯探案集》 
   
* 知识点
* 计算机内存由一组编号的位置构成，这些位置成为字节（8位）。 字节的地址就是它的编号。
* 简单变量(例如 int,double)在内存中包括两项信息： 内存地址（那个变量所用的第一个字节的地址）以及变量类型。 
* 对数组来说，计算机会记住a[0]的地址和数组长度
* 函数调用数组my_function(a[i]), 如果i是0，则等效与myfunction(a[0]),
* 会先对索引求值。
* 
 #include <fstream>
 using namespace std;
 ifstream in_stream;
 ofstream out_stream;

*
* Data    2020.2.23   
* Author  StarHou
* E-mail  1029588176@qq.com
*/
# include <iostream>

const int NUMBER_OF_EMPLOYEES = 3;

int adjust_days(int old_days);

void fill_up(int a[], int size);

int main()
{
    /* code */
    using namespace std;
    int vacation[NUMBER_OF_EMPLOYEES], number;
    int a[3], size = 3;

    // 输入一个数记得回车
    cout << "Enter allowed vacation days for employees 1 " << 
         "through " << NUMBER_OF_EMPLOYEES<<":\n";
    
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        cin >> vacation[number-1];

    for (number = 0; number < NUMBER_OF_EMPLOYEES; number++)
        vacation[number] = adjust_days(vacation[number]);

    cout << "The revised number of vacation days are : \n";
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        cout<<"Employee number " << number <<" vacation days = "
        <<vacation[number-1]<<endl;

    fill_up(a, size);        
    return 0;
}

int adjust_days(int old_days)
{
    return (old_days+5);
}

void fill_up(int a[], int size)
{
    using namespace std;
    cout << "Enter "<< size <<" numbers:\n";
    for (int i = 0; i < size; i++)
        cin >> a[i];
    size--;
    cout << "The last array index used is "<< size << endl;
}