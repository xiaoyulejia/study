#include <iostream>
using namespace std;

void func(const int &val)
{
    //val = 1000; 错误,常量无法修改
}

//常量引用
//用来修饰形参,防止误操作
int main()
{
    int a = 10;
    func(a);
    return 0;
}