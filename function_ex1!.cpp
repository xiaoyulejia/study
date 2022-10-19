#include <iostream>
using namespace std;
void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    //当我们做值传递的时候,函数的形参会发生改变,并不会影响实参.
    cout << a << endl;
    cout << b << endl;

    return 0;
}