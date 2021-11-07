#ifndef POLYGON_H
#define POLYGON_H
#include<Shapes/PixelSet.h>
#include<vector>
#include<QPainter>
#include<QPen>
#include<Algorithms/AlgorithmBase.h>
using namespace std;

class Polygon:public PixelSet
{
protected:
    vector<Point> vertexes;//多边形的顶点
    size_t num;//顶点个数
public:
    Polygon(vector<Point> vertex);
    void paint(QImage* image);
};

#endif // POLYGON_H
