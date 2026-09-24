#include <iostream>
#include <vector>
#include "../cpluskit.hpp"

using namespace std;
using namespace cpk::math;

int main()
{
    int value = -42;
    int a = 10;
    int b = 25;
    int c = 18;

    cout << "abs(-42) = " << cpk::math::abs(value) << endl;
    cout << "min(10,25) = " << cpk::math::min(a, b) << endl;
    cout << "max(10,25) = " << cpk::math::max(a, b) << endl;
    cout << "clamp(18, 15, 20) = " << cpk::math::clamp(c, 15, 20) << endl;
    cout << "IsEven(18) = " << cpk::math::IsEven(18) << endl;
    cout << "IsOdd(19) = " << cpk::math::IsOdd(19) << endl;
    cout << "factorial(5) = " << cpk::math::factorial(5) << endl;
    cout << "IsPrime(13) = " << cpk::math::IsPrime(13) << endl;

    vector<int> digits = cpk::math::digits(12345);
    cout << "digits(12345) = ";
    for (int d : digits)
    {
        cout << d << " ";
    }
    cout << endl;

    cout << "sumdigits(12345) = " << cpk::math::sumdigits(12345) << endl;
    cout << "productdigits(12345) = " << cpk::math::productdigits(12345) << endl;
    cout << "ReverseDigits(12345) = " << cpk::math::ReverseDigits(12345) << endl;
    cout << "lcm(10, 25) = " << cpk::math::lcm(10, 25) << endl;
    cout << "HCF(10, 25) = " << cpk::math::HCF(10, 25) << endl;
    cout << "IsPerfect(28) = " << cpk::math::IsPerfect(28) << endl;
    cout << "sign(0) = " << cpk::math::sign(0) << endl;
    cout << "Armstrong : " << Is_Armstrong(153) << endl;
    cout << "Strong Func: " << Is_Strong(15) << endl;
    cout << "Automorphic : " << Is_Automorphic(2) << endl;
    cout << "Nenon Number(9) " << Is_Neon(9) << endl ;  
    cout << "Is Spy Number : " << Is_SpyNumber(1124) << endl ;
    cout << "Count Digits : " << countDigits(12345) << endl;
    cout << "First Digit : " << firstDigit(9414) << endl;
    cout<< "MiddleDigit : " << middleDigit(1234567) << endl;
    return 0;
}
