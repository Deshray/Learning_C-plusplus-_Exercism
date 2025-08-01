#pragma once
#include <string>

namespace triangle {

enum class flavor {
    equilateral,
    isosceles,
    scalene
};

// Detects invalid triangles and returns the correct flavor
flavor kind(double a, double b, double c);

}  // namespace triangle
