#include <iostream>
using namespace std;
int main()
{
    for(int a = 0; a <=100; a++)
    {
        if (a % 2 == 0)
        {
            continue;//不像break会跳出循环,continue只是不会继续执行下面的操作
        }
        cout << a << endl;
    }
    return 0;
}