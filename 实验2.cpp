#include <iostream>
using namespace std;
int main()
{
    // 1
    int d = 0;
    int m = 0;
    int s = 0;
    float dg = 0;
    cout << "输入一个纬度的度、分、秒：" << endl;
    cout << "首先，输入度：" << endl;
    cin >> d;
    cout << "其次，输入分：" << endl;
    cin >> m;
    cout << "最后，输入秒：" << endl;
    cin >> s;
    float temp = 0;
    temp = m * 60;
    float temp_1 = 0;
    temp_1 = temp + s;
    float temp_2 = 0;
    temp_2 = temp_1 / (60 * 60);
    dg = d + temp_2;

    cout << d << "度," << m << "分," << s << "秒=" << dg << "度";

    // 2
    int score = 0;
    cout << "请输入你的成绩:";
    cin >> score;
    if (score >= 90)
    {
        cout << "A" << endl;
    }
    else if (score >= 80)
    {
        cout << "B" << endl;
    }
    else if (score >= 70)
    {
        cout << "C" << endl;
    }
    else if (score >= 60)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "E" << endl;
    }

    // 3
    int i, m;
    cout << "请输入利润(元):";
    cin >> i;
    cout << "当前利润为" << i << "元,";
    // 1.if；
    if (i <= 100000)
    {
        m = i * 0.1;
    }
    else if (i > 100000 && i <= 200000)
    {
        m = (i - 100000) * 0.075 + 10000;
    }

    else if (i > 200000 && i <= 400000)
    {
        m = (i - 200000) * 0.030 + 20000;
    }

    else if (i > 400000 && i <= 600000)
    {
        m = (i - 400000) * 0.015 + 40000;
    }

    else if (i > 600000 && i <= 1000000)
    {
        m = (i - 600000) * 0.010 + 60000;
    }
    else
    {
        m = (i - 1000000) * 0.010 + 100000;
    }
    cout << "应得奖金总数为:" << m << "元" << endl;
    // 2.switch
    int i, n;
    cout << "请输入利润（元）：";
    cin >> i;
    cout << "当前利润为" << i << "元,";
    switch (i / 100000)
    {
    case 0:
        n = i * 0.1;
        break;
    case 1:
        n = (i - 100000) * 0.075 + 10000;
        break;
    case 3:
        n = (i - 200000) * 0.030 + 20000;
        break;
    case 5:
        n = (i - 400000) * 0.015 + 40000;
        break;
    case 9:
        n = (i - 600000) * 0.010 + 60000;
        break;
    default:
        n = (i - 1000000) * 0.010 + 100000;
        break;
    }
    cout << "应得奖金总数为：" << n << "元。" << endl;

    // 4
    // 5
    int f, c;

    for (f = 0; f <= 300; f += 20)
    {
        c = 5 * (f - 32) / 9;
        // cout  << f << "\t" << c << endl;
        cout << f << "\t\t" << setw(6) << c << endl;
    }
    return 0;