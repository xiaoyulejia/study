#include <iostream>
using namespace std;
// 在c++中,非零的数字即代表true
int main()
{
    int a = 5;
    int b = 20;
    int c;

    if (a && b)
    // 这个是与
    {
        cout << "Line 1 - 条件为真" << endl;
    }
    if (a || b)
    // 这个是或
    {
        cout << "Line 2 - 条件为真" << endl;
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if (a && b)
    {
        cout << "Line 3 - 条件为真" << endl;
    }
    else
    {
        cout << "Line 4 - 条件不为真" << endl;
    }
    if (!(a && b))
    // 带有感叹号就是反结果的意思
    {
        cout << "Line 5 - 条件为真" << endl;
    }
    return 0;
}