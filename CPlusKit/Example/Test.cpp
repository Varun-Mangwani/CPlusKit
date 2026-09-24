#include <cassert>
#include <cstring>
#include <iostream>
#include <vector>
#include "../cpluskit.hpp"

using namespace std;

int main()
{
    // String tests
    char s1[10] = "Hello";
    char s2[10] = "";
    char s3[20] = "12345";
    char s4[20] = "Hello123";
    char s5[20] = "Hi There";
    char s6[20] = "hello";
    char s7[20] = "HELLO";

    char alphaBad[20] = "Hello1";
    char digitBad[20] = "12a";
    char alnumBad[20] = "Hello!";
    char spaceBad[20] = "Hello";

    assert(cpk::string::strl(s1) == 5);
    assert(cpk::string::Is_Empty(s2) == 0);
    assert(cpk::string::Is_Empty(s1) == 5);
    assert(cpk::string::Is_Alpha(s1) == 1);
    assert(cpk::string::Is_Alpha(alphaBad) == 0);
    assert(cpk::string::Is_Digit(s3) == 1);
    assert(cpk::string::Is_Digit(digitBad) == 0);
    assert(cpk::string::Is_Alnum(s4) == 1);
    assert(cpk::string::Is_Alnum(alnumBad) == 0);
    assert(cpk::string::Is_Space(s5) == 1);
    assert(cpk::string::Is_Space(spaceBad) == 0);
    assert(cpk::string::Is_Lower(s6) == 1);
    assert(cpk::string::Is_Lower(s7) == 0);
    assert(cpk::string::Is_Upper(s7) == 1);
    assert(cpk::string::Is_Upper(s6) == 0);

    assert(strcmp(cpk::string::To_Upper(s6), "HELLO") == 0);
    assert(strcmp(cpk::string::To_Lower(s7), "hello") == 0);
    char title[20] = "hello world";
    assert(strcmp(cpk::string::To_Title(title), "Hello World") == 0);

    char left[20] = "   hello";
    assert(strcmp(cpk::string::Ltrim(left), "hello") == 0);

    char right[20] = "hello   ";
    assert(strcmp(cpk::string::Rtrim(right), "hello") == 0);

    char trimTest[20] = "  hello  ";
    assert(strcmp(cpk::string::Trim(trimTest), "hello") == 0);

    // Math tests
    assert(cpk::math::abs(-7) == 7);
    assert(cpk::math::min(2, 5) == 2);
    assert(cpk::math::max(2, 5) == 5);
    assert(cpk::math::clamp(10, 3, 8) == 8);
    assert(cpk::math::IsEven(4) == 1);
    assert(cpk::math::IsOdd(5) == 1);
    assert(cpk::math::factorial(5) == 120);
    assert(cpk::math::IsPrime(13) == 1);
    assert(cpk::math::IsPrime(12) == 0);
    assert(cpk::math::IsHappyNumber(19) == 1);
    assert(cpk::math::IsHappyNumber(20) == 0);

    vector<int> d = cpk::math::digits(12345);
    assert(d.size() == 5);
    assert(d[0] == 1 && d[1] == 2 && d[2] == 3 && d[3] == 4 && d[4] == 5);

    assert(cpk::math::sumdigits(12345) == 15);
    assert(cpk::math::productdigits(12345) == 120);
    assert(cpk::math::ReverseDigits(12345) == 54321);
    assert(cpk::math::Fibonacci(10) == 55);
    assert(cpk::math::FibonacciSum(7) == 20);
    assert(cpk::math::TriangularNumber(5) == 15);
    assert(cpk::math::IsTriangular(15) == 1);
    assert(cpk::math::ArithmeticTerm(2, 3, 4) == 11);
    assert(cpk::math::ArithmeticSum(2, 3, 4) == 26);
    assert(cpk::math::GeometricTerm(2, 3, 4) == 54);
    assert(cpk::math::GeometricSum(2, 3, 4) == 80);
    assert(cpk::math::PowerOfTwo(5) == 32);
    assert(cpk::math::IsPowerOfTwo(32) == 1);
    assert(cpk::math::IsPowerOfThree(27) == 1);
    assert(cpk::math::NextPowerOfTwo(33) == 64);
    assert(cpk::math::SquareSum(5) == 55);
    assert(cpk::math::CubeSum(3) == 36);
    assert(cpk::math::NaturalSum(5) == 15);

    cout << "All tests passed." << endl;
    return 0;
}
