#include "nth_prime.h"
#include <stdexcept>
#include <cmath>

namespace nth_prime {
    int nth(int n) {
    if (n <= 0) throw std::domain_error("");
    int count = 0;   
    int candidate = 1;
    while (count < n) {
        candidate++;
        bool prime = true;
        for (int i = 2; i <= std::sqrt(candidate); i++) {
            if (candidate % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            count++;
        }
    }
    return candidate;
}

// TODO: add your solution here

}  // namespace nth_prime
