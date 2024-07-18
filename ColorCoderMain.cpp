#include "ColorCoder.hpp"
#include "ColorCoderTester.hpp"

int main() {
    testNumberToPair(4, ColorCoder::BLACK, ColorCoder::RED);
    testNumberToPair(5, ColorCoder::BLACK, ColorCoder::BLUE);

    testPairToNumber(ColorCoder::WHILE, ColorCoder::GREEN, 3);
    testPairToNumber(ColorCoder::YELLOW, ColorCoder::BLUE, 16);

    ColorCoder::printWiringManual();

    return 0;
}