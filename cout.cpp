#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a = 3.1415926;
    cout << fixed << setprecision(2) << a;
    return 0;
}