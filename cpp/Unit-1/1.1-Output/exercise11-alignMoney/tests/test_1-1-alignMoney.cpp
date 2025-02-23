#include <gtest/gtest.h>
#include "1-1-alignMoney.cpp"

TEST(AlignMoneyTest, TestCase1) {
    EXPECT_EQ(alignMoney(1.234), 1.23);
}

TEST(AlignMoneyTest, TestCase2) {
    EXPECT_EQ(alignMoney(2.567), 2.57);
}

TEST(AlignMoneyTest, TestCase3) {
    EXPECT_EQ(alignMoney(3.890), 3.89);
}