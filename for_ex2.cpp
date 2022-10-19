#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=9; i++) //行
    {
        // cout << i << endl;
        for(int j=1; j<=i; j++)//列  列<=行
        {
            // cout << j ;
            cout << j << "*" << i << "=" << j*i << "  "; 
        }
        cout << endl;
    }
    return 0;
}