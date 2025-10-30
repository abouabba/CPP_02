#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cstring>

int main() {
    float f = 3.4f;
    int  bits;
    std::memcpy(&bits, &f, sizeof(bits));
    for (int i=31;i>=0;--i)
        std::cout << ((bits >> i) & 1);
    std::cout << std::endl;
}
