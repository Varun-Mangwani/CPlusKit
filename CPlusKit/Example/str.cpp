#include <iostream>
#include "../cpluskit.hpp"

using namespace std;

int main()
{
    char empty[10] = "";
    char alpha[20] = "Hello";
    char digit[20] = "12345";
    char alnum[30] = "Hello123";
    char spaceText[30] = "Hi There";
    char lower[30] = "hello";
    char upper[30] = "HELLO";
    char titleText[50] = "hello world";
    char trimText[50] = "  hello world  ";

    cout << "strl(empty) = " << cpk::string::strl(empty) << endl;
    cout << "Is_Empty(empty) = " << cpk::string::Is_Empty(empty) << endl;
    cout << "Is_Empty(alpha) = " << cpk::string::Is_Empty(alpha) << endl;
    cout << "Is_Alpha(alpha) = " << cpk::string::Is_Alpha(alpha) << endl;
    cout << "Is_Digit(digit) = " << cpk::string::Is_Digit(digit) << endl;
    cout << "Is_Alnum(alnum) = " << cpk::string::Is_Alnum(alnum) << endl;
    cout << "Is_Space(spaceText) = " << cpk::string::Is_Space(spaceText) << endl;
    cout << "Is_Lower(lower) = " << cpk::string::Is_Lower(lower) << endl;
    cout << "Is_Upper(upper) = " << cpk::string::Is_Upper(upper) << endl;

    char upperText[30] = "hello world";
    cout << "To_Upper(hello world) = " << cpk::string::To_Upper(upperText) << endl;

    char lowerText[30] = "HELLO WORLD";
    cout << "To_Lower(HELLO WORLD) = " << cpk::string::To_Lower(lowerText) << endl;

    cout << "To_Title(hello world) = " << cpk::string::To_Title(titleText) << endl;

    char leftTrim[50] = "  hello world  ";
    cout << "Ltrim = " << cpk::string::Ltrim(leftTrim) << endl;

    char rightTrim[50] = "  hello world  ";
    cout << "Rtrim = " << cpk::string::Rtrim(rightTrim) << endl;

    char bothTrim[50] = "  hello world  ";
    cout << "Trim = " << cpk::string::Trim(bothTrim) << endl;

    return 0;
}
