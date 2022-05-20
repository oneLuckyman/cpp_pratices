// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    // cin >> year;         // 如果这样写会导致下面cin.getline()直接读取换行符，识别成空行，用户没有机会输入Address
    (cin >> year).get();    // 这样可以先读取并丢弃换行符  
    
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}