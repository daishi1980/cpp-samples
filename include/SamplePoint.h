#pragma once

#include "Lib_DLL.h"

class _LIB_API SamplePoint {
public:
    SamplePoint(int x, int y);
    int GetX();
    int GetY();
private:
    int _x;
    int _y;
};