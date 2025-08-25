#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {
    int square_of_sum(const int& val) {
        int sum = val * (val + 1) / 2;
        return pow(sum, 2);
    }
    int sum_of_squares(const int& val) {
        int sum = val * (val + 1) * (2 * val + 1) / 6;
        return sum;
    }
    int difference(const int& val) {
        return square_of_sum(val) - sum_of_squares(val);
    }

// TODO: add your solution here

}  // namespace difference_of_squares
