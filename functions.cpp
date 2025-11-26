#include "header.h"

void reverse_string(string& user_str)
{
    int end = user_str.length() - 1;
    char tmp = 0;

    for (int i = 0; i < end; i++)
    {
        tmp = user_str[i];
        user_str[i] = user_str[end];
        user_str[end] = tmp;

        end--;
    }
}

void print_string(string user_str)
{
    for (int i = 0; i < user_str.length(); i++)
    {
        cout << user_str[i];
    }

    cout << "\n";
}

bool is_polindrome(string user_str)
{
    string user_str_copy = user_str;

    reverse_string(user_str);

    for (int i = 0; i < user_str.length(); i++)
    {
        if(user_str_copy[i] != user_str[i])
        {
            return false;
        }
    }

    return true;
}