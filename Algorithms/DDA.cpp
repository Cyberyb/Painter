#include <Algorithms/DDA.h>
#include <QDebug>

void drawLine_DDA(int x0,int x1,int y0,int y1, PixelSet& myset){
        myset.setColor(Qt::blue);
        int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
        int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1;
        int err = (dx>dy ? dx : -dy)/2, e2;
        for(;;){
           myset.add(x0,y0);
           if (x0==x1 && y0==y1) break;
           e2 = err;
           if (e2 >-dx) { err -= dy; x0 += sx; }
           if (e2 < dy) { err += dx; y0 += sy; }
         }
}
