#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#ifndef CPlusKit_MATHS_HPP
#define CPlusKit_MATHS_HPP

namespace cpk::math
{
    // function no. - 1
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

    // function no. - 2
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

    // function no. - 3
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

    // function no. - 4
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

    // function no. - 5
    /**
     * @brief Checks whether a number is even.
     * @param val The value to inspect.
     * @return 1 if the number is even; otherwise 0.
     */
    int IsEven(int val)
    {
        return (val % 2 == 0);
    }

    // function no. - 6
    /**
     * @brief Checks whether a number is odd.
     * @param val The value to inspect.
     * @return 1 if the number is odd; otherwise 0.
     */
    int IsOdd(int val)
    {
        return (val % 2 != 0);
    }

    // function no. - 7
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

    // function no. - 8
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

    // function no. - 9
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

    // function no. - 10
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

    // function no. - 11
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

    // function no. - 12
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
    // function no. - 13
    /*
     * @brief Computes the least common multiple (LCM) of two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return The LCM of a and b.
     */
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
    // function no. - 14
    /*
     * @brief Computes the highest common factor (HCF) of two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return The HCF of a and b.
     */
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

    // function no. - 15
    /*
     * @brief Checks if a number is a perfect number.
     * @param a The number to check.
     * @return 1 if the number is perfect, 0 otherwise.
     */
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
    // function no. - 16
    /**
     * @brief Returns the sign of a number.
     * @param val The number to check.
     * @return 1 if the number is positive, -1 if it's negative, and 0 if it's zero.
     */
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
    // function no. - 17
    /**
     * @brief Checks if a number is positive.
     * @param val The number to check.
     * @return 1 if the number is positive, 0 otherwise.
     */
    int Is_Positive(int val)
    {
        return (val > 0);
    }

    // function no. - 18
    /**
     * @brief Checks if a number is negative.
     * @param val The number to check.
     * @return 1 if the number is negative, 0 otherwise.
     */
    int Is_Negative(int val)
    {
        return (val < 0);
    }

    // function no. - 19
    /**
     * @brief Checks if a number is zero.
     * @param val The number to check.
     * @return 1 if the number is zero, 0 otherwise.
     */
    int Is_Zero(int val)
    {
        return (val == 0);
    }

    // function no. - 20
    /**
     * @brief Checks if two numbers are equal.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the numbers are equal, 0 otherwise.
     */
    int Is_equal(int a, int b)
    {
        return (a == b);
    }

    // function no. - 21
    /**
     * @brief Checks if a number is greater than another.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the first number is greater than the second, 0 otherwise.
     */
    int Is_Greater(int a, int b)
    {
        return (a > b);
    }
    // function no. - 22
    /**
     * @brief Checks if a number is less than another.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the first number is less than the second, 0 otherwise.
     */
    int Is_Less(int a, int b)
    {
        return (a < b);
    }

    // function no. - 23
    /**
     * @brief Checks if a number is between two other numbers (inclusive).
     * @param val The number to check.
     * @param lower The lower bound.
     * @param upper The upper bound.
     * @return 1 if the number is between the bounds, 0 otherwise.
     */
    int Is_Between(int val, int lower, int upper)
    {
        return (val >= lower && val <= upper);
    }
    // function no. - 24
    /**
     * @brief Checks if a number is positive and even.
     * @param val The number to check.
     * @return 1 if the number is positive and even, 0 otherwise.
     */
    int Is_Positive_Even(int val)
    {
        return (Is_Positive(val) && IsEven(val));
    }

    // function no. - 25
    /**
     * @brief Checks if a number is a multiple of another.
     * @param val The number to check.
     * @param multiple The multiple to check against.
     * @return 1 if the number is a multiple of the other, 0 otherwise.
     */
    int Is_Multiple(int val, int multiple)
    {
        return (val % multiple == 0);
    }

    // function no. - 26
    /**
     * @brief Checks if a number is a factor of another.
     * @param val The number to check.
     * @param factor The factor to check against.
     * @return 1 if the number is a factor of the other, 0 otherwise.
     */
    int Is_Factor(int val, int factor)
    {
        return (factor % val == 0);
    }
    // function no. - 27
    /**
     * @brief Checks if a number is divisible by another.
     * @param val The number to check.
     * @param divisor The divisor to check against.
     * @return 1 if the number is divisible by the other, 0 otherwise.
     */
    int Is_divisible(int val, int divisor)
    {
        return (val % divisor == 0);
    }

