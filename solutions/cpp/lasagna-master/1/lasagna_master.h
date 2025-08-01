#ifndef LASAGNA_MASTER_H
#define LASAGNA_MASTER_H

#include <string>
#include <vector>

namespace lasagna_master {

    struct amount {
        int noodles;
        double sauce;
    };

    int preparationTime(const std::vector<std::string>& layers, int prep_time = 2);
    amount quantities(const std::vector<std::string>& layers);
    void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList);
    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient);
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions);

}  // namespace lasagna

#endif  
