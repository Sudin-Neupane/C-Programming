// graphics program to draw a polygon.
#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
graphi// Coordinates of polygon points
int poly[10]={200,100,300,150,280,250,150,250,120,150};

initgraph(&gd,&gm,"");

// Draw polygon with 5 points
drawpoly(5,poly);

getch();
closegraph();

return 0;
}
