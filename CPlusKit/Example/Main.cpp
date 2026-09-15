#include<iostream>
#include "../cpluskit.hpp"
using namespace cpk;

int main() {
    int value = -5;
    std::cout << "Absolute value of " << value << " is: " << math::abs(value) << std::endl;
    return 0;
}