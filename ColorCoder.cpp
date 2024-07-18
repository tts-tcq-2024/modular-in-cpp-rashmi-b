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

void ColorCoder::printWiringManual()
{
    for (int pairNum = 1; pairNum < 26; pairNum++)
    {
        ColorCoder::ColorPair colorPair = ColorCoder::GetColorFromPairNumber(pairNum);
        std::cout << "Colour pair: " << colorPair.ToString() << "\t->\tPair Number: " << pairNum<< std::endl;
    }
}