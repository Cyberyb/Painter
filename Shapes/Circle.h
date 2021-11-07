#ifndef CIRCLE_H
#define CIRCLE_H

#include "PixelSet.h"
#include <vector>
#include <Algorithms/AlgorithmBase.h>
#include <QPainter>
#include <Algorithms/Midpoint.h>

using namespace std;

class Circle : public PixelSet
{
public:
    Circle(ALGORITHM algo,int x,int y,int r);
    void paint(QImage *image);
    void refresh();
private:
    vector<Point> vertexes;
    ALGORITHM algorithm;
    int cx;
    int cy;
    int cr;
};

#endif // CIRCLE_H
