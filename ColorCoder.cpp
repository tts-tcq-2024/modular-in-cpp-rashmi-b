#include "ColorCoder.hpp"

const char *MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char *MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorCoder::MajorColor ColorCoder::ColorPair::getMajor()
{
    return majorColor;
}
ColorCoder::MinorColor ColorCoder::ColorPair::getMinor()
{
    return minorColor;
}
std::string ColorCoder::ColorPair::ToString()
{
    std::string colorPairStr = MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[minorColor];
    return colorPairStr;
}

ColorCoder::ColorPair ColorCoder::GetColorFromPairNumber(int pairNumber)
{
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor =
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return ColorCoder::ColorPair(majorColor, minorColor);
}
int ColorCoder::GetPairNumberFromColor(ColorCoder::MajorColor major, ColorCoder::MinorColor minor)
{
    return major * numberOfMinorColors + minor + 1;
}

void ColorCoder::testNumberToPair(int pairNumber,
    ColorCoder::MajorColor expectedMajor,
    ColorCoder::MinorColor expectedMinor)
{
    ColorCoder::ColorPair colorPair =
        ColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void ColorCoder::testPairToNumber(
    ColorCoder::MajorColor major,
    ColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = ColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
