#include <iostream>
using namespace std;

//引用的本质在c++里其实就是一个指针常量
// 1.不要返回局部变量的引用
//第一次可能可以打印出结果
//多次输出可能就会乱码
int &test01()
{
    int a = 10;
    //局部变量在栈区
    return a;
}

// 2.函数的调用可以作为左值存在
int &test02()
{
    static int a = 10;
    //静态变量,全局区,系统释放
    return a;
}

int main()
{
    int &ref = test01();
    //实质:int * const ref = &a;
    cout << ref << endl; //第一次正确是因为编译器保存了
    cout << ref << endl; //第二次就是乱码
    //---------------
    int &ref2 = test02();
    cout << ref2 << endl;
    cout << ref2 << endl;
    test02() = 1000;
    cout << ref2 << endl;
    cout << ref2 << endl;
    return 0;
}