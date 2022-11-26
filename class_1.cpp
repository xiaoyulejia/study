#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
public:
    //属性
    //半径
    int m_r;
    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    //通过园类 创建具体的对象
    Circle c1;
    c1.m_r = 10;
    cout << c1.calculateZC() << endl;
    return 0;
}