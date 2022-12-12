#include <iostream>
using namespace std;
int main()
{
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        cout << "hello world" << endl;
        for (int j = 0; j < 10; j++)
        {
            cout << "hello" << endl;
            for (int m = 0; m < 10; m++)
            {
                cout << "world" << endl;
                break;
            }
            
        }
        
    }

    return 0;
}