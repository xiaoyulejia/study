#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};

void printstu(const student *s) //传入的时候使用指针就不会复制内容,可以节约内存空间
{
    //s->age = 15;     //为了防止误操作我们会在上面传入的时候添加const
    cout << s->age << endl;
    cout << s->name << endl;
    cout << s->score << endl;
}

int main()
{
    struct student s = {"Mike", 20, 100};
    printstu(&s);
    return 0;
}