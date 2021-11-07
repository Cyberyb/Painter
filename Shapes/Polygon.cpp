#include "Polygon.h"

Polygon::Polygon(vector<Point> vertex)
{
    vertexes = vertex;
    num = vertexes.size();
}

void Polygon::paint(QImage *image)//使用自带的画线接口
{
    QPainter myPainter(image);
    QPen myPen(pixelColor);
    myPainter.setPen(myPen);
    for(size_t i = 0; i<num; i++)
    {
        myPainter.drawLine(vertexes[i].x,vertexes[i].y,vertexes[(i+1)%num].x,vertexes[(i+1)%num].y);
    }
}
