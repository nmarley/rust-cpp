#include "point.hpp"

namespace cpplib {

Point::Point(int64_t x, int64_t y) {
    this->x = x;
    this->y = y;
}

void Point::Print() {
    std::cout << "Point(" << this->x << ", " << this->y << ")" << std::endl;
}

}
