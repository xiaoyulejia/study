#include <iostream>
using namespace std;

//占位参数
//目前用不到占位参数
//写了就必须要传入
//占位参数可以有默认
void func(int a,int = 10)
{

}

int main()
{
    func(10,10);
    return 0;
}