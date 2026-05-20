// graphics program to draw a circle.

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;

initgraph(&gd,&gm,"");

circle(250,200,100);

getch();
closegraph();

return 0;
}
