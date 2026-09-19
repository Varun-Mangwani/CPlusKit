#include <iostream>
using namespace std;

#ifndef CPlusKit_STRING_HPP
#define CPlusKit_STRING_HPP
namespace cpk::string
{
    // String / Character Array Length Function
    int strl(char str[])
    {
        int len = 0;
        while (str[len] != '\0')
        {
            len++;
        }
        return len;
    }

    // This Function Tells Wether String Is Empty Or Not
    // Its Gonna Pass ("0" For Empty String) or ("Position" For String Position Till Characters)
    int Is_Empty(char str[])
    {
        if (str[0] == '\0')
        {
            return 0;
        }
        else
        {
            int len = 0;
            while (str[len] != 0)
            {
                len++;
            }
            return len;
        }
    }

    // Is_Aplha Function: Is There Alphabets Only In String?
    // If There Is Anything Other Than Alphabets, It Will Return 0, Otherwise 1
    int Is_Alpha(char str[])
    {
        int len = strl(str);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                count++;
            }
        }
        if(count == len)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    //Checks if the string contains only digits
    // 1 For All Digits, 0 For Anything Else
    int Is_Digit(char str[])
    {
        int len = strl(str);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                count++;
            }
        }
        if(count == len)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    //Alphabets and Numerics Give 1 Anything Else Is 0
    int Is_Alnum(char str[])
    {
        int len = strl(str);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
            {
                count++;
            }
        }
        if(count == len)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
#endif