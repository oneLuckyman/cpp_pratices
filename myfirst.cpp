// myfirst.cpp -- displays a message

#include <iostream>                             //  一个PREPROCESSOR（预处理器？）指令，它告诉编译器，在编译过程中，需要使用的头文件
int main()                                      //  function header 函数头
{                                               //  一个函数体的开始
    using namespace std;                        //  告诉编译器，使用标准命名空间,使定义可见
    cout << "Hello, world!"                     //  信息
    cout << endl;                               //  换行
    cout << "I'm a C++ program."                //  信息
    cout << endl;                               //  换行
    cout << "And goodluck!"                     //  信息
    return 0;                                   //  返回值，终止main函数
}