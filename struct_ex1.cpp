#include <iostream>
#include <string>
using namespace std;

const int student_number = 5;

struct student
{
    string sname;
    int score;
};

struct teacher
{
    string tname;
    struct student sarr[student_number];
};

void allocatespace(struct teacher tarr[], int len, int student_number)
{
    string nameseed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tarr[i].tname = "Teacher_";
        tarr[i].tname += nameseed[i];
        for (int j = 0; j < student_number; j++)
        {
            tarr[i].sarr[j].sname = "Student_";
            tarr[i].sarr[j].sname += nameseed[j];
            tarr[i].sarr[j].score = 60;
        }
    }
}

void printinfo(struct teacher tarr[], int len, int student_number)
{
    for (int i = 0; i < len; i++)
    {
        cout << tarr[i].tname << "\n";
        for (int j = 0; j < student_number; j++)
        {
            cout << tarr[i].sarr[j].sname << "   ";
            cout << tarr[i].sarr[j].score << endl;
        }
    }
}

int main()
{
    int teacher_number = 3;
    // int student_number = 5;
    struct teacher tarr[teacher_number];
    int len = sizeof(tarr) / sizeof(tarr[0]);
    allocatespace(tarr, len, student_number);
    printinfo(tarr, len, student_number);
    return 0;
}