#include <roman/roman.h>

#include <gtest/gtest.h>

#include <stdexcept>

TEST(RomanTest, Dummy) {
    EXPECT_THROW(arabic_to_roman(0), std::domain_error);
}
