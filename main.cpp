#include "header.h"

using namespace std;

int main()
{
    int option = 0, word_count = 0;
    char user_symbol = 0;

    string user_string;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Returns the string in reverse order.\n";
        cout << "2. Checks if a string is a palindrome (ignoring case/spaces).\n";
        cout << "3. Counts the number of words and the order of occurrence of each word.\n";
        cout << "4. Removes extra spaces and/or special characters.\n";
        cout << "5. Trims a string to a specified length.\n";
        cout << "0. Exit\n";

        cout << "Your choice: ";
        cin >> option;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(option > 0 && option < 6)
        {
            cout << "Enter your string:\n";
            getline(cin, user_string);
        }

        switch (option)
        {
        case 1:

            cout << "Your string before reverse:\n";
            print_string(user_string);

            reverse_string(user_string);

            cout << "Your string after reverse:\n";
            print_string(user_string);

            break;
        case 2:

            if(is_polindrome(user_string))
            {
                cout << "Your string is polindrome\n";
            }
            else
            {
                cout << "Your string is NOT polindrome\n";
            }

            break;
        case 3:

            word_count = count_words(user_string);
            cout << "Word count of your string is: " << word_count << "\n";
            count_words_occurrences(user_string);
            
            break;
        case 4:
        
            cout << "Enter char to remove from string:\n";
            cin >> user_symbol;

            user_string = sanitize_text(user_symbol, user_string);

            cout << "String with removed [" << user_symbol << "] from string:\n";
            print_string(user_string);

            break;
        case 5:
            //string trim
            break; 
        case 0:
            cout <<"Exit\n";
            break;
        default:
            cout <<"Wrong option\n";
            break;
        }
    } while (option != 0);
    
    return 0;
}