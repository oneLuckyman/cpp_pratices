// mixtypes.cpp -- some type combinations
#include <iostream>
struct antarctica_years_end                 // 首先声明一个结构
{
    int year;
/* some really interesting data, etc. */
};

int main()
{
    antarctica_years_end s01, s02, s03;     // 创建这种结构的变量
    s01.year = 1998;                        // 使用成员运算符访问其成员
    antarctica_years_end * pa = &s02;       // 可以创建指向这种结构的指针
    pa->year = 1999;                        // 将该指针设置为有效地址后，就可使用间接成员运算符来访问成员
    antarctica_years_end trio[3];           // array of 3 structures    创建这种结构的数组
    trio[0].year = 2003;                    // 使用成员运算符访问元素的成员，其中 trio 是一个数组，trio[0] 是一个结构，trio[0].year 是该结构的一个成员
    std::cout << trio->year << std::endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;                     // C++11 automatic type deduction
// or else use const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;
    return 0;
}