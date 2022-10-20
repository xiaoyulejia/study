#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    student s = {"张三", 19, 100};
    // int *p = &s;    这样写是不对的,int无法修饰这个
    student *p = &s;
    //利用指针进行输出
    cout << p->age << p->name << p->score << endl;
    return 0;
}