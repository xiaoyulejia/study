#include <iostream>
using namespace std;

//此时的函数在主函数的后面
//进行调用的时候要先声明函数
int max(int num1, int num2);

int main()
{

    int a = 10;
    int b = 20;
    cout << max(a, b) << endl;
    return 0;
}

int max(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}