#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};

int main()
{
    teacher t;
    t.age = 25;
    t.id = 114514;
    t.name = "Mike";
    t.stu.name = "Jack";
    t.stu.age = 18;
    t.stu.score = 100;

    cout << t.age << endl;
    cout << t.id << endl;
    cout << t.name << endl;
    cout << t.stu.name << endl;
    cout << t.stu.age << endl;
    cout << t.stu.score << endl;
    return 0;
}