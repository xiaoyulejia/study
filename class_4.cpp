#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    // R W
    string M_name;
    // R
    int M_age;
    // W
    string M_lover;

public:
    void setName(string name)
    {
        M_name = name;
    }
    string getName()
    {
        return M_name;
    }
    int getAge()
    {
        M_age = 0;
        return M_age;
    }
};

int main()
{
    Person p;
    p.setName("张三");
    cout << p.getName() << endl;

    return 0;
}