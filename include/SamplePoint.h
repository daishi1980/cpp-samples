#pragma once

class SamplePoint {
public:
    SamplePoint(int x, int y);
    int GetX();
    int GetY();
private:
    int _x;
    int _y;
};