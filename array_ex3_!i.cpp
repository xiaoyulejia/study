#include <iostream>
using namespace std;
// 升序排列
int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int num = sizeof(arr) / sizeof(arr[0]);
    //开始冒泡排序
    //总共排序轮数 = 元素个数-1
    for (int i = 0; i < num - 1; i++)
    {
        //内层循环对比
        //次数 = 元素个数 -当前的轮数-1
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int a = 1; a < num; a++)
    {
        cout << arr[a] << endl;
    }
    return 0;
}