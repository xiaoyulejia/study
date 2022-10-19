#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 2, 5, 4};
    int start = 0;                              //起始下标位置
    int end = sizeof(arr) / sizeof(arr[0]) - 1; //结束下标,长度-1
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
