#include <iostream>
using namespace std;
int main()
{
    int time = 0;
    int val = 0;
    while (1)
    {
        ++time;
        int a = rand() % 100 + 1; // 先随机生成了一个0-99的随机数,之后在+1
        cout << a << endl;
        // cin >> val;
        val = 66;
        if (val > a)
        {
            cout << "try another smaller" << endl;
        }
        else if (val < a)
        {
            cout << "try another bigger" << endl;
        }

        else
        {
            cout << "you are so good" << endl;
            break; // exit the while
        }
    }
    cout <<"Total run:"<< time <<" times."<< endl;
 
    return 0;
}