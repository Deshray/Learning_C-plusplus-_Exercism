#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool connection_check(pillar_men_sensor* ptr) {
    if (ptr == nullptr) {
        return false;
    }
    return true;
}    

int activity_counter(pillar_men_sensor* ptr, int num) {
    int val = 0;
    for (int i = 0; i < num; i++) {
        val = val + (ptr + i)->activity;
    }
    return val;
}

bool alarm_control(pillar_men_sensor* ptr) {
    if (ptr == nullptr || ptr->activity <= 0) {
        return false;
    }
    return true;
}

bool uv_alarm(pillar_men_sensor* sensor) {
    if (sensor == nullptr) {
        return false;
    }
    int uv_value = uv_light_heuristic(&sensor->data);
    return uv_value > sensor->activity;
}

}  // namespace speedywagon
