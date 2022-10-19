#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout <<"整个数组占用的内存空间"<< sizeof(arr) << endl;
    cout <<"每个元素所占的内存空间"<< sizeof(arr[0]) << endl;
    cout <<"数组中元素的个数为"<< sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "数组首地址为(int转换为10进制)"<<(int)arr<< endl;
    cout << "数组中第一个元素的地址为(int转换为10进制)" << (int)arr << endl;
    //数组的名字是无法修改的
    return 0;
}