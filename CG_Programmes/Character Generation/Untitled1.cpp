#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char* ) "");
    
    line(50,60,50,190);//I
    
    line(70,60,70,190);//N
    line(70,60,110,190);
    line(110,190,110,60);
    
    line(130,65,130,190);//D
    arc(140,130,250,100,60);
    
    line(200,70,200,190);//I
    
    line(300,70,250,190);//A
    line(300,70,350,190);
    line(250,150,350,150);
    
    getch();
    closegraph();
}

