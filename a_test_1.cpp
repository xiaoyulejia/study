#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;

    cout << "输入一个正整数: ";
    cin >> n;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "是素数";
    else
        cout << "不是素数";

    return 0;
}