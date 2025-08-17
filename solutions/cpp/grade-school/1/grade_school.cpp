#include "grade_school.h"

namespace grade_school {

void school::add(const std::string& name, int grade) {
    students[grade].insert(name);
}

std::vector<std::string> school::grade(int grade_number) const {
    std::vector<std::string> result;
    auto it = students.find(grade_number);
    if (it != students.end()) {
        result.assign(it->second.begin(), it->second.end());
    }
    return result;
}

std::map<int, std::vector<std::string>> school::roster() const {
    std::map<int, std::vector<std::string>> result;
    for (const auto& [grade, names] : students) {
        result[grade] = std::vector<std::string>(names.begin(), names.end());
    }
    return result;
}

}  // namespace grade_school
