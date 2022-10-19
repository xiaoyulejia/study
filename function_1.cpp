#include <iostream>
using namespace std;

// 1.无参无返
void test01()
{
    cout << "test01" << endl;
}

// 2.有参无返
void test02(int a)
{
    cout << "test02" << a << endl;
}
// 3.无参有返
int test03()
{
    cout << "test03" << endl;
    return 1000;
}

// 4.有参有反
int test04(int a)
{
    cout << "test 04" << a << endl;
    return 100;
}

int main()
{
    test01();
    test02(100);
    int num = test03();
    cout << num << endl;

    return 0;
}