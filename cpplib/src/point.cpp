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

#include "point.h"

CPoint CPointFromXY(int64_t x, int64_t y) {
    cpplib::Point* pPtr = new cpplib::Point(cpplib::Point(x, y));
    return pPtr;
}
