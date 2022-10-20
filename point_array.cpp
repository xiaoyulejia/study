#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;//arr就是数组首地址
    for (int i = 0; i < 10; i++)
    {
        cout << *p <<endl;
        p++;
    }
    
    return 0;
}