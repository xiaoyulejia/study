#include <iostream> 
using namespace std;
extern int a;
int main()
{
    int a;
    a = 0;
    while (a<=10)
    {
        cout << a << endl;
        ++a;
    }
    return 0;
}