#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << sizeof(p);
    cout << sizeof(int *);
    return 0;
}