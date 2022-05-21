// strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string>               // make string class available
int main()
{
    using namespace std;
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1;                // create an empty string object
    string str2 = "panther";    // create an initialized string

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2         // use cout for output
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;            // use array notation
    return 0;
}

// 在很多方面string对象和字符串数组都是相同的，主要的不同之处是，可以将string对象声明为简单变量，而不是数组
// 例如：
//      string str2 = "panther";
//      string str1;
// 这样的设计可以让程序能够自动处理string的大小
// 理论上来说，可以将char数组视为一组用于存储一个字符串的char存储单元，而string类变量是一个表示字符串的实体