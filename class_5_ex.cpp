#include <iostream>
using namespace std;
// 拷贝构造函数的使用时机
class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person无参构造函数的调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person有参构造函数的调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        cout << "Person拷贝构造函数的调用" << endl;
        age = p.age;
    }
    // 析构函数
    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }

    int age;
};

// 1,使用一个已经创建完毕的对象来初始化一个新的变量
void test01()
{
    Person p1(10);
    Person p2(p1);
    cout << "p2's age is " << p2.age << endl;
}
// 2.用值传递的方式给函数参数传值
void doWork(Person P)
{

}
void test02()
{
    Person p3;
    doWork(p3);
}
// 3.值方式返回局部对象
Person doWork2()
{
    Person p4;
    return p4;
}
void test03()
{
    Person p5 = doWork2();
}
// 以下区分为主函数
int main()
{
    test01();
    test02();
    test03();
    return 0;
}