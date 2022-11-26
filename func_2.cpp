#include <iostream>
using namespace std;
//重载的条件
//1.同一个作用域下(目前是全局)
//2.函数名称相同
//3.函数参数类型或者个数不同,或者顺序不同

void func()
{
    cout << "func()哒" << endl;
}

void func(int a)
{
    cout << "func(int a)哒" << endl; 
}

void func(double a)
{
    cout << "func(double a)哒" << endl;
}

void func(int a,double b)
{
    cout << "func(int a,double b)哒" << endl;
}

void func(double a, int b)
{
    cout << "func(double a, int b)哒" << endl;
}

//引用作为重载的条件
void func_1(int &a)
{
    cout << "func_1(int &a)" << endl;
}

void func_1(const int &a)
{
    cout << "func_1(const int &a)" << endl;
}


int main()
{
    func();
    func(10);
    func(3.14);
    func(10,3.14);
    func(3.14,10);
    //func_1第一种
    int a = 10;
    func_1(a);
    //func_1第二种
    func_1(10);
    return 0;
}