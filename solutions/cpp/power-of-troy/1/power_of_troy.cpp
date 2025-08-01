#include "power_of_troy.h"

namespace troy {
void give_new_artifact(human& per, const std::string& weapon) {
    per.possession = std::make_shared<artifact>(weapon);
}

void exchange_artifacts(std::shared_ptr<artifact>& w1, std::shared_ptr<artifact>& w2) {
    std::swap(w1, w2);
}

void manifest_power(human& per, const std::string& pow) {
    per.own_power = std::make_shared<power>(pow);
}

void use_power(human& caster, human& target) {
    target.influenced_by = caster.own_power;
}

int power_intensity(human& per) {
    if (per.own_power == nullptr) {
        return 0;
    }
    return per.own_power.use_count();
}

}  // namespace troy
