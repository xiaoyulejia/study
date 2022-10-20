#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
}s3;//注意这里还有一个变量,但是一般不会这样写

int main()
{
    //赋值
    // 2.1
    struct student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << s1.name << s1.age << s1.score << endl;

    // 2.2
    struct student s2 = {"李四",19,99};
    cout << s2.name << s2.age << s2.score << endl;

    //2.3
    s3.name = "王五";
    s3.age = 20;
    s3.score = 98 ;
    cout << s3.name << s3.age << s3.score << endl;

    return 0;
}