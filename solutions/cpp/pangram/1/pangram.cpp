#include "pangram.h"
#include <unordered_set>
#include <cctype>

namespace pangram {

bool is_pangram(const std::string& sentence) {
    std::unordered_set<char> letters;

    for (char ch : sentence) {
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            letters.insert(std::tolower(static_cast<unsigned char>(ch)));
        }
    }

    return letters.size() == 26;
}

}
