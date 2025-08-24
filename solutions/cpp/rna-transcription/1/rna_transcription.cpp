#include "rna_transcription.h"
#include <map>
#include <string>

namespace rna_transcription {
    std::map<char, char> match = {{'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}};
    std::string to_rna(const std::string& strand) {
        std::string rna = "";
        for (size_t i = 0; i < strand.size(); ++i) {
            rna = rna + match[strand[i]];
        }
        return rna;
    }
    
    char to_rna(const char& strand) {
        return match[strand];
    }
// TODO: add your solution here

}  // namespace rna_transcription
