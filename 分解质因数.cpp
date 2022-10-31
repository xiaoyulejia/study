#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << "=";
    for (int k = 2; k <= n; k++)
    {
        while (n != k)
        {
            if (n % k == 0)
            {
                cout << k << "x";
                n /= k;
            }
            else
                break;
        }
    }
    cout << n; 

    return 0;
}