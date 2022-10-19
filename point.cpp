#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    //指针的定义
    //数据类型 * 指针变量名
    int *p;
    //让指针记录变量a的地址
    p = &a;
    cout << a << endl;
    cout << p << endl;
    // *p代表解除引用,可以显示指针指向的内存数据(源数据)
    cout << *p <<endl;
    return 0;
}