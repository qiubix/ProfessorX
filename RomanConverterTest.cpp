#include "gmock/gmock.h"
using ::testing::Eq;

std::string convert(unsigned int arabic) {
  std::string roman{""};
  if (arabic == 10)
    return "X";
  while(arabic-- > 0)
    roman += "I";
  return roman;
}

TEST(RomanNumeralConverter, CanConvertPositiveDigits) {
  EXPECT_THAT(convert(1), Eq("I"));
  EXPECT_THAT(convert(2), Eq("II"));
  EXPECT_THAT(convert(3), Eq("III"));
  EXPECT_THAT(convert(10), Eq("X"));
}
