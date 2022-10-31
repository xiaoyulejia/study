#include <iostream>
#include <string>
using namespace std;
#define max 1000

void showmenu()
{
    cout << "1.添加联系人" << endl;
    cout << "2.显示联系人" << endl;
    cout << "3.删除联系人" << endl;
    cout << "4.查找联系人" << endl;
    cout << "5.修改联系人" << endl;
    cout << "6.清空联系人" << endl;
    cout << "0.退出通讯录" << endl;
}

struct people
{
    string m_name;
    int m_sex;
    int m_age;
    string m_phone;
    string m_address;
};

struct addressbook
{
    struct people personarray[max];
    int m_size;
};

int main()
{

    while (true)
    {
        addressbook abs;
        abs.m_size = 0;
        showmenu();
        int select = 0;
        cin >> select;
        switch (select)
        {
        case 1: //添加联系人
            break;
        case 2: //显示联系人
            break;
        case 3: //删除联系人
            break;
        case 4: //查找联系人
            break;
        case 5: //修改联系人
            break;
        case 6: //清空联系人
            break;
        case 0: //退出通讯录
            cout << "See you next time";
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}