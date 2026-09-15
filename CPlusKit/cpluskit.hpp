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

    // IsOdd
    int IsOdd(int val)
    {
        return (val % 2 != 0);
    }

    // Factorial Function
    int factorial(int val)
    {
        int fact = 1;
        for (int i = 1; i <= val; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

    // IsPrime Function
    int IsPrime(int val)
    {

        int flag = 1;

        for (int i = 2; i < val; i++)
        {
            if (val % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}

// digits function

int *digits(int val)
{

    int dgt, temp;
    temp = val;

    int count = 0;

    while (val != 0)
    {
        count++;
    }
    int arr[count];
    for (int i = count; i >= 0; i++)
    {
        dgt = temp % 10;
        arr[i] = dgt;
        temp /= 10;
    }
    return arr;
}
