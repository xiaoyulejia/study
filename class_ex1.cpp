#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string m_Name;
    int m_Id;
    void showStudent()
    {
        cout << m_Name << "  " << m_Id << endl;
    }
    void setName(string name)
    {
        m_Name = name;
    }
};

// public 类内和类外都可访问
// protected 类内可,类外不行,儿子可以访问父亲的保护内容
// private 类内可,类外不行,儿子不可以访问父亲的隐私内容

int main()
{
    student s1;
    s1.m_Name = "张三";
    //新名字
    s1.setName("李四");
    s1.m_Id = 3;
    s1.showStudent();
    return 0;
}