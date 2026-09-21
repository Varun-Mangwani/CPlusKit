#include <iostream>
using namespace std;

#ifndef CPlusKit_STRING_HPP
#define CPlusKit_STRING_HPP

namespace cpk::string
{
    /**
     * @brief Returns the number of characters in a C-style string.
     * @param str The null-terminated character array to measure.
     * @return The length of the string before the null terminator.
     */
    int strl(char str[])
    {
        int len = 0;
        while (str[len] != '\0')
        {
            len++;
        }
        return len;
    }

    /**
     * @brief Checks whether the given string is empty.
     * @param str The string to inspect.
     * @return 0 if empty, otherwise the length of the string.
     */
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

    /**
     * @brief Checks whether a string contains only alphabetic characters.
     * @param str The string to validate.
     * @return 1 if all characters are letters; otherwise 0.
     */
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
        if (count == len)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    /**
     * @brief Checks whether a string contains only numeric digits.
     * @param str The string to validate.
     * @return 1 if all characters are digits; otherwise 0.
     */
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
        if (count == len)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    /**
     * @brief Checks whether a string contains only letters and numbers.
     * @param str The string to validate.
     * @return 1 if the string is alphanumeric; otherwise 0.
     */
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
        if (count == len)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    /**
     * @brief Checks whether the string contains a space character.
     * @param str The string to inspect.
     * @return 1 if a space is found; otherwise 0.
     */
    int Is_Space(char str[])
    {
        int len = strl(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                return 1;
            }
        }
        return 0;
    }

    /**
     * @brief Checks whether the string contains a lowercase letter.
     * @param str The string to inspect.
     * @return 1 if a lowercase character exists; otherwise 0.
     */
    int Is_Lower(char str[])
    {
        int len = strl(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                return 1;
            }
        }
        return 0;
    }

    /**
     * @brief Checks whether the string contains an uppercase letter.
     * @param str The string to inspect.
     * @return 1 if an uppercase character exists; otherwise 0.
     */
    int Is_Upper(char str[])
    {
        int len = strl(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                return 1;
            }
        }
        return 0;
    }

    /**
     * @brief Converts all lowercase letters in the string to uppercase.
     * @param str The string to modify in place.
     * @return A pointer to the modified string.
     */
    char *To_Upper(char str[])
    {
        int len = strl(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        return str;
    }

    /**
     * @brief Converts all uppercase letters in the string to lowercase.
     * @param str The string to modify in place.
     * @return A pointer to the modified string.
     */
    char *To_Lower(char str[])
    {
        int len = strl(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        return str;
    }

    /**
     * @brief Converts the first letter of the string and each word after a space to uppercase.
     * @param str The string to transform into title case.
     * @return A pointer to the converted string.
     */
    char *To_Title(char str[])
    {
        int len = strl(str);
        for (int i = 0; i < len; i++)
        {
            if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            else if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        return str;
    }

    /**
     * @brief Removes leading spaces from the beginning of a string.
     * @param str The string to trim from the left.
     * @return A pointer to the trimmed string.
     */
    char *Ltrim(char str[])
    {
        int len = strl(str);
        int start = 0;
        while (str[start] == ' ')
        {
            start++;
        }
        for (int i = start; i < len; i++)
        {
            str[i - start] = str[i];
        }
        str[len - start] = '\0';
        return str;
    }

    /**
     * @brief Removes trailing spaces from the end of a string.
     * @param str The string to trim from the right.
     * @return A pointer to the trimmed string.
     */
    char *Rtrim(char str[])
    {
        int len = strl(str);
        int end = len - 1;
        while (str[end] == ' ')
        {
            end--;
        }
        str[end + 1] = '\0';
        return str;
    }

    /**
     * @brief Removes spaces from both the start and end of a string.
     * @param str The string to clean.
     * @return A pointer to the cleaned string.
     */
    char *Trim(char str[])
    {
        Ltrim(str);
        Rtrim(str);
        return str;
    }

    /**
     * @brief Finds the first occurrence of a character in a string.
     * @param str The string to search in.
     * @param key The character to find.
     * @return The index of the first occurrence of the character, or -1 if not found.
     */
    int FindChar(char str[], char key)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
    /**
     * @brief Checks if a string contains a substring.
     * @param str The string to search in.
     * @param substr The substring to find.
     * @return 1 if the substring is found, 0 otherwise.
     */
    int Contains(char str[],char substr[]) {
        int k = 0;
        for (int i = 0; str[i] != 0; i++)
        {
            if (str[i] == substr[k])
            {
                k++;
                if (substr[k] == 0)
                {
                    return 1;
                }
            }
            else
            {
                k = 0;
            }
        }
        return 0;
    }

    /**
     * @brief Appends a string to the end of another string.
     * @param str The string to append to.
     * @param appendStr The string to append.
     * @return A pointer to the resulting string.
     */
    char * append(char str[], char appendStr[])
    {
        int len1 = strl(str);
        int len2 = strl(appendStr);
        for (int i = 0; i < len2; i++)
        {
            str[len1 + i] = appendStr[i];
        }
        str[len1 + len2] = '\0';
        return str;
    }
//=====================================
}
//--------------------------------------------------------
// End Of CPlusKit String / Character Array Functions
#endif