#include <iostream>
using namespace std;
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
void test01()
{
    // 调用默认函数时候不要加括号
    Person p1;  // 默认构造函数的调用
    Person p2(10);  // 有参构造函数
    Person p4 = Person(10);  // 这种写法和上面的是一样的,只是叫做显式法
    Person p3(p2);
    Person p5 = Person(p4);  // 这种写法和上面的是一样的,只是叫做显式法
    cout << p2.age << endl;
    cout << p3.age << endl;
    // 不要利用拷贝构造函数初始化匿名对象, Person (p3) === Person p3;  
    // 所以这种写法就是错误的  编译器会认为这是一个变量的声明
}

int main()
{
    test01();
    return 0;
}