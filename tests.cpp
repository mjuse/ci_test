#include <gtest/gtest.h>
#include "utility.h"

TEST(UtilityTest, TestGetGreeting) {
  EXPECT_EQ("Hello, world", get_greeting());
}
