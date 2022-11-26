#include <iostream>
using namespace std;

//此处说明该函数返回的是一段地址
int *func()
{
    //开辟一段内存,存放了数字10
    int *p = new int(10);
    return p;
}

void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //多输出几次也不影响,因为此时还没有手动释放内存
    delete p;
    //这个时候cout就会报错
    //前三次还是可以正常输出的
}

//在堆区利用new开辟数组
void test02()
{
    int *arr = new int[20];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    //释放数组的时候,要加[],注意位置
    delete[] arr;
}

int main()
{
    test01();
    test02();
    return 0;
}