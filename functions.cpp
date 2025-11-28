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
    // for (int i = 0; i < user_str.length(); i++)
    // {
    //     cout << user_str[i];
    // }
    int i = 0;

    while(user_str[i] != '\0')
    {
        cout << user_str[i];
        i++;
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

int count_words(string user_str)
{
    if(user_str.length() == 0)
    {
        return 0;
    }

    int count = 0;
    bool was_in_word_flag = false;

    for (int i = 0; i < user_str.length(); i++)
    {
        if(user_str[i] == ' ')
        {
            was_in_word_flag = false;
        }
        else
        {
            if (was_in_word_flag == false)
            {
                count++;
                was_in_word_flag = true;
            }
        }
    }

    return count;
}

void count_words_occurrences(string user_str)
{
    map<string, int> words_count;

    string word;
    stringstream stream(user_str);
    
    while(stream >> word)
    {
        words_count[word]++;
    }

    for (const auto& pair : words_count)
    {
        cout << pair.first << " [" << pair.second << "]\n";
    }
}

string sanitize_text(char user_symbol, string& user_string)
{
    vector<char> new_str;

    for (int i = 0; i < user_string.length(); i++)
    {
        if(user_string[i] != user_symbol)
        {
            new_str.push_back(user_string[i]);
        }

        user_string[i] = 0;
    }

    for (int i = 0; i < new_str.size(); i++)
    {
        user_string[i] = new_str[i];
    }

    return user_string;
}