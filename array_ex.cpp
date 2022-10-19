#include <iostream>
using namespace std;
int main()
{
    int array[5] = {500, 400, 900, 455, 854};
    int max = 0;
    for (int num = 0; num <= 4; num++)
    {
        if (array[num] > max)
        {
            max = array[num];
        }
    }
    cout << max;
    return 0;
}