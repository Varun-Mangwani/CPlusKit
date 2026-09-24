#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#ifndef CPlusKit_MATHS_HPP
#define CPlusKit_MATHS_HPP

namespace cpk::math
{
    /**
     * @brief Returns the absolute value of an integer.
     * @param val The input number to evaluate.
     * @return The positive magnitude of the value.
     */
    // function no. - 1
    int abs(int val)
    {
        if (val < 0)
        {
            return -val;
        }
        return val;
    }

    /**
     * @brief Returns the smaller of two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return The minimum value between a and b.
     */
    // function no. - 2
    int min(int a, int b)
    {
        return (a > b) ? b : a;
    }

    /**
     * @brief Returns the larger of two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return The maximum value between a and b.
     */
    // function no. - 3
    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    /**
     * @brief Restricts a value to a given range.
     * @param val The value to clamp.
     * @param minVal The lower limit.
     * @param maxVal The upper limit.
     * @return The value, limited to the range [minVal, maxVal].
     */
    // function no. - 4
    int clamp(int val, int minVal, int maxVal)
    {
        if (val < minVal)
            return minVal;
        if (val > maxVal)
            return maxVal;
        return val;
    }

    /**
     * @brief Checks whether a number is even.
     * @param val The value to inspect.
     * @return 1 if the number is even; otherwise 0.
     */
    // function no. - 5
    int IsEven(int val)
    {
        return (val % 2 == 0);
    }

    /**
     * @brief Checks whether a number is odd.
     * @param val The value to inspect.
     * @return 1 if the number is odd; otherwise 0.
     */
    // function no. - 6
    int IsOdd(int val)
    {
        return (val % 2 != 0);
    }

