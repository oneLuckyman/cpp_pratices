//usetime3.cpp -- using the fourth draft of the Time class
// compile usetime3.cpp and mytime3.h together
// 上面这行注释写的不对 compile usetime3.cpp and mytime3.cpp together
#include <iostream>
#include "11-10_mytime3.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida<<"; " << tosca << endl;
    temp = aida + tosca;    // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida* 1.17;      // operator*()
    cout << "Aida * 1,17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

    return 0;
}