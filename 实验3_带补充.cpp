#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    // 1
    char a_1 = 88;
    cout << a_1 << endl;
    cout << char(88) << endl;
    // 2
    //  #include<iostream.h>
    //  void main()
    //  {
    //      float a = 2.34e+22f;
    //      float b = a + 1.0f;
    //      cout << "a = " << a << endl;
    //      cout << "b - a = " << b - a << endl;
    //  }
    // 1.头文件使用错误,错用了c++的头文件
    // 2.主函数void应该改为int 并且return0
    // 3.少了命名空间using namespace std;

    // 3
    // 3.1
    int weight;
    cin >> weight;
    if (weight >= 125 && weight < 155)
    {
        cout << "数据合理" << endl;
    }
    else
    {
        cout << "数据不合理" << endl;
    }
    // 3.2
    char ch;
    cin >> ch;
    if (ch == 81 || ch == 113)
    {
        cout << "数据合理" << endl;
    }
    else
    {
        cout << "数据不合理" << endl;
    }
    // 3.3
    int x;
    cin >> x;
    if (x % 2 == 0 && x % 26 != 0)
    {
        cout << "数据合理" << endl;
    }
    else
    {
        cout << "数据不合理" << endl;
    }
    // 3.4
    int d;
    cin >> d;
    if (d > 1000 && d < 2000)
    {
        cout << "数据合理" << endl;
    }
    else if (d == 1)
    {
        cout << "数据合理" << endl;
    }
    else
    {
        cout << "数据不合理" << endl;
    }
    // 3.5
    char ch_1;
    cin >> ch_1;
    if (ch_1 >= 65 && ch_1 <= 90)
    {
        cout << "数据合理" << endl;
    }
    else if (ch_1 >= 97 && ch_1 <= 122)
    {
        cout << "数据合理" << endl;
    }
    else
    {
        cout << "数据不合理" << endl;
    }

    // 4
    int day;
    cin >> day;
    if (day == 2 || day == 4 || day == 6 || day == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // 5
    double a, b, c, x1, x2, m, n, h;
    cin >> a >> b >> c;
    h = b * b - 4 * a * c;
    if (h == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("x1=x2=%.5lf", x1);
    }
    if (h > 0)
    {
        x1 = (-b + sqrt(h)) / (2 * a);
        x2 = (-b - sqrt(h)) / (2 * a);
        if (x1 > x2)
        {
            printf("x1=%.5lf;x2=%.5lf", x1, x2);
        }

        else
        {
            printf("x1=%.5lf;x2=%.5lf", x2, x1);
        }
    }
    if (h < 0)
    {
        m = 0 - b / (2 * a);
        n = (sqrt(-h)) / (2 * a);
        if (a > 0)
        {
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", m, n, m, n);
        }
        else if (a < 0)
        {
            printf("x1=%.5lf-%.5lfi;x2=%.5lf+%.5lfi", m, n, m, n);
        }
    }

    // 5
    // 在 a_test.cpp中


    return 0;
}