    // function no. - 28
    /**
     * @brief Swaps two integer values.
     * @param a The first value.
     * @param b The second value.
     */
    void swapValues(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // function no. - 29
    /**
     * @brief Checks whether a number is composite.
     * @param val The number to check.
     * @return 1 if the number is composite, otherwise 0.
     */
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

    // function no. - 30
    /**
     * @brief Checks whether a number is an Armstrong number.
     * @param val The number to check.
     * @return 1 if the number is an Armstrong number, otherwise 0.
     */
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

    // function no. - 31
    /**
     * @brief Checks whether a number is a palindrome.
     * @param val The number to check.
     * @return 1 if the number is a palindrome, otherwise 0.
     */
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

    // function no. - 32
    /**
     * @brief Checks whether a number is a strong number.
     * @param val The number to check.
     * @return 1 if the number is strong, otherwise 0.
     */
    int Is_Strong(int val)
    {
        int dgt, tmp, sum = 0;

        tmp = val;
        int i = 1;
        while (val != 0)
        {
            dgt = val % 10;
            sum = sum + factorial(dgt);
            val /= 10;
        }
        if (sum == tmp)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // function no. - 33
    /**
     * @brief Checks whether a number is a Harshad number.
     * @param val The number to check.
     * @return 1 if the number is a Harshad number, otherwise 0.
     */
    int Is_Harshad(int val)
    {
        int tmp = val, sum = 0, dgt;

        while (val != 0)
        {
            dgt = val % 10;
            sum = sum + dgt;
            val /= 10;
        }

        if (tmp % sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // function no. - 34
    /**
     * @brief Returns the square of an integer.
     * @param a The value to square.
     * @return The square of a.
     */
    int square(int a)
    {
        return a * a;
    }
    // function no. - 35
    /**
     * @brief Checks whether a number is automorphic.
     * @param val The number to check.
     * @return 1 if the number is automorphic, otherwise 0.
     */
    int Is_Automorphic(int val)
    {
        int sqr = square(val);
        int dgt = sqr % 10;
        if (val == dgt)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // function no. - 36
    /**
     * @brief Checks whether a number is a neon number.
     * @param val The number to check.
     * @return 1 if the number is neon, otherwise 0.
     */
    int Is_Neon(int val)
    {
        int dgt, sum = 0;
        int sqr = square(val);

        while (sqr != 0)
        {
            dgt = sqr % 10;
            sum = sum + dgt;
            sqr /= 10;
        }

        if (val == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // function no. - 37
    /**
     * @brief Checks whether a number is a spy number.
     * @param val The number to check.
     * @return 1 if the number is a spy number, otherwise 0.
     */
    int Is_SpyNumber(int val)
    {
        int sum = 0, mult = 1, dgt;
        while (val != 0)
        {
            dgt = val % 10;
            sum = sum + dgt;
            mult = mult * dgt;
            val /= 10;
        }
        if (sum == mult)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // function no. - 38
    /**
     * @brief Checks whether a number is a happy number.
     * @param val The number to check.
     * @return 1 if the number is happy, otherwise 0.
     */
    int IsHappyNumber(int val)
    {
        std::vector<int> seen;

        while (val != 1 && std::find(seen.begin(), seen.end(), val) == seen.end())
        {
            seen.push_back(val);
            int sum = 0;
            while (val != 0)
            {
                int digit = val % 10;
                sum += digit * digit;
                val /= 10;
            }
            val = sum;
        }

        return (val == 1);
    }
    // function no. - 39
    /**
     * @brief Gets the first digit of a number.
     * @param val The number to get the first digit of.
     * @return The first digit of the number.
     */
    int firstDigit(int val)
    {
        while (val >= 10)
        {
            val /= 10;
        }
        return val;
    }

    // function no. - 40
    /**
     * @brief Gets the last digit of a number.
     * @param val The number to get the last digit of.
     * @return The last digit of the number.
     */
    int lastDigit(int val)
    {
        return val % 10;
    }

    // function no. - 41
    /*
     * @brief Gets the number of digits in a number.
     * @param val The number to count digits of.
     * @return The number of digits in the number.
     */
    int countDigits(int val)
    {
        int count = 0;
        if (val == 0)
        {
            return 1; // Zero has one digit
        }
        while (val != 0)
        {
            val /= 10;
            count++;
        }
        return count;
    }

    // function no. - 42
    /**
     * @brief Gets the middle digit of a number.
     * @param val The number to inspect.
     * @return The middle digit of the number.
     */
    int middleDigit(int val)
    {
        int count = countDigits(val);
        int middleIndex = count / 2;
        for (int i = 0; i < middleIndex; i++)
        {
            val /= 10;
        }
        return val % 10;
    }

    // function no. - 43
    /**
     * @brief Gets the largest digit in a number.
     * @param val The number to inspect.
     * @return The largest digit in the number.
     */
    int largestDigit(int val)
    {
        int largest = 0;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit > largest)
            {
                largest = digit;
            }
            val /= 10;
        }
        return largest;
    }

    // function no. - 44
    /**
     * @brief Gets the smallest digit in a number.
     * @param val The number to inspect.
     * @return The smallest digit in the number.
     */
    int smallestDigit(int val)
    {
        int smallest = 9;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit < smallest)
            {
                smallest = digit;
            }
            val /= 10;
        }
        return smallest;
    }

    // function no. - 45
    /**
     * @brief Counts the even digits in a number.
     * @param val The number to inspect.
     * @return The number of even digits.
     */
    int evenDigitCount(int val)
    {
        int count = 0;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit % 2 == 0)
            {
                count++;
            }
            val /= 10;
        }
        return count;
    }

    // function no. - 46
    /**
     * @brief Counts the odd digits in a number.
     * @param val The number to inspect.
     * @return The number of odd digits.
     */
    int oddDigitCount(int val)
    {
        int count = 0;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit % 2 != 0)
            {
                count++;
            }
            val /= 10;
        }
        return count;
    }

