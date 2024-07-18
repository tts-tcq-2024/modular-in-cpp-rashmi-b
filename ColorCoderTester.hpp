#ifndef COLOR_CODER_TESTER_HPP
#define COLOR_CODER_TESTER_HPP

#include "ColorCoder.hpp"

namespace ColorCoderTester
{
  void testNumberToPair(int pairNumber,
  ColorCoder::MajorColor expectedMajor,
  ColorCoder::MinorColor expectedMinor);

  void testPairToNumber(
  ColorCoder::MajorColor major,
  ColorCoder::MinorColor minor,
  int expectedPairNumber);
}
#endif