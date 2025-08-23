#include "nucleotide_count.h"
#include <map>
#include <string>
#include <stdexcept>

namespace nucleotide_count {
    std::map<char, int> count(const std::string& strand) {
        std::map<char, int> nuc{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for (size_t i = 0; i < strand.size(); ++i) {
            if (strand[i] != 'A' && strand[i] != 'T' && strand[i] != 'C' && strand[i] != 'G') {
                throw std::invalid_argument("");
            }
            nuc[strand[i]] = nuc[strand[i]] + 1;
        }
        return nuc;
    }
// TODO: add your solution here

}  // namespace nucleotide_count
