#include <iostream>
using namespace std;
//提供有默认参数的形参后面所有的形参都必须有默认参数
int func(int a = 10, int b = 30, int c = 40)
{
    return a + b + c;
}

//如果函数声明有默认函数,函数实现就不可以有默认参数
int func2(int a = 10, int b = 10);

int main()
{
    cout << func(10, 20, 30) << endl;
    cout << func(10) << endl;
    return 0;
}

int func2(int a, int b)
{
    return a + b;
}