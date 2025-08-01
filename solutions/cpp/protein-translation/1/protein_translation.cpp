#include "protein_translation.h"
#include <unordered_map>

namespace protein_translation {

    std::vector<std::string> proteins(const std::string& rna) {
        std::unordered_map<std::string, std::string> codon_map{
            {"AUG", "Methionine"},
            {"UUU", "Phenylalanine"}, {"UUC", "Phenylalanine"},
            {"UUA", "Leucine"}, {"UUG", "Leucine"},
            {"UCU", "Serine"}, {"UCC", "Serine"}, {"UCA", "Serine"}, {"UCG", "Serine"},
            {"UAU", "Tyrosine"}, {"UAC", "Tyrosine"},
            {"UGU", "Cysteine"}, {"UGC", "Cysteine"},
            {"UGG", "Tryptophan"},
            {"UAA", "STOP"}, {"UAG", "STOP"}, {"UGA", "STOP"}
        };

        std::vector<std::string> result;
        for (std::size_t i = 0; i + 2 < rna.length(); i += 3) {
            std::string codon = rna.substr(i, 3);
            const auto& protein = codon_map[codon];
            if (protein == "STOP") break;
            if (!protein.empty()) result.push_back(protein);
        }

        return result;
    }

}
