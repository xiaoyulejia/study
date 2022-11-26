#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    //引用
    //可以给当前的变量一个新的名字
    //数据类型 &别名 = 原名
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    b = 100;
    cout << a << endl;
    cout << b << endl;
    //-------------------------------
    int m = 10;
    int n = 20;
    // int &c; //错误,引用必须初始化
    int &x = m; //初始化之后没法修改
    x = b;      //赋值操作,不是修改引用
    cout << m << endl;
    cout << n << endl;
    cout << x << endl;
    //-------------------------------
    int a1 = 10;
    int a2 = 20;
    swap(a1, a2);
    cout << a1 << "   " << a2 << endl;
    return 0;
}