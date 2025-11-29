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
    string input = "mADam";

    string expected = "maDAm";

    ASSERT_TRUE(is_polindrome(input));

    ASSERT_EQ(expected, input) << "string is changed to its polindrome\n";
}
