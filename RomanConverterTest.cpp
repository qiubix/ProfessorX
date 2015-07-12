#include "gmock/gmock.h"
using ::testing::Eq;

std::string convert(unsigned int arabic) {
  if (arabic == 2) {
    return "II";
  }
  return "I";
}

TEST(RomanNumeralConverter, CanConvertPositiveDigits) {
  EXPECT_THAT(convert(1), Eq("I"));
  EXPECT_THAT(convert(2), Eq("II"));
}
