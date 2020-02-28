/*
* 这是我的十五个c++程序
* 
* 
* 知识点：
* 语句块 用花括号封闭起来的C++代码。 块内声明的变量是那个块的局部变量
*
* 嵌套块 假设一个块嵌套于另一个块中，而且两个块都声明了同名变量，则
* 一个变量只能在外部块中使用，另一个变量只能在内部块中使用
*
* 快速排序
*  */
#include <iostream>

void quickSort(int data[], int low, int high);

void quickSort1(int& data[], int length);

void main(int argc, char const *argv[])
{
	int a[] = {10, 26, 3, 40, 5, 68, 17, 8}
	quickSort1(a, sizeof(a))
	return 0;
}

void quickSort1(int& data[], int length)
{
	// 默认左小右大
	int i, j = 0, length-1;
	base = data[i];
	while(i<j){
		while (i<j && data[j]>=base) j--;
		data[i] =  data[j];
		data[j] =  base;
		while (i<j && data[i]<= base) i++;
		data[j] =  data[i];
	}
	data[low] = base;
}

/*--------------------快速排序---------------------*/
int findPos(int data[], int low, int high) {
    //将大于t的元素赶到t的左边，大于t的元素赶到t的右边
    int t = data[low];
    while(low < high) {
        while(low < high && data[high] >= t) {
            high--;
        }
        data[low] = data[high];
        while(low < high && data[low] <=t) {
            low++;
        }
        data[high] = data[low];
    }
    data[low] = t;
    //返回此时t在数组中的位置
    return low;
}
//在数组中找一个元素，对大于该元素和小于该元素的两个数组进行再排序
//再对两个数组分为4个数组，再排序，直到最后每组只剩下一个元素为止
void quickSort(int data[], int low, int high) {
    if(low > high) {
        return;
    }
    int pos = findPos(data, low, high);
    quickSort(data, low, pos-1);
    quickSort(data, pos+1, high); 
}