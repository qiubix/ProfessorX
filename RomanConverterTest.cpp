#include "gmock/gmock.h"
using ::testing::Eq;

std::string convert(unsigned int arabic) {
  return "I";
}

TEST(RomanNumeralConverter, CanConvertPositiveDigits) {
  EXPECT_THAT(convert(1), Eq("I"));
}
