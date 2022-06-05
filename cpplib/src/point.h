#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* CPoint;

CPoint CPointFromXY(int64_t x, int64_t y);

void CPointPrint(CPoint pPtr);

#ifdef __cplusplus
}
#endif
