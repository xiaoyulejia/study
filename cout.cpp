#include <iostream>
#include <iomanip>
using namespace std;
int b = 7;
int main()
{
    float a = 3.1415926;
    cout << fixed << setprecision(2) << a << endl;
    cout << b << endl;
    return 0;
}