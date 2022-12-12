#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 创建结构体
    struct score
    {
        //结构体中包含有语文数学英语成绩
        //并且变量的类型都是int
        int Chinese;
        int Mash;
        int English;
    };
    int N, a, b, c, m = 0;
    score student[1000]; //设置结构体的容量
    cin >> N;
    int j = 0;
    // 通过上面的N来循环输入学生的信息,当然这里也可以用c++的文件打开功能进行编辑
    for (int i = 0; i < N; i++)
    {
        // 循环输入每个变量并且储存到结构体中
        cin >> a;
        student[j].Chinese = a;
        cin >> b;
        student[j].Mash = b;
        cin >> c;
        student[j].English = c;
        j++;
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            //按照题目要求对两个学生的成绩进行if判断
            if ((student[i].Chinese - student[j].Chinese) <= 5 && (student[i].Chinese - student[j].Chinese) >= -5)     //语文成绩
                if ((student[i].English - student[j].English) <= 5 && (student[i].English - student[j].English) >= -5) //数学成绩
                    if ((student[i].Mash - student[j].Mash) <= 5 && (student[i].Mash - student[j].Mash) >= -5)         //英语成绩
                        // 总成绩的判断
                        if ((student[i].Chinese + student[i].English + student[i].Mash) - (student[j].Chinese + student[j].English + student[j].Mash) <= 10 && (student[i].Chinese + student[i].English + student[i].Mash) - (student[j].Chinese + student[j].English + student[j].Mash) >= -10)
                            m++; // 符合条件之后m+1
        }
    }
    cout << m;
    return 0;
}