    /**
     * @brief Computes the factorial of a non-negative integer.
     * @param val The number whose factorial should be calculated.
     * @return The factorial of val.
     */
    // function no. - 7
    int factorial(int val)
    {
        int fact = 1;
        for (int i = 1; i <= val; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

    /**
     * @brief Determines whether a number is prime.
     * @param val The integer to test.
     * @return 1 if the value is prime; otherwise 0.
     */
    // function no. - 8
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

    /**
     * @brief Splits an integer into its decimal digits.
     * @param val The number to decompose.
     * @return A vector containing the digits in order.
     */
    // function no. - 9
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

    /**
     * @brief Sums all digits of a number.
     * @param val The value to inspect.
     * @return The sum of all digits.
     */
    // function no. - 10
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

    /**
     * @brief Multiplies all digits of a number together.
     * @param val The value to inspect.
     * @return The product of all digits.
     */
    // function no. - 11
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

    /**
     * @brief Reverses the digits of an integer.
     * @param val The number to reverse.
     * @return The number with digits in reverse order.
     */
    // function no. - 12
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
    /*
     * @brief Computes the least common multiple (LCM) of two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return The LCM of a and b.
     */
    // function no. - 13
    int lcm(int a, int b)
    {
        int start = a < b ? b : a;
        int end = a * b;
        int ans = -1;
        for (int i = start; i <= end; i++)
        {

            if (i % a == 0 && i % b == 0)
            {
                ans = i;

                break;
            }
        }
        // cout << ans;
        return ans;
    }
    /*
     * @brief Computes the highest common factor (HCF) of two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return The HCF of a and b.
     */
    // function no. - 14
    int HCF(int a, int b)
    {
        int start = a < b ? a : b;

        for (int i = start; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                return i;
            }
        }
        return 1;
    }

    /*
     * @brief Checks if a number is a perfect number.
     * @param a The number to check.
     * @return 1 if the number is perfect, 0 otherwise.
     */
    // function no. - 15
    int IsPerfect(int a)
    {
        int sum = 0;
        for (int i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                sum += i;
            }
        }
        if (sum == a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    /**
     * @brief Returns the sign of a number.
     * @param val The number to check.
     * @return 1 if the number is positive, -1 if it's negative, and 0 if it's zero.
     */
    // function no. - 16
    int sign(int val)
    {
        if (val > 0)
        {
            return 1;
        }
        else if (val < 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    /**
     * @brief Checks if a number is positive.
     * @param val The number to check.
     * @return 1 if the number is positive, 0 otherwise.
     */
    // function no. - 17
    int Is_Positive(int val)
    {
        return (val > 0);
    }

    /**
     * @brief Checks if a number is negative.
     * @param val The number to check.
     * @return 1 if the number is negative, 0 otherwise.
     */
    // function no. - 18
    int Is_Negative(int val)
    {
        return (val < 0);
    }

    /**
     * @brief Checks if a number is zero.
     * @param val The number to check.
     * @return 1 if the number is zero, 0 otherwise.
     */
    // function no. - 19
    int Is_Zero(int val)
    {
        return (val == 0);
    }

    /**
     * @brief Checks if two numbers are equal.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the numbers are equal, 0 otherwise.
     */
    // function no. - 20
    int Is_equal(int a, int b)
    {
        return (a == b);
    }

    /**
     * @brief Checks if a number is greater than another.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the first number is greater than the second, 0 otherwise.
     */
    // function no. - 21
    int Is_Greater(int a, int b)
    {
        return (a > b);
    }
    /**
     * @brief Checks if a number is less than another.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the first number is less than the second, 0 otherwise.
     */
    // function no. - 22
    int Is_Less(int a, int b)
    {
        return (a < b);
    }

    /**
     * @brief Checks if a number is between two other numbers (inclusive).
     * @param val The number to check.
     * @param lower The lower bound.
     * @param upper The upper bound.
     * @return 1 if the number is between the bounds, 0 otherwise.
     */
    // function no. - 23
    int Is_Between(int val, int lower, int upper)
    {
        return (val >= lower && val <= upper);
    }
    /**
     * @brief Checks if a number is positive and even.
     * @param val The number to check.
     * @return 1 if the number is positive and even, 0 otherwise.
     */
    // function no. - 24
    int Is_Positive_Even(int val)
    {
        return (Is_Positive(val) && IsEven(val));
    }

    /**
     * @brief Checks if a number is a multiple of another.
     * @param val The number to check.
     * @param multiple The multiple to check against.
     * @return 1 if the number is a multiple of the other, 0 otherwise.
     */
    // function no. - 25
    int Is_Multiple(int val, int multiple)
    {
        return (val % multiple == 0);
    }

    /**
     * @brief Checks if a number is a factor of another.
     * @param val The number to check.
     * @param factor The factor to check against.
     * @return 1 if the number is a factor of the other, 0 otherwise.
     */
    // function no. - 26
    int Is_Factor(int val, int factor)
    {
        return (factor % val == 0);
    }
    /**
     * @brief Checks if a number is divisible by another.
     * @param val The number to check.
     * @param divisor The divisor to check against.
     * @return 1 if the number is divisible by the other, 0 otherwise.
     */
    // function no. - 27
    int Is_divisible(int val, int divisor)
    {
        return (val % divisor == 0);
    }

    // function no. - 28
    void swapValues(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    int Is_Composite(int val)
    {
        if (val < 4)
        {
            return 0; // Numbers less than 2 are not composite
        }
        else
        {
            for (int i = 2; i <= val / 2; i++)
            {
                if (val % i == 0)
                {
                    return 1; // Found a divisor, so it's composite
                }
            }
            return 0; // No divisors found, so it's not composite
        }
    }

    int Is_Armstrong(int val)
    {
        int tmp, dgt, count = 0, sum = 0, mult = 1;
        tmp = val;
        while (val != 0)
        {
            val /= 10;
            count++;
        }
        val = tmp;

        while (val != 0)
        {
            dgt = val % 10;
            for (int i = 1; i <= count; i++)
            {
                mult = mult * dgt;
            }
            sum = sum + mult;
            mult = 1;
            val /= 10;
        }
        if (tmp == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int Is_Palindrome(int val)
    {
        int tmp, dgt, rev = 0;
        tmp = val;
        while (val != 0)
        {
            dgt = val % 10;
            rev = 10 * rev + dgt;
            val /= 10;
        }
        if (tmp == rev)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int Is_Strong(int val) {
        int dgt,tmp,sum=0;

        tmp = val;
        int i = 1;
        while (val != 0)
        {
            dgt = val % 10;
            sum = sum + factorial(dgt);
            val /= 10;
        }
        if(sum == tmp) 
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

    int Is_Harshad(int val) 
    {
        int tmp,sum=0,dgt;
        
        while (val != 0)
        {
            dgt = val % 10;
            sum = sum + dgt;
        }

        if(tmp % sum == 0) 
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    // This is a header file for the CPlusKit library, providing a collection of mathematical utility functions. It includes functions for absolute value, minimum and maximum comparisons, clamping values, checking even/odd status, calculating factorials, checking for prime numbers, digit manipulation (splitting, summing, multiplying, reversing), and more. The functions are encapsulated within the `cpk::math` namespace to avoid naming conflicts.
}

#endif