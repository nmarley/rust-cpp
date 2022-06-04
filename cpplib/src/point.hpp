#include <stdint.h>

namespace cpplib {

class Point {
 public:
    static const uint8_t HASH_LEN = 32;
    Point(int64_t x, int64_t y);

 private:
    int64_t x;
    int64_t y;
};

}
