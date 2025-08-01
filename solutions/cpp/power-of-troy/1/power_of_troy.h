#pragma once

#ifndef POWER_OF_TROY_H
#define POWER_OF_TROY_H

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human {
    std::shared_ptr<artifact> possession = nullptr;
    std::shared_ptr<power> own_power = nullptr;
    std::shared_ptr<power> influenced_by = nullptr;
};

void give_new_artifact(human& per, const std::string& weapon);
void exchange_artifacts(std::shared_ptr<artifact>& w1, std::shared_ptr<artifact>& w2);
void manifest_power(human& per, const std::string& pow);
void use_power(human& caster, human& target);
int power_intensity(human& per);
}  // namespace troy

#endif