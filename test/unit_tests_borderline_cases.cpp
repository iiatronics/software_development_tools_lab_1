#include <gtest/gtest.h>
#include "../header.h"

using testing::internal::CaptureStdout;
using testing::internal::GetCapturedStdout;

//TEST for extreme cases, with exeptions

//reverse 
TEST(string_func_extreme_test, reverse_string_blank)
{
    string input = "";

    reverse_string(input);
    ASSERT_EQ("", input);
}

TEST(string_func_extreme_test, reverse_string_spaces)
{
    string input = "   ";

    reverse_string(input);
    ASSERT_EQ("   ", input);
}

//palindrome

TEST(string_func_extreme_test, polindrome_check_with_spaces)
{
    string input = "a bc c ba";

    string expected = "abccba";

    ASSERT_TRUE(is_polindrome(input));


    ASSERT_EQ(expected, input) << "string is changed to its polindrome\n";
}

TEST(string_func_extreme_test, polindrome_check_with_capital)
{
    string input = "mADam maDAm";

    string expected = "madammadam";

    ASSERT_TRUE(is_polindrome(input));

    ASSERT_EQ(expected, input) << "string is changed to its polindrome\n";
}

//count words
TEST(string_func_extreme_test, extreme_string_word_count_blank) 
{
    string input = "";

    ASSERT_EQ(0, count_words(input));
}

TEST(string_func_extreme_test, extreme_string_word_count_space) 
{
    string input = "   ";

    ASSERT_EQ(0, count_words(input));
}

TEST(string_func_extreme_test, extreme_string_word_count_space_extra) 
{
    string input = "hello   world my  name    is     Iia";

    ASSERT_EQ(6, count_words(input));
}

//count word occurrances

TEST(string_func_extreme_test, extreme_string_word_count_occurrance_blank) 
{
    string input = "";
    
    string expected_output = "";

    testing::internal::CaptureStdout(); 
    count_words_occurrences(input);
    string actual_output = testing::internal::GetCapturedStdout();

    ASSERT_EQ(expected_output, actual_output) << "wrong word count\n";
}

TEST(string_func_extreme_test, extreme_string_word_count_occurrance_space) 
{
    string input = "   ";
    
    string expected_output = "";

    testing::internal::CaptureStdout(); 
    count_words_occurrences(input);
    string actual_output = testing::internal::GetCapturedStdout();

    ASSERT_EQ(expected_output, actual_output) << "wrong word count\n";
}

//sanitize string (remove char from string)

TEST(string_func_regular_test, remove_extreme_character) 
{
    string input = "";
    char symbol_to_remove = '@';
    string expected = "";

    string actual = sanitize_text(symbol_to_remove, input);

    ASSERT_EQ(expected, actual) << "not correct\n";
}

TEST(string_func_regular_test, remove_extreme_character_blank) 
{
    string input = "hello world";
    char symbol_to_remove = 0;
    string expected = "hello world";

    string actual = sanitize_text(symbol_to_remove, input);

    ASSERT_EQ(expected, actual) << "not correct\n";
}

TEST(string_func_regular_test, remove_extreme_character_wrong) 
{
    string input = "hello world";
    char symbol_to_remove = '@';
    string expected = "hello world";

    string actual = sanitize_text(symbol_to_remove, input);

    ASSERT_EQ(expected, actual) << "not correct\n";
}