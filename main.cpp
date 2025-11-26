#include "header.h"

using namespace std;

int main()
{
    int option = 0;

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
            //palindrome
            break;
        case 3:
            //word count
            break;
        case 4:
            //remove additional chars
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