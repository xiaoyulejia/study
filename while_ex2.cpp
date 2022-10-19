#include <iostream>
using namespace std;
//水仙花数的练习
// 获取个位数:可以通过%10
// 153%10=3
// 获取十位数:可以通过/10
// 153/10=15  15%10可以得到个位
// 百位数同理:/100
// ps在c++中,两个整数相除只会出现整数(向下取整)
int main()
{
    int num = 100;
    do
    {
        int a = 0;
        int b = 0;
        int c = 0;
        a = num % 10;
        b = num/10 %10;
        c =num /100;
        if (a*a*a + b*b*b + c*c*c == num)
        {
            cout << num << endl;
        }
        num++;
    }
    while(num < 1000);
    return 0;
}