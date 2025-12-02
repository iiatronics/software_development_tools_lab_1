#include <iostream>
#include <string>
#include <limits>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

// @brief Змінює порядок символів у рядку на зворотний.
// Функція працює безпосередньо з переданим рядком (in-place), 
// змінюючи оригінальний об'єкт.
// @param user_str Посилання на рядок, який потрібно перевернути.
// @example
// string s = "hello";
// reverse_string(s); 
// s стає "olleh" 

void reverse_string(string& user_str);

// @brief Виводить рядок у консоль посимвольно.
// @param user_str Рядок для виводу.

void print_string(string user_str);

// @brief Перевіряє, чи є рядок паліндромом.
// Перевірка ігнорує регістр літер (A == a) та пробіли.
// @param user_str Посилання на рядок для перевірки.
// @return true Якщо рядок є паліндромом.
// @return false Якщо рядок не є паліндромом.
// @example
// string s = "Race Car";
// bool result = is_polindrome(s); // true

bool is_polindrome(string& user_str);

// @brief Підраховує кількість слів у рядку.
// Словом вважається будь-яка послідовність символів, розділена пробілами.
// @param user_str Вхідний рядок.
// @return int Кількість знайдених слів.
int count_words(string user_str);

// @brief Аналізує частоту появи кожного слова в тексті.
// Результат виводиться безпосередньо в консоль у форматі: word [count].
// @param user_str Рядок для аналізу.

void count_words_occurrences(string user_str);

// @brief Видаляє всі входження заданого символу з рядка.
// @param user_symbol Символ, який потрібно видалити.
// @param user_string Посилання на рядок, з якого видаляємо символ.
// @return string Нова версія рядка без вказаного символу.
// @example
// string s = "banana";
// sanitize_text('a', s); // поверне "bnn"

string sanitize_text(char user_symbol, string& user_string);

// @brief Обрізає рядок до вказаної довжини.
// @param user_string Посилання на рядок, який треба обрізати.
// @param new_lenght Нова довжина рядка.
// @return string Обрізаний рядок.
// @throws std::out_of_range (Умовно) Виводить повідомлення про помилку в консоль, 
// якщо new_lenght некоректна (від'ємна або більша за поточну довжину).

string trim_string(string &user_string, int new_lenght);