#include "gmock/gmock.h"
using ::testing::Eq;
using namespace std;

string convert(unsigned int arabic) {
  const auto arabicToRomanConversions = {
    make_pair(10u, "X"),
    make_pair(5u, "V"),
    make_pair(1u, "I")
  };
  string roman{""};

  for ( auto arabicToRoman : arabicToRomanConversions )
    while ( arabic >= arabicToRoman.first ) {
      arabic -= arabicToRoman.first;
      roman += arabicToRoman.second;
    }

  return roman;
}

TEST(RomanNumeralConverter, CanConvertPositiveDigits) {
  EXPECT_THAT(convert(1), Eq("I"));
  EXPECT_THAT(convert(2), Eq("II"));
  EXPECT_THAT(convert(3), Eq("III"));
  EXPECT_THAT(convert(10), Eq("X"));
  EXPECT_THAT(convert(11), Eq("XI"));
  EXPECT_THAT(convert(12), Eq("XII"));
  EXPECT_THAT(convert(13), Eq("XIII"));
  EXPECT_THAT(convert(20), Eq("XX"));
  EXPECT_THAT(convert(5), Eq("V"));
  EXPECT_THAT(convert(50), Eq("L"));
}
