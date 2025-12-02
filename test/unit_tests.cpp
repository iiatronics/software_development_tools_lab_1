#include <gtest/gtest.h>
#include "../header.h"

using testing::internal::CaptureStdout;
using testing::internal::GetCapturedStdout;

//TEST for basic use, without exeptions

TEST(string_func_regular_test, reverse_string)
{
    string input = "hello world";

    reverse_string(input);
    ASSERT_EQ("dlrow olleh", input);
}

TEST(string_func_regular_test, polindrome_check_true)
{
    string input = "123321";

    string expected = "123321";

    ASSERT_TRUE(is_polindrome(input));

    ASSERT_EQ(expected, input) << "string is changed to its polindrome\n";
}

TEST(string_func_regular_test, polindrome_check_false)
{
    string input = "qwerty";

    ASSERT_FALSE(is_polindrome(input));
}

TEST(string_func_regular_test, averega_string_word_count) 
{
    string input = "Hello world my name is Iia";

    ASSERT_EQ(6, count_words(input));
}

TEST(string_func_regular_test, average_occurrences_in_str)
{
    string input = "radiohead ra dio head radio head radiohehe ra ra ra";
    
    string expected_output = "dio [1]\nhead [2]\nra [4]\nradio [1]\nradiohead [1]\nradiohehe [1]\n";

    testing::internal::CaptureStdout(); 
    count_words_occurrences(input);
    string actual_output = testing::internal::GetCapturedStdout();

    ASSERT_EQ(expected_output, actual_output) << "wrong word count\n";
}

TEST(string_func_regular_test, remove_normal_character) 
{
    string input = "hello**world*";
    char symbol_to_remove = '*';
    string expected = "helloworld";

    string actual = sanitize_text(symbol_to_remove, input);

    ASSERT_EQ(expected, actual) << "not correct\n";
}

TEST(string_func_regular_test, average_trim) 
{
    string input = "hello world";
    int new_length = 8;
    string expected = "hello wo"; 

    string actual = trim_string(input, new_length);
    
    ASSERT_EQ(expected, actual.substr(0, new_length)); 
}