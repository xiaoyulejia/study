#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};
//值传递
void printstu1(struct student s)
{

    cout << s.age << endl;
    cout << s.name << endl;
    cout << s.score << endl;
}

//地址传递
void printstu2(struct student *p)
{
    cout << p->age << endl;
    cout << p->name << endl;
    cout << p->score << endl;
}

int main()
{
    struct student s;
    s.name = "张三";
    s.age = 18;
    s.score = 100;
    printstu1(s);
    printstu2(&s);
    return 0;
}