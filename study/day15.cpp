/*
* 这是我的十五个c++程序
* 
* 产量图
* 
* 知识点
* static 静态关键字
* 强制类型转换 
* static_cast 比如非const 转const, void*转指针，static_cast能用于多态向上转化，如果向下转能成功但是不安全。
* const_cast 将const变量转化为非const
* dynamic_cast 用于动态类型转换，只能用于含有虚函数的类，用于类层次间的向上和向下转换。只能转指针或引用。如果是
* 非法的指针返回NULL，对于引用抛异常。
* 向上转换： 指的是子类向基类的转换
* 向下转换： 指的是基类向子类的转换
* 判断变量类型和要转换的类型是否相同来判断是否进行向下转换
* reinterpret_cast
* 几乎什么都可以转
*
* Data    2020.2.24   
* Author  StarHou
* E-mail  1029588176@qq.com
*/

#include<iostream>
#include<cmath>


const int NUMBER_OF_PLANTS = 1;
// stage 1 
void input_data(int a[], int last_plant_number);
// stage 2
void scale(int a[], int size);
// stage 3
void graph(const int asterisk_count[], int last_plant_number);

// Auxillary function 
void get_total(int& sum);

static int Mround(double number);

void pritf_asterisks(int n);

int main(int argc, char const *argv[])
{
	using namespace std;
	int production[NUMBER_OF_PLANTS];

	cout << "This program displays a graph showing\n"
		 << "production for each plan in the company. \n";

	input_data(production, NUMBER_OF_PLANTS);

	scale(production, NUMBER_OF_PLANTS);
	
	graph(production, NUMBER_OF_PLANTS);

	return 0;
}

void input_data(int a[], int last_plant_number)

{
	using namespace std;
	for (int plant_number = 1; plant_number<= last_plant_number; plant_number++)
	{
		cout << endl
			 << "Enter production data for plant number "
			 << plant_number << endl;
		get_total(a[plant_number-1]);		

	}
	
}

void get_total(int & sum)

{
	using namespace std;
	cout << "Enter number of units produced by each department. \n"
	     << "Append a negative number to the end of the list. \n";

	sum = 0;
	int next;
	cin >> next;
	while (next >=0)
	{
		sum = sum + next;
		cin >> next;
	}

	cout << "Total = " << sum << endl;
}

void scale(int a[], int size)

{
	using namespace std;
	for (int index = 0; index < size; index++)
	{
		a[index] = round(a[index]/1000.0);
	}
}

static int Mround(double number)

{
	using namespace std;
	return static_cast<int>(floor(number+0.5));
}


void graph(const int asterisk_count[], int last_plant_number)
{
	using namespace std;
	cout << "\nUnits produced in thousands of units: \n";
	for (int plant_number = 1; plant_number <= last_plant_number; plant_number++)
	{
		cout <<"plant #" << plant_number << " ";
		cout << asterisk_count[plant_number-1]<<endl;
		cout << endl;
		pritf_asterisks(asterisk_count[plant_number-1]);
		cout << endl;
	}
}

void pritf_asterisks(int n)
{
	using namespace std;
	for (int count = 0; count <= n; count++)
		cout << "*";
}