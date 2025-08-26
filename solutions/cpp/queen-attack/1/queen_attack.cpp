#include "queen_attack.h"
#include <cmath>

namespace queen_attack {

chess_board::chess_board(std::pair<int,int> white, std::pair<int,int> black)
    : white_(white), black_(black) {
    if (white_.first < 0 || white_.first >= 8 ||
        white_.second < 0 || white_.second >= 8 ||
        black_.first < 0 || black_.first >= 8 ||
        black_.second < 0 || black_.second >= 8) {
        throw std::domain_error("Invalid position");
    }
    if (white_ == black_) {
        throw std::domain_error("Queens cannot share the same position");
    }
}

std::pair<int,int> chess_board::white() const {
    return white_;
}

std::pair<int,int> chess_board::black() const {
    return black_;
}

bool chess_board::can_attack() const {
    return (white_.first == black_.first) ||
           (white_.second == black_.second) ||
           (std::abs(white_.first - black_.first) == 
            std::abs(white_.second - black_.second));
}

} // namespace queen_attack
