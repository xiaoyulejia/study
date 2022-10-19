#include <iostream>
#include <string>
using namespace std;
int main()
{
    int score[][3] =
        {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}

        };
    string name[] = {"张三", "李四", "王五"};

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            // cout << score[i][j] << "  ";
            sum += score[i][j];
        }
        cout << name[i] << "'s score is " << sum << endl;
    }
    return 0;
}