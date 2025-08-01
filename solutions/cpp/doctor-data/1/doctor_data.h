#pragma once
#include <string>

namespace star_map {
    enum class System {
        Sol,
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani
    };
}

namespace heaven {

class Vessel {
public:
    std::string name;
    int generation;
    star_map::System current_system;
    int busters = 0;

    Vessel(std::string name, int generation, star_map::System system = star_map::System::Sol);

    Vessel replicate(std::string new_name) const;
    void make_buster();
    bool shoot_buster();
};

std::string get_older_bob(const Vessel& v1, const Vessel& v2);
bool in_the_same_system(const Vessel& v1, const Vessel& v2);

} // namespace heaven
