#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "构造函数的调用" << endl;
    }
    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }
};

int main()
{
    Person P;
    return 0;
}