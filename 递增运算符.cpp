#include <iostream>
using namespace std;
int main()
{
    // 前置递增,先让变量+1,再进行表达式的运算
    int a = 10;
    ++a;
    cout << a << endl;
    // 后置递增,先进行表达式的运.再+1
    int b = 10 ;
    b++;
    cout << b << endl;

    int a2 = 10;
    int b2 = ++a2*10;
    cout << a2 << endl;
    cout << b2 << endl;

    int a3 = 10;
    int b3 = a3++*10;
    cout << a3 << endl;
    cout << b3 << endl;

    return 0;
}