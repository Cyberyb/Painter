#ifndef CANVAS_H
#define CANVAS_H


#include <vector>
#include <QImage>
#include <QColor>
#include <Shapes/FoldLine.h>
#include <Shapes/Curve.h>
#include <Shapes/CtrlPoint.h>
#include <Shapes/Line.h>
#include <Shapes/Circle.h>
#include <Shapes/Polygon.h>

class Canvas{

protected:
    QColor canvasColor=0xFF0000;   //画笔颜色

public:
    int id_counter = 0;   //图形编号
    std::vector<PixelSet *> PixelSets;   //画布上所有图形的集合
   // void getid();
    int getNewID();
    void getImage(QImage *image);
    void drawCurve(ALGORITHM algo, FoldLine *fl);
    void drawPoint(Point pt);
    void drawLine(ALGORITHM algo,Point *st,Point *ed);
    void drawCircle(ALGORITHM algo,Point &center,int x);
    FoldLine* drawFoldLine(const vector<Point>& vertexes);
    void drawCtrlPoint(int index, FoldLine * fl);
    void drawPolygon(vector<Point>& vertexes);
    void setColor(QColor pcolor);
    void clear_all();
};


#endif //CANVAS_H
