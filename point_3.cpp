#include <iostream>
using namespace std;
int main()
{
    // const修饰指针 - 常亮指针
    //特点:指针的指向可以修改,但是指针指向的值不可以修改
    int a = 10;
    int b = 10;
    const int *p = &a;
    cout << *p << endl;
    // *p = 20 这句话就是错的
    // p = &b  这个就可以

    // const修饰常量 - 指针常量
    //特点:指针的指向不可以修改,但是指针指向的值可以修改
    int a = 10;
    int b = 10;
    int *const p = &a;
    // *p = 20 这个就可以
    // p = &b  这句话就是错的

    //const即修饰指针又修饰常量
    //特点:指针的指向和指针的值都不可以修改
    // *p = 20     p = &b  两句话都是错误的


    
    return 0;
}