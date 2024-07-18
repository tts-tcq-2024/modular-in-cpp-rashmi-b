#include "ColorCoder.hpp"

int main() {
    testNumberToPair(4, ColorCoder::WHITE, ColorCoder::BROWN);
    testNumberToPair(5, ColorCoder::WHITE, ColorCoder::SLATE);

    testPairToNumber(ColorCoder::BLACK, ColorCoder::ORANGE, 12);
    testPairToNumber(ColorCoder::VIOLET, ColorCoder::SLATE, 25);

    return 0;
}