#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] =
        {
            {1, 1, 4},
            {5, 1, 4}};
    cout << "二维数组占用的内存空间为" << sizeof(arr) << endl;
    cout << "二维数组单行占用的内存空间为" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用的空间为" << sizeof(arr[0][0]) << endl;

    cout << "二维数组的行数为" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组的列数为" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "二维数组的首地址为" << (int)arr << endl;
    cout << "二维数组第一行的首地址为" << (int)arr[0] << endl;
    cout << "二维数组第二行的首地址为" << (int)arr[1] << endl;

    cout << "二维数组第一个元素的地址为" << (int)&arr[0][0] << endl;
    cout << "二维数组第二个元素的地址为" << (int)&arr[0][1] << endl;

    return 0;
}
