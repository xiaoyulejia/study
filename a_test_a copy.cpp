#include <iostream>
using namespace std;
int main()
{
    struct cmp
    {
        int x;
        int y;
    } 
    cnum[2] = {1, 3, 2, 7};
    cout << cnum[0].x / cnum[1].y * cnum[1].x << endl;
    return 0;
}
