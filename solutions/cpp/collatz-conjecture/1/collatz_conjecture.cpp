#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {
    int steps(const int& start) {
        if (start <= 0) {
            throw std::domain_error("");
        }
        if (start == 1) {
            return 0; // base case
        }

        if (start % 2 == 0) {
            return 1 + steps(start / 2);
        } else {
            return 1 + steps(3 * start + 1);
        }
    }
// TODO: add your solution here

}  // namespace collatz_conjecture
