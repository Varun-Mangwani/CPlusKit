#include <iostream>

// abs
// min
// max
// clamp
// sign

// isEven
// isOdd

// gcd
// lcm
// factorial
// isPrime

// digits
// sumDigits
// productDigits
// reverseNumber

// isPalindrome
// isArmstrong
// isPerfectNumber
// isStrongNumber

// countDivisors
// sumDivisors
// getDivisors
// getPrimeFactors

// permutation
// combination
using namespace std;

namespace cpk
{
    namespace math
    {
        // absolute value function
        int abs(int val)
        {
            if (val < 0)
            {
                return -val;
            }
            return val;
        }
    }

    // Minimum Function
    int min(int a, int b)
    {
        return (a > b) ? b : a;
    }

    // Maximum Function
    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    // clamp function
    int clamp(int val, int minVal, int maxVal)
    {
        if (val < minVal)
            return minVal;
        if (val > maxVal)
            return maxVal;
        return val;
    }

    // IsEven
    int IsEven(int val)
    {
        return (val % 2 == 0);
    }

    //IsOdd
    int IsOdd(int val){
        return (val % 2 != 0);
    }

    
}
