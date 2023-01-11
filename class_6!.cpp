#include <iostream>
using namespace std;
// 深拷贝和浅拷贝
class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person无参构造函数的调用" << endl;
    }
    Person(int age, int height)
    {
        m_age = age;
        m_height = new int(height);
        cout << "Person有参构造函数的调用" << endl;
    }
    // 析构函数
    ~Person()
    {
        if (m_height != NULL)
        {
            delete m_height;
            m_height = NULL;
        }
        
        cout << "析构函数的调用" << endl;
    }

    int m_age;
    int *m_height;
};
void test01()
{
    //浅拷贝
    //在这个案例中,有的编辑器是可以运行这段代码的,但是肯定报错
    //首先,我们没有在类中定义这个拷贝构造函数,系统会自动帮我们把p1的参数复制到p2
    //这里没有什么问题,但是,p2被执行完的时候执行析构函数,会被释放掉,已经删掉了m_height的内存
    //这个时候p1被释放,同样执行析构函数,又要删掉这一段内存,此时就是非法访问
    Person p1(18, 160);
    cout << p1.m_age << *p1.m_height << endl;
    Person p2(p1);
    cout << p2.m_age << *p2.m_height << endl;
    //浅拷贝容易出现的问题:堆区的内存被重复释放
}
int main()
{
    test01();
    return 0;
}