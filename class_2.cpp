#include <iostream>
using namespace std;

class Person
{
public:
    //构造函数
    //没有返回值,不用写void
    //函数名字和类名相同
    //可以有参数,能发生重载
    //创建对象的时候会自动调用,而且只调用一次
    Person()
    {
        cout << "person 构造函数的调用" << endl;
    }

    //析构函数 进行清理的操作
    //没有返回值 不写void
    //函数名和类名相同 在名称前面加~
    //析构函数不可以有参数 不可以发生重载
    //对象在销毁前自动调用析构函数 而且只会调用一次
    ~Person()
    {
        cout << "person 析构函数的调用" << endl;
    }
};

void test01()
{
    Person p;
}



int main()
{
    test01();
    return 0;
}