#include <iostream>
#include <string>
using namespace std;
struct people
{
    string name;
    int age;
    string sex;
};

void bubblesort(struct people arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                struct people temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(struct people arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].name;
        cout << arr[i].age;
        cout << arr[i].sex << endl;
    }
}

int main()
{
    struct people arr[5] =
        {
            {"张三", 23, "男"},
            {"李四", 22, "男"},
            {"王五", 20, "男"},
            {"赵六", 21, "男"},
            {"老八", 19, "女"},

        };
    int len = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, len);
    print(arr);
    return 0;
}