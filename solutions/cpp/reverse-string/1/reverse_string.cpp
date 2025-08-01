#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string word) {
        std::string reverse;
        for (int i = word.length() - 1; i >= 0; i--) {
            reverse += word.substr(i, 1);
        }
        return reverse;
    }
// TODO: add your solution here

}  // namespace reverse_string
