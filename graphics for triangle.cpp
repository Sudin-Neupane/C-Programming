// graphics program to draw a triangle.

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;

initgraph(&gd,&gm,"");

// Triangle using lines
line(200,100,100,300);
line(100,300,300,300);
line(300,300,200,100);

getch();
closegraph();

return 0;
}
