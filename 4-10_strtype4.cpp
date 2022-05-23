// strtype4.cpp -- line input 
#include <iostream>
#include <string>       // make string class available
#include <cstring>      // C-style string library
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // indicate maximum length 
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);          // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    return 0;
}

// 注意两次getline的区别
// cin.getline 表明这个getline()是istream类的一个类方法
// 第二个 getline(cin, str) 没有使用句点，这表明这个getline()不是类方法。它将 cin 作为参数，指出到哪里查找输入。