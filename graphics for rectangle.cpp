// graphics program to draw a rectangle.

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

rectangle(150,100,400,300);

getch();
closegraph();

return 0;
}
