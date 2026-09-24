#include <iostream>
#include <vector>
#include "../cpluskit.hpp"

using namespace std;
using namespace cpk::math;

int main()
{
    using namespace cpk::math;
    int first = 10;
    int second = 25;
    int swapped = first;
    swapValues(swapped, second);

    cout << "abs/min/max/clamp = " << cpk::math::abs(-42) << ", " << min(first, second) << ", "
        << max(first, second) << ", " << clamp(18, 15, 20) << endl;
    cout << "sign/positive/negative/zero = " << sign(-4) << ", " << Is_Positive(4) << ", "
        << Is_Negative(-4) << ", " << Is_Zero(0) << endl;
    cout << "comparisons = " << Is_equal(10, 10) << ", " << Is_Greater(25, 10) << ", "
        << Is_Less(10, 25) << ", " << Is_Between(18, 15, 20) << endl;
    cout << "multiple/factor/divisible/positive-even = " << Is_Multiple(20, 5) << ", "
        << Is_Factor(5, 20) << ", " << Is_divisible(20, 5) << ", " << Is_Positive_Even(18) << endl;
    cout << "swapped values = " << swapped << ", " << second << endl;

    cout << "parity/factorial/prime = " << IsEven(18) << ", " << IsOdd(19) << ", "
        << factorial(5) << ", " << IsPrime(13) << endl;
    cout << "number properties = " << Is_Composite(12) << ", " << IsPerfect(28) << ", "
        << Is_Armstrong(153) << ", " << Is_Palindrome(121) << ", " << Is_Strong(145) << ", "
        << Is_Harshad(18) << ", " << Is_Automorphic(25) << ", " << Is_Neon(9) << ", "
        << Is_SpyNumber(1124) << ", " << IsHappyNumber(19) << endl;

    vector<int> digitValues = digits(12345);
    cout << "digits = ";
    for (int digit : digitValues)
    {
       cout << digit << " ";
    }
    cout << endl;
    cout << "digit operations = " << countDigits(12345) << ", " << sumdigits(12345) << ", "
        << productdigits(12345) << ", " << ReverseDigits(12345) << ", " << firstDigit(9414) << ", "
        << lastDigit(9414) << ", " << middleDigit(1234567) << ", " << largestDigit(9414) << ", "
        << smallestDigit(9414) << ", " << evenDigitCount(123456) << ", " << oddDigitCount(123456) << ", "
        << zeroDigitCount(102030) << ", " << digitFrequency(12234, 2) << ", " << removeDigit(12234, 2) << endl;

    cout << "arithmetic = " << lcm(10, 25) << ", " << HCF(10, 25) << ", " << power(2, 5) << ", "
        << cube(3) << ", " << squareRoot(25) << ", " << cubeRoot(27) << ", " << remainder(17, 5) << ", "
        << quotient(17, 5) << ", " << percentage(25, 100) << ", " << average(10, 20) << ", "
        << sumRange(1, 5) << ", " << productRange(1, 4) << endl;
    cout << "factors = " << gcdMultiple(18, 24) << ", " << lcmMultiple(6, 8) << ", " << countFactors(12) << ", "
        << sumFactors(12) << ", " << largestFactor(12) << ", " << smallestFactor(12) << endl;

    int *factorValues = primeFactors(84);
    delete[] factorValues;
    cout << "prime operations = " << nextPrime(10) << ", " << previousPrime(10) << ", " << NthPrime(5) << ", "
        << primeCount(20) << ", " << primeFactorsCount(84) << ", " << sumPrimeFactors(84) << ", "
        << largestPrimeFactor(84) << ", " << smallestPrimeFactor(84) << ", " << isTwinPrime(11) << ", "
        << isCoPrime(8, 15) << ", " << nextMultiple(17, 5) << ", " << previousMultiple(17, 5) << ", "
        << findFactor(20, 5) << ", " << isFactorial(120) << endl;

    cout << "sequences = " << Fibonacci(10) << ", " << FibonacciSum(7) << ", " << TriangularNumber(5) << ", "
        << IsTriangular(15) << ", " << ArithmeticTerm(2, 3, 4) << ", " << ArithmeticSum(2, 3, 4) << ", "
        << GeometricTerm(2, 3, 4) << ", " << GeometricSum(2, 3, 4) << ", " << PowerOfTwo(5) << ", "
        << IsPowerOfTwo(32) << ", " << IsPowerOfThree(27) << ", " << NextPowerOfTwo(33) << ", "
        << SquareSum(5) << ", " << CubeSum(3) << ", " << NaturalSum(5) << endl;
    return 0;
}
