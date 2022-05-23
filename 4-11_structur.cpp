// structur.cpp -- a simple structure
#include <iostream>
struct inflatable   // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };  // guest is a structure variable of type inflatable
// It's initialized to the indicated values
    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal is a second variable of type inflatable
// NOTE: some implementations require using
// static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
// pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}

// 结构声明的位置很重要，本示例采用在函数外定义结构，这种声明成为外部声明。另一种声明是放在main函数中，紧跟在开始括号后面。
// 对于只有一个函数的程序，这二者没有区别。但对于有多个函数的程序，差别很大。

// 个人理解，声明位置的区别有些像python中的局部变量和全局变量。结构则像是一个只具有属性的类。