#include "doctor_data.h"

namespace heaven {

Vessel::Vessel(std::string n, int gen, star_map::System sys) {
    name = n;
    generation = gen;
    current_system = sys;
}

Vessel Vessel::replicate(std::string new_name) const {
    return Vessel(new_name, generation + 1, current_system);
}

void Vessel::make_buster() {
    busters++;
}

bool Vessel::shoot_buster() {
    if (busters > 0) {
        busters--;
        return true;
    }
    return false;
}

std::string get_older_bob(const Vessel& v1, const Vessel& v2) {
    if (v1.generation < v2.generation) return v1.name;
    return v2.name;
}

bool in_the_same_system(const Vessel& v1, const Vessel& v2) {
    return v1.current_system == v2.current_system;
}

} // namespace heaven
