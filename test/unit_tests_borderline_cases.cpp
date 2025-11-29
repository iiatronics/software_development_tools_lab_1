#include <gtest/gtest.h>
#include "../header.h"

using testing::internal::CaptureStdout;
using testing::internal::GetCapturedStdout;

//TEST for extreme cases, with exeptions

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
