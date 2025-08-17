#pragma once
#include <map>
#include <set>
#include <string>
#include <vector>

namespace grade_school {

class school {
public:
    void add(const std::string& name, int grade);
    std::vector<std::string> grade(int grade_number) const;
    std::map<int, std::vector<std::string>> roster() const;

private:
    std::map<int, std::set<std::string>> students;
};

}  // namespace grade_school
