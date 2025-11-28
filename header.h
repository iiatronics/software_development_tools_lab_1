#include <iostream>
#include <string>
#include <limits>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

void reverse_string(string& user_str);
void print_string(string user_str);
bool is_polindrome(string user_str);
int count_words(string user_str);
void count_words_occurrences(string user_str);
string sanitize_text(char user_symbol, string &user_string);
string trim_string(string &user_string, int new_lenght);