    // function no. - 47
    /**
     * @brief Counts the zero digits in a number.
     * @param val The number to inspect.
     * @return The number of zero digits.
     */
    int zeroDigitCount(int val)
    {
        int count = 0;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit == 0)
            {
                count++;
            }
            val /= 10;
        }
        return count;
    }

    // function no. - 48
    /**
     * @brief Counts how often a digit appears in a number.
     * @param val The number to inspect.
     * @param targetDigit The digit to count.
     * @return The number of occurrences of targetDigit.
     */
    int digitFrequency(int val, int targetDigit)
    {
        int count = 0;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit == targetDigit)
            {
                count++;
            }
            val /= 10;
        }
        return count;
    }

    // function no. - 49
    /**
     * @brief Removes every occurrence of a digit from a number.
     * @param val The number to modify.
     * @param targetDigit The digit to remove.
     * @return The number after removing targetDigit.
     */
    int removeDigit(int val, int targetDigit)
    {
        int result = 0;
        int multiplier = 1;
        while (val != 0)
        {
            int digit = val % 10;
            if (digit != targetDigit)
            {
                result += digit * multiplier;
                multiplier *= 10;
            }
            val /= 10;
        }
        return result;
    }

    // function no. - 50
    /**
     * @brief Raises a number to an integer power.
     * @param base The base value.
     * @param exponent The exponent.
     * @return base raised to exponent.
     */
    int power(int base, int exponent)
    {
        int result = 1;
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }
        return result;
    }

    // function no. - 51
    /**
     * @brief Returns the cube of an integer.
     * @param val The value to cube.
     * @return The cube of val.
     */
    int cube(int val)
    {
        return val * val * val;
    }

    // function no. - 52
    /**
     * @brief Returns the integer square root when the value is a perfect square.
     * @param val The value to inspect.
     * @return The square root, or -1 when val is not a perfect square.
     */
    int squareRoot(int val)
    {
        if (val < 0)
        {
            return -1; // Return -1 for negative numbers
        }
        int root = 0;
        while (root * root < val)
        {
            root++;
        }
        return (root * root == val) ? root : -1; // Return -1 if not a perfect square
    }

    // function no. - 53
    /**
     * @brief Returns the integer cube root when the value is a perfect cube.
     * @param val The value to inspect.
     * @return The cube root, or -1 when val is not a perfect cube.
     */
    int cubeRoot(int val)
    {
        int root = 0;
        while (root * root * root < val)
        {
            root++;
        }
        return (root * root * root == val) ? root : -1; // Return -1 if not a perfect cube
    }

    // function no. - 54
    /**
     * @brief Returns the remainder after integer division.
     * @param dividend The number to divide.
     * @param divisor The number to divide by.
     * @return The remainder of dividend divided by divisor.
     */
    int remainder(int dividend, int divisor)
    {
        return dividend % divisor;
    }

    // function no. - 55
    /**
     * @brief Returns the integer quotient of two numbers.
     * @param dividend The number to divide.
     * @param divisor The number to divide by.
     * @return The integer quotient of dividend divided by divisor.
     */
    int quotient(int dividend, int divisor)
    {
        return dividend / divisor;
    }

    // function no. - 56
    /**
     * @brief Calculates the percentage represented by a part of a whole.
     * @param part The partial value.
     * @param whole The total value.
     * @return The percentage of whole represented by part.
     */
    int percentage(int part, int whole)
    {
        if (whole == 0)
        {
            return 0; // Avoid division by zero
        }
        return (part * 100) / whole;
    }

    // function no. - 57
    /**
     * @brief Calculates the integer average of two values.
     * @param a The first value.
     * @param b The second value.
     * @return The integer average of a and b.
     */
    int average(int a, int b)
    {
        return (a + b) / 2;
    }

    // function no. - 58
    /**
     * @brief Adds all integers in an inclusive range.
     * @param start The first value in the range.
     * @param end The last value in the range.
     * @return The sum of the values from start through end.
     */
    int sumRange(int start, int end)
    {
        int sum = 0;
        for (int i = start; i <= end; i++)
        {
            sum += i;
        }
        return sum;
    }

    // function no. - 59
    /**
     * @brief Multiplies all integers in an inclusive range.
     * @param start The first value in the range.
     * @param end The last value in the range.
     * @return The product of the values from start through end.
     */
    int productRange(int start, int end)
    {
        int product = 1;
        for (int i = start; i <= end; i++)
        {
            product *= i;
        }
        return product;
    }

    // function no. - 60
    /**
     * @brief Calculates the greatest common divisor of two values.
     * @param a The first value.
     * @param b The second value.
     * @return The greatest common divisor of a and b.
     */
    int gcdMultiple(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // function no. - 61
    /**
     * @brief Calculates the least common multiple of two values.
     * @param a The first value.
     * @param b The second value.
     * @return The least common multiple of a and b.
     */
    int lcmMultiple(int a, int b)
    {
        return (a * b) / gcdMultiple(a, b);
    }

    // function no. - 62
    /**
     * @brief Counts the positive factors of a number.
     * @param val The number to inspect.
     * @return The number of positive factors of val.
     */
    int countFactors(int val)
    {
        int count = 0;
        for (int i = 1; i <= val; i++)
        {
            if (val % i == 0)
            {
                count++;
            }
        }
        return count;
    }
    // function no. - 63
    /**
     * @brief Adds the positive factors of a number.
     * @param val The number to inspect.
     * @return The sum of the positive factors of val.
     */
    int sumFactors(int val)
    {
        int sum = 0;
        for (int i = 1; i <= val; i++)
        {
            if (val % i == 0)
            {
                sum += i;
            }
        }
        return sum;
    }

    // function no. - 64
    /**
     * @brief Finds the largest proper factor of a number.
     * @param val The number to inspect.
     * @return The largest factor smaller than val.
     */
    int largestFactor(int val)
    {
        for (int i = val / 2; i >= 1; i--)
        {
            if (val % i == 0)
            {
                return i;
            }
        }
        return 1; // If no factors found, return 1
    }

    // function no. - 65
    /**
     * @brief Finds the smallest factor of a number greater than one.
     * @param val The number to inspect.
     * @return The smallest factor of val.
     */
    int smallestFactor(int val)
    {
        for (int i = 2; i <= val; i++)
        {
            if (val % i == 0)
            {
                return i;
            }
        }
        return val; // If no factors found, return the number itself
    }

    // function no. - 66
    /**
     * @brief Finds the next prime number after a given value.
     * @param val The number to start searching from.
     * @return The next prime number after val.
     */
    int nextPrime(int val)
    {
        int next = val + 1;
        while (true)
        {
            if (IsPrime(next))
            {
                return next;
            }
            next++;
        }
    }

    // function no. - 67
    /**
     * @brief Finds the previous prime number before a given value.
     * @param val The number to start searching from.
     * @return The previous prime number before val, or -1 if none exists.
     */
    int previousPrime(int val)
    {
        int prev = val - 1;
        while (prev > 1)
        {
            if (IsPrime(prev))
            {
                return prev;
            }
            prev--;
        }
        return -1; // Return -1 if no previous prime exists
    }

    // function no. - 68
    /**
     * @brief Finds the nth prime number.
     * @param n The one-based prime index.
     * @return The nth prime number, or -1 for invalid input.
     */
    int NthPrime(int n)
    {
        if (n < 1)
        {
            return -1; // Return -1 for invalid input
        }
        int count = 0;
        int num = 1;
        while (count < n)
        {
            num++;
            if (IsPrime(num))
            {
                count++;
            }
        }
        return num;
    }

    // function no. - 69
    /**
     * @brief Counts the prime numbers up to a value.
     * @param val The upper bound to inspect.
     * @return The number of primes from 2 through val.
     */
    int primeCount(int val)
    {
        int count = 0;
        for (int i = 2; i <= val; i++)
        {
            if (IsPrime(i))
            {
                count++;
            }
        }
        return count;
    }

    // function no. - 70
    /**
     * @brief Counts the prime factors of a number, including repetitions.
     * @param val The number to factor.
     * @return The number of prime factors.
     */
    int primeFactorsCount(int val)
    {
        std::vector<int> factors;
        for (int i = 2; i <= val; i++)
        {
            while (val % i == 0)
            {
                factors.push_back(i);
                val /= i;
            }
        }
        return factors.size(); // Return the count of prime factors
    }

    // function no. - 71
    /**
     * @brief Returns the prime factors of a number in a dynamic array.
     * @param val The number to factor.
     * @return A dynamically allocated array of prime factors.
     */
    int *primeFactors(int val)
    {
        std::vector<int> factors;
        for (int i = 2; i <= val; i++)
        {
            while (val % i == 0)
            {
                factors.push_back(i);
                val /= i;
            }
        }
        int *arr = new int[factors.size()];
        for (size_t i = 0; i < factors.size(); ++i)
        {
            arr[i] = factors[i];
        }
        return arr; // Return dynamically allocated array of prime factors
    }

    // function no. - 72
    /**
     * @brief Adds the prime factors of a number, including repetitions.
     * @param val The number to factor.
     * @return The sum of the prime factors.
     */
    int sumPrimeFactors(int val)
    {
        int sum = 0;
        for (int i = 2; i <= val; i++)
        {
            while (val % i == 0)
            {
                sum += i;
                val /= i;
            }
        }
        return sum; // Return the sum of prime factors
    }

    // function no. - 73
    /**
     * @brief Finds the largest prime factor of a number.
     * @param val The number to factor.
     * @return The largest prime factor, or -1 if none exists.
     */
    int largestPrimeFactor(int val)
    {
        int largest = -1;
        for (int i = 2; i <= val; i++)
        {
            while (val % i == 0)
            {
                largest = i;
                val /= i;
            }
        }
        return largest; // Return the largest prime factor
    }

    // function no. - 74
    /**
     * @brief Finds the smallest prime factor of a number.
     * @param val The number to factor.
     * @return The smallest prime factor.
     */
    int smallestPrimeFactor(int val)
    {
        for (int i = 2; i <= val; i++)
        {
            if (val % i == 0)
            {
                return i; // Return the smallest prime factor
            }
        }
        return val; // If no factors found, return the number itself
    }

    // function no. - 75
    /**
     * @brief Checks whether a prime belongs to a twin-prime pair.
     * @param val The number to check.
     * @return 1 if val is a twin prime, otherwise 0.
     */
    int isTwinPrime(int val)
    {
        if (!IsPrime(val))
        {
            return 0; // Not a prime number
        }
        if (IsPrime(val - 2) || IsPrime(val + 2))
        {
            return 1; // Twin prime found
        }
        return 0; // Not a twin prime
    }

    // function no. - 76
    /**
     * @brief Checks whether two numbers are coprime.
     * @param a The first number.
     * @param b The second number.
     * @return 1 if the numbers are coprime, otherwise 0.
     */
    int isCoPrime(int a, int b)
    {
        return (gcdMultiple(a, b) == 1); // Return 1 if coprime, 0 otherwise
    }

    // function no. - 77
    /**
     * @brief Finds the next multiple after a value.
     * @param val The starting value.
     * @param multiple The multiple to search for.
     * @return The next multiple, or -1 if multiple is zero.
     */
    int nextMultiple(int val, int multiple)
    {
        if (multiple == 0)
        {
            return -1; // Avoid division by zero
        }
        return ((val / multiple) + 1) * multiple; // Return the next multiple
    }

    // function no. - 78
    /**
     * @brief Finds the previous multiple before a value.
     * @param val The starting value.
     * @param multiple The multiple to search for.
     * @return The previous multiple, or -1 if multiple is zero.
     */
    int previousMultiple(int val, int multiple)
    {
        if (multiple == 0)
        {
            return -1; // Avoid division by zero
        }
        return ((val / multiple) - 1) * multiple; // Return the previous multiple
    }

    // function no. - 79
    /**
     * @brief Checks whether a value is a factor of another value.
     * @param val The number to inspect.
     * @param factor The possible factor.
     * @return factor if it divides val, otherwise -1.
     */
    int findFactor(int val, int factor)
    {
        if (factor == 0)
        {
            return -1; // Avoid division by zero
        }
        if (val % factor == 0)
        {
            return factor; // Return the factor if it divides val
        }
        return -1; // Return -1 if not a factor
    }

    // function no. - 80
    /**
     * @brief Checks whether a number is a factorial value.
     * @param val The number to check.
     * @return 1 if val is a factorial value, otherwise 0.
     */
    int isFactorial(int val)
    {
        if (val < 0)
        {
            return 0; // Negative numbers cannot be factorials
        }
        int fact = 1;
        for (int i = 1; fact < val; i++)
        {
            fact *= i;
            if (fact == val)
            {
                return 1; // Found a factorial match
            }
        }
        return 0; // Not a factorial
    }

    // function no. - 81
    /**
     * @brief Returns the nth Fibonacci number, starting with Fibonacci(0) = 0.
     * @param n The zero-based Fibonacci index.
     * @return The nth Fibonacci number, or -1 for invalid input.
     */
    int Fibonacci(int n)
    {
        if (n < 0)
        {
            return -1;
        }
        int previous = 0;
        int current = 1;
        for (int i = 0; i < n; i++)
        {
            int next = previous + current;
            previous = current;
            current = next;
        }
        return previous;
    }

    // function no. - 82
    /**
     * @brief Calculates the sum of the first n Fibonacci numbers.
     * @param n The number of terms to sum, starting with 0.
     * @return The Fibonacci sum, or 0 for a non-positive term count.
     */
    int FibonacciSum(int n)
    {
        if (n <= 0)
        {
            return 0;
        }
        int sum = 0;
        int previous = 0;
        int current = 1;
        for (int i = 0; i < n; i++)
        {
            sum += previous;
            int next = previous + current;
            previous = current;
            current = next;
        }
        return sum;
    }

    // function no. - 83
    /**
     * @brief Returns the nth triangular number.
     * @param n The one-based term index.
     * @return The nth triangular number, or 0 for a non-positive index.
     */
    int TriangularNumber(int n)
    {
        return (n <= 0) ? 0 : n * (n + 1) / 2;
    }

    // function no. - 84
    /**
     * @brief Checks whether a number is triangular.
     * @param val The number to check.
     * @return 1 if val is triangular, otherwise 0.
     */
    int IsTriangular(int val)
    {
        if (val < 0)
        {
            return 0;
        }
        for (int n = 1; TriangularNumber(n) <= val; n++)
        {
            if (TriangularNumber(n) == val)
            {
                return 1;
            }
        }
        return val == 0;
    }

    // function no. - 85
    /**
     * @brief Returns a term from an arithmetic sequence.
     * @param first The first term in the sequence.
     * @param difference The common difference.
     * @param n The one-based term index.
     * @return The nth arithmetic term, or 0 for a non-positive index.
     */
    int ArithmeticTerm(int first, int difference, int n)
    {
        return (n <= 0) ? 0 : first + (n - 1) * difference;
    }

    // function no. - 86
    /**
     * @brief Returns the sum of the first n arithmetic terms.
     * @param first The first term in the sequence.
     * @param difference The common difference.
     * @param n The number of terms to sum.
     * @return The arithmetic series sum, or 0 for a non-positive term count.
     */
    int ArithmeticSum(int first, int difference, int n)
    {
        return (n <= 0) ? 0 : n * (2 * first + (n - 1) * difference) / 2;
    }

    // function no. - 87
    /**
     * @brief Returns a term from a geometric sequence.
     * @param first The first term in the sequence.
     * @param ratio The common ratio.
     * @param n The one-based term index.
     * @return The nth geometric term, or 0 for a non-positive index.
     */
    int GeometricTerm(int first, int ratio, int n)
    {
        return (n <= 0) ? 0 : first * power(ratio, n - 1);
    }

    // function no. - 88
    /**
     * @brief Returns the sum of the first n geometric terms.
     * @param first The first term in the sequence.
     * @param ratio The common ratio.
     * @param n The number of terms to sum.
     * @return The geometric series sum, or 0 for a non-positive term count.
     */
    int GeometricSum(int first, int ratio, int n)
    {
        if (n <= 0)
        {
            return 0;
        }
        if (ratio == 1)
        {
            return first * n;
        }
        return first * (power(ratio, n) - 1) / (ratio - 1);
    }

    // function no. - 89
    /**
     * @brief Returns a power of two.
     * @param exponent The exponent to apply to two.
     * @return 2 raised to exponent, or 0 for a negative exponent.
     */
    int PowerOfTwo(int exponent)
    {
        return (exponent < 0) ? 0 : power(2, exponent);
    }

    // function no. - 90
    /**
     * @brief Checks whether a number is a power of two.
     * @param val The number to check.
     * @return 1 if val is a power of two, otherwise 0.
     */
    int IsPowerOfTwo(int val)
    {
        return val > 0 && (val & (val - 1)) == 0;
    }

    // function no. - 91
    /**
     * @brief Checks whether a number is a power of three.
     * @param val The number to check.
     * @return 1 if val is a power of three, otherwise 0.
     */
    int IsPowerOfThree(int val)
    {
        if (val < 1)
        {
            return 0;
        }
        while (val % 3 == 0)
        {
            val /= 3;
        }
        return val == 1;
    }

    // function no. - 92
    /**
     * @brief Returns the smallest power of two greater than or equal to a value.
     * @param val The value to round up.
     * @return The next power of two, or 1 for non-positive input.
     */
    int NextPowerOfTwo(int val)
    {
        int result = 1;
        while (result < val)
        {
            result *= 2;
        }
        return result;
    }

    // function no. - 93
    /**
     * @brief Calculates the sum of the squares from 1 through n.
     * @param n The inclusive upper bound.
     * @return The sum of squares, or 0 for a non-positive bound.
     */
    int SquareSum(int n)
    {
        return (n <= 0) ? 0 : n * (n + 1) * (2 * n + 1) / 6;
    }

    // function no. - 94
    /**
     * @brief Calculates the sum of the cubes from 1 through n.
     * @param n The inclusive upper bound.
     * @return The sum of cubes, or 0 for a non-positive bound.
     */
    int CubeSum(int n)
    {
        if (n <= 0)
        {
            return 0;
        }
        int sum = n * (n + 1) / 2;
        return sum * sum;
    }

    // function no. - 95
    /**
     * @brief Calculates the sum of the first n natural numbers.
     * @param n The number of natural numbers to sum.
     * @return The natural number sum, or 0 for a non-positive count.
     */
    int NaturalSum(int n)
    {
        return (n <= 0) ? 0 : n * (n + 1) / 2;
    }

    // This is a header file for the CPlusKit library, providing a collection of mathematical utility functions. It includes functions for absolute value, minimum and maximum comparisons, clamping values, checking even/odd status, calculating factorials, checking for prime numbers, digit manipulation (splitting, summing, multiplying, reversing), and more. The functions are encapsulated within the `cpk::math` namespace to avoid naming conflicts.
}

#endif