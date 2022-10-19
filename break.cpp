#include <iostream>
using namespace std;
int main()
{
    // 1.shwitch
    int a = 1;
    // cin >> a;
    switch (a)
    {
    case 1:
        cout << "normal" << endl;
        break;
    case 2:
        cout << "great" << endl;
        break;

    default:
        break;
    }

    for (int i = 1; i < 10; i++)
    {
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
    }

    return 0;
}
