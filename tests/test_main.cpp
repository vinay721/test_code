// tests/test_main.cpp
#include <gtest/gtest.h>

// Declare the function you're testing
int add(int a, int b);

// Tests
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(AddTest, MixedNumbers) {
    EXPECT_EQ(add(-2, 3), 1);
}
