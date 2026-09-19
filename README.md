# CPlusKit

CPlusKit is a small C++ utility library made for common string and math operations.
It is designed to be simple, beginner-friendly, and easy to use in small projects.

## What is included?

- String helpers for checking, transforming, and trimming text
- Math helpers for prime checks, digit operations, and comparisons
- Easy-to-read function names inspired by practical coding use cases

## Main namespaces

- `cpk::string` for string and character-array utilities
- `cpk::math` for numeric and mathematical helpers

## Example

```cpp
#include <iostream>
#include "CPlusKit/cpluskit.hpp"

int main() {
    char name[50] = "hello world";

    std::cout << cpk::string::To_Upper(name) << std::endl;
    std::cout << cpk::math::IsPrime(13) << std::endl;

    return 0;
}
```

## String utilities

The string module includes functions such as:

- `strl()` to get the length of a C-style string
- `Is_Empty()` to check whether a string is empty
- `Is_Alpha()` to check if the string contains only letters
- `Is_Digit()` to check if the string contains only digits
- `Is_Alnum()` to check if the string contains letters and numbers only
- `Is_Space()` to detect spaces in the string
- `To_Upper()` and `To_Lower()` to change letter case
- `To_Title()` to convert text to title case
- `Ltrim()`, `Rtrim()`, and `Trim()` to remove spaces around text

## Math utilities

The math module includes functions such as:

- `abs()` for absolute value
- `min()` and `max()` to compare numbers
- `clamp()` to keep a value within a range
- `IsEven()` and `IsOdd()` for parity checks
- `factorial()` to calculate factorials
- `IsPrime()` to check if a number is prime
- `digits()` to split a number into digits
- `sumdigits()` to add all digits together
- `productdigits()` to multiply all digits together
- `ReverseDigits()` to reverse a number's digits

## Notes

This library works with C-style strings like `char text[]`, which is useful for simple and educational projects. For larger applications, standard C++ containers like `std::string` are often preferred.

## Build example

```bash
g++ -std=c++17 your_program.cpp -ICPlusKit -o your_program
```
