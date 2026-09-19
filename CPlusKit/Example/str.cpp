#include <iostream>
#include "../cpluskit.hpp"
int main()
{
    char nm[50] = "abcd124";
    cout << cpk::string::Is_Digit(nm) << endl;
    cout << cpk::string::Is_Alnum(nm) << endl;
}