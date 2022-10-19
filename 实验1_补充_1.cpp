#include <iostream>
using namespace std;
int main()
{
    //1
    int a, b;
    char c1, c2;
    cin >> a >> b;
    c1=++a;
    c2=b++;
    cout << "c1=" << c1 << ",c2=" << c2 <<endl;
    return 0;
}