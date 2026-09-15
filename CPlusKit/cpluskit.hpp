#include <algorithm>
#include <iostream>
#include <vector>

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

        // digits function

        std::vector<int> digits(int val)
        {
            std::vector<int> result;
            val = abs(val);

            do
            {
                result.push_back(val % 10);
                val /= 10;
            } while (val != 0);

            std::reverse(result.begin(), result.end());
            return result;
        }

        // sum of digits function
        int sumdigits(int val)
        {
            int digit, sum = 0;
            while (val != 0)
            {
                digit = val % 10;
                sum += digit;
                val /= 10;
            }
            return sum;
        }

        // product of digits function
        int productdigits(int val)
        {
            int digit, product = 1;
            while (val != 0)
            {
                digit = val % 10;
                product *= digit;
                val /= 10;
            }
            return product;
        }

        // Returns Reverse Of Digits(Pass: Value)
        int ReverseDigits(int val)
        {
            int dgt, rev = 0;
            while (val != 0)
            {
                dgt = val % 10;
                rev = 10 * rev + dgt;
                val /= 10;
            }
            return rev;       
         }

    }
}
