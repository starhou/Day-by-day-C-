#include <iostream>
#include <iomanip>
using namespace std;
/*
* 这是我的第六个c++程序
* Fibonacci数列 
* Data    2019.10.18   
* Author  StarHou
* E-mail  1029588176@qq.com
*/
int main()
{   
    int i;
    int f[15]={1,1};
    for (size_t i = 2; i < 15; i++)
    {
        /* code */
        f[i]=f[i-2]+f[i-1];
        
    }
    for (size_t i = 0; i < 15; i++)
    {
        /* code */
        if (i%5==0) cout<<endl;
        
        /* code */
        cout<<setw(6)<<f[i];
        

        
    }
        cout<<endl;
        return 0;
    
}