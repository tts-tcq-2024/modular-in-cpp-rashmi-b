#include "ColorCoderTester.hpp"

void ColorCoderTester::testNumberToPair(int pairNumber,
    ColorCoder::MajorColor expectedMajor,
    ColorCoder::MinorColor expectedMinor)
{
    ColorCoder::ColorPair colorPair =
        ColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void ColorCoderTester::testPairToNumber(
    ColorCoder::MajorColor major,
    ColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = ColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}