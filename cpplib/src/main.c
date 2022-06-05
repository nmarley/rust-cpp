#include "cpplib.h"

int main(void) {
    // warning: this allocates
    CPoint pPtr = CPointFromXY(10, 17);

    // debug
    CPointPrint(pPtr);
}
