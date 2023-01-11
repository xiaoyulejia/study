#include <iostream>
using namespace std;

void input(int a[], int b);
void mysort(int a[], int b);
void output(int a[], int b);

int main()
{
    const int N = 10;
    int a[N];
    input(a, N);
    mysort(a, N);
    output(a, N);
    return 0;
}

void input(int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        cin >> a[i];
    }
}
void mysort(int a[], int b)
{
    for (int i = 0; i < b - 1; i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

void output(int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << a[i] << endl;
    }
}