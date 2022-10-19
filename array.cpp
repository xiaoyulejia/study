#include <iostream>
using namespace std;
int main()
{
    //数组的创建
    // 1. 数据类型 数组名[数组长度];
    char arr[5];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = 'd';
    arr[4] = 'e';
    cout << arr[1] << endl;
    // 2. 数据类型 数组名[数组长度{值};
    // ps:没有说明的数据会使用0进行填充
    int arr2[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        cout << arr2[i] << endl;
    }
    // 3. 数据类型 数组名[] = {值}
    int arr3[] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        cout << arr3[i] << endl;
    }
    return 0;
}