#include "grains.h"

namespace grains {

// TODO: add your solution here
unsigned long long int square(int pos) {
    return 1ULL << (pos - 1);
}

unsigned long long int total() {
    return (1ULL << 63)*2 - 1;
}
}  // namespace grains
