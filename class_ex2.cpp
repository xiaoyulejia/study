#include <iostream>
using namespace std;
class Cube
{
public:
    void setL(int L)
    {
        m_L = L;
    }
    int getL()
    {
        return m_L;
    }
    void setW(int W)
    {
        m_W = W;
    }
    int getW()
    {
        return m_W;
    }
    void setH(int H)
    {
        m_H = H;
    }
    int getH()
    {
        return m_H;
    }
    int calculateS()
    {
        return 2 * (m_L * m_W + m_W * m_H + m_L * m_H);
    }
    int calculateV()
    {
        return m_L * m_H * m_H;
    }
    bool isSameByClass(Cube &c)
    {
        if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
        {
            return true;
        }
        return false;
    }

private:
    int m_L;
    int m_W;
    int m_H;
};

bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);
    cout << c1.calculateS() << "  " << c1.calculateV() << endl;
    Cube c2;
    c2.setH(20);
    c2.setL(20);
    c2.setW(20);
    //利用全局函数判断两个立方体是否一致
    cout << isSame(c1, c2) << endl;
    //利用成员函数判断
    cout << c1.isSameByClass(c2) << endl;
    return 0;
}