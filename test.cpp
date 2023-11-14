#include <iostream>
#include <cmath>

int main() {
    int mSize = 7;
    int k = -10;

    int result1 = (mSize - abs(k) % mSize) % mSize;
    int result2 = (k + mSize) % mSize;

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}
