#ifndef COLOR_CODER_HPP
#define COLOR_CODER_HPP

#include <iostream>
#include <assert.h>
#include <string>

namespace ColorCoder
{

  enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
  enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };
  
  class ColorPair
  {
  public:
    ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor)
    {
    }

    MajorColor getMajor();
    MinorColor getMinor();
    std::string ToString();

    private:
    MajorColor majorColor;
    MinorColor minorColor;
  };

  ColorPair GetColorFromPairNumber(int pairNumber);
  int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif