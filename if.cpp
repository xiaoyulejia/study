#include <iostream>
using namespace std;
int main()
{
    int score = 0;
//  cout << "please input your score:" << endl;
//  cin >> score;
    score = 600;
    if (score > 600)
    {
        cout << "yiben" << endl;
        if (score > 700)
        {
            cout << "666666" << endl;
        }
        else if (score > 650)
        {
            cout << "666" << endl;
        }
        else 
        {
            cout << "6" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "erben" << endl;

    }
    else if (score > 400)
    {
        cout << "sanben" << endl;
    }

    else
    {
        cout << "I think you can do it" << endl;
    }



    return 0;

}
