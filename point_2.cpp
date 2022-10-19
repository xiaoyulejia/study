#include <iostream>
using namespace std;
int main()
{
    //空指针
    // 1.空指针用于给指针变量进行初始化
    int *p = NULL;
    // 2.空指针是无法访问的
    // 0-255之间的内存编号是系统占用的,因此不可以访问.

    //野指针
    //指针变量指向非法的内存空间
    int *p1 = (int *)0x1100;
    cout << *p1 << endl;
    return 0;
}