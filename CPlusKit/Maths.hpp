#include<iostream>
#include<vector>
#include<algorithm>
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
        int IsEven(int val)
        {
            return (val % 2 == 0);
        }

        /**
         * @brief Checks whether a number is odd.
         * @param val The value to inspect.
         * @return 1 if the number is odd; otherwise 0.
         */
        int IsOdd(int val)
        {
            return (val % 2 != 0);
        }

        /**
         * @brief Computes the factorial of a non-negative integer.
         * @param val The number whose factorial should be calculated.
         * @return The factorial of val.
         */
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

#endif