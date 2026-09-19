#include <iostream>
#include "../cpluskit.hpp"
int main()
{
    char nm[50] = "blah";
    cout << cpk::string::Is_Alpha(nm) << endl;
}