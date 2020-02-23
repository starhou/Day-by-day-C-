/*
* 这是我的十三个c++程序

   在我们得到这些事实之前就加以推测，那是最大的错误
                                                                    ——《福尔摩斯探案集》 
   
* 知识点
* 数组入门
* 
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
# include <iostream>

int main()
{
    /* code */
    using namespace std;
    int i,score[5],max;
    cout<<"Enter 5 scores:\n";
    cin >> score[0];
    max = score[0];
    for (size_t i = 1; i < 5; i++)
    {
        cin>>score[i];
        if (score[i]>max)
        {
            max = score[i];
        }
        
    }

    cout <<"The highest score is " <<max<<endl
         <<"The scores and their\n"
         <<"differences from the highest are:\n";
    
    for (size_t i = 0; i < 5; i++)
    {
        cout << score[i]<<" off by "
                        <<(max-score[i])<<endl;
    }
    
    
    return 0;
}
