#include <iostream>
using namespace std;
int main()
{
    // 二维数组的定义方式
    // 1.数据类型 数组名 [行数] [列数];
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 1;
    arr[0][2] = 4;
    arr[1][0] = 5;
    arr[1][1] = 1;
    arr[1][2] = 4;
    for (int i = 0; i < 2; i++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr[i][b] << " ";
        }
    }
    cout << "" << endl;

    // 2.数据类型 数组名 [行数] [列数] = {{数据1,数据2}{数据3,数据4}}
    int arr2[2][3] =
        {
            {1, 1, 4},
            {5, 1, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr2[i][b] << " ";
        }
    }
    cout << "" << endl;

    // 3.数据类型 数组名 [行数] [列数] = {数据1,数据2,数据3,数据4}
    int arr3[2][3] = {1, 1, 4, 5, 1, 4}; //让电脑自己分辨行列
    for (int i = 0; i < 2; i++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr3[i][b] << " ";
        }
    }
    cout << "" << endl;

    // 4.数据类型 数组名 [] [列数] = {数据1,数据2,数据3,数据4}
    int arr4[][3] = {1, 1, 4, 5, 1, 4};
    for (int i = 0; i < 2; i++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr4[i][b] << " ";
        }
    }
    return 0;
}