#include "hamming.h"
#include <string>
#include <stdexcept>

namespace hamming {
    int compute(const std::string& og, const std::string& sec) {
        if (og.size() != sec.size()) {
            throw std::domain_error("Strands must be of equal length");
        }
        int ham = 0;
        for (size_t i = 0; i < og.size(); ++i) {
            if (og[i] != sec[i]) {
                ++ham;
            }
        }
        return ham;
    }
// TODO: add your solution here

}  // namespace hamming
