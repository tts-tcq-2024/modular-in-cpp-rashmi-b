#include "ColorCoderTester.hpp"

int main() {
    ColorCoderTester::testNumberToPair(4, ColorCoder::WHITE, ColorCoder::BROWN);
    ColorCoderTester::testNumberToPair(5, ColorCoder::WHITE, ColorCoder::SLATE);

    ColorCoderTester::testPairToNumber(ColorCoder::BLACK, ColorCoder::ORANGE, 12);
    ColorCoderTester::testPairToNumber(ColorCoder::VIOLET, ColorCoder::SLATE, 25);

    return 0;
}