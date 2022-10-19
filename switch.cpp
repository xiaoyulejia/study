#include <iostream>
using namespace std;
int main()
{
    int score = 0;
    cout << "please type your score:";
    // cin >> score;
    score = 650;
    switch (score)
    {
    case 600:
        cout << "You are so good;";
        break;
    case 500:
        cout << "You are so good;";
        break;
    default:
        cout << "I think you can do it";
        break;
    }
    return 0;